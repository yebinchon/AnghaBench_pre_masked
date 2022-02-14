
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pmac {int* awacs_reg; int reg_lock; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 struct snd_pmac* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_pmac*,int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
         struct snd_ctl_elem_value *VAR_2)
{
 struct snd_pmac *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = VAR_1->private_value & 0xff;
 int VAR_5 = (VAR_1->private_value >> 8) & 0xff;
 int VAR_6 = (VAR_1->private_value >> 16) & 1;
 int VAR_7, VAR_8;
 unsigned long VAR_9;
 unsigned int VAR_10[2];

 VAR_10[0] = VAR_2->value.integer.value[0];
 VAR_10[1] = VAR_2->value.integer.value[1];
 if (VAR_10[0] > 0x0f || VAR_10[1] > 0x0f)
  return -VAR_0;
 if (VAR_6) {
  VAR_10[0] = 0x0f - VAR_10[0];
  VAR_10[1] = 0x0f - VAR_10[1];
 }
 VAR_10[0] &= 0x0f;
 VAR_10[1] &= 0x0f;
 FUNC_2(&VAR_3->reg_lock, VAR_9);
 VAR_8 = VAR_3->awacs_reg[VAR_4];
 VAR_7 = VAR_8 & ~(0xf | (0xf << VAR_5));
 VAR_7 |= VAR_10[0] << VAR_5;
 VAR_7 |= VAR_10[1];
 if (VAR_8 != VAR_7)
  FUNC_1(VAR_3, VAR_4, VAR_7);
 FUNC_3(&VAR_3->reg_lock, VAR_9);
 return VAR_8 != VAR_4;
}
