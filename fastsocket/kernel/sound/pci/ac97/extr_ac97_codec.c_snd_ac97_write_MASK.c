
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_ac97 {int id; TYPE_2__* bus; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* write ) (struct snd_ac97*,unsigned short,unsigned short) ;} ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int FUNC_0 (struct snd_ac97*,unsigned short) ;
 int FUNC_1 (struct snd_ac97*,unsigned short,unsigned short) ;
 int FUNC_2 (struct snd_ac97*,unsigned short,unsigned short) ;

void FUNC_3(struct snd_ac97 *VAR_4, unsigned short VAR_5, unsigned short VAR_6)
{
 if (!FUNC_0(VAR_4, VAR_5))
  return;
 if ((VAR_4->id & 0xffffff00) == VAR_1) {

  if (VAR_5 == VAR_2 || VAR_5 == VAR_0)
   VAR_4->bus->ops->write(VAR_4, VAR_3, 0);
 }
 VAR_4->bus->ops->write(VAR_4, VAR_5, VAR_6);
}
