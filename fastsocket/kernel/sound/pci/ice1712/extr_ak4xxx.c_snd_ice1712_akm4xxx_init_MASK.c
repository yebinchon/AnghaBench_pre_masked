
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ice1712 {int card; } ;
struct TYPE_2__ {int * write; int * unlock; int * lock; } ;
struct snd_akm4xxx {unsigned long* private_value; TYPE_1__ ops; struct snd_ice1712** private_data; int card; } ;
struct snd_ak4xxx_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_ak4xxx_private* FUNC_0 (int,int ) ;
 int FUNC_1 (struct snd_akm4xxx*) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;

int FUNC_2(struct snd_akm4xxx *VAR_5, const struct snd_akm4xxx *VAR_6,
        const struct snd_ak4xxx_private *VAR_7, struct snd_ice1712 *VAR_8)
{
 struct snd_ak4xxx_private *VAR_9;

 if (VAR_7 != ((void*)0)) {
  VAR_9 = FUNC_0(sizeof(*VAR_9), VAR_1);
  if (VAR_9 == ((void*)0))
   return -VAR_0;
  *VAR_9 = *VAR_7;
 } else {
  VAR_9 = ((void*)0);
 }
 *VAR_5 = *VAR_6;
 VAR_5->card = VAR_8->card;
        VAR_5->private_value[0] = (unsigned long)VAR_9;
 VAR_5->private_data[0] = VAR_8;
 if (VAR_5->ops.lock == ((void*)0))
  VAR_5->ops.lock = VAR_2;
 if (VAR_5->ops.unlock == ((void*)0))
  VAR_5->ops.unlock = VAR_3;
 if (VAR_5->ops.write == ((void*)0))
  VAR_5->ops.write = VAR_4;
 FUNC_1(VAR_5);
 return 0;
}
