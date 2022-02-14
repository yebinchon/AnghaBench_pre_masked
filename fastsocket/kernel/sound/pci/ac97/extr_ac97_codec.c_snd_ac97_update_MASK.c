
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_ac97 {unsigned short* regs; int reg_mutex; int reg_accessed; TYPE_2__* bus; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* write ) (struct snd_ac97*,unsigned short,unsigned short) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned short,int ) ;
 int FUNC_3 (struct snd_ac97*,unsigned short) ;
 int FUNC_4 (struct snd_ac97*,unsigned short,unsigned short) ;

int FUNC_5(struct snd_ac97 *VAR_1, unsigned short VAR_2, unsigned short VAR_3)
{
 int VAR_4;

 if (!FUNC_3(VAR_1, VAR_2))
  return -VAR_0;
 FUNC_0(&VAR_1->reg_mutex);
 VAR_4 = VAR_1->regs[VAR_2] != VAR_3;
 if (VAR_4) {
  VAR_1->regs[VAR_2] = VAR_3;
  VAR_1->bus->ops->write(VAR_1, VAR_2, VAR_3);
 }
 FUNC_2(VAR_2, VAR_1->reg_accessed);
 FUNC_1(&VAR_1->reg_mutex);
 return VAR_4;
}
