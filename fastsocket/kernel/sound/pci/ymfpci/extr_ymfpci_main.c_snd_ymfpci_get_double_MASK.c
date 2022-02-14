
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_ymfpci {int reg_lock; } ;
struct snd_kcontrol {unsigned int private_value; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 struct snd_ymfpci* FUNC_0 (struct snd_kcontrol*) ;
 unsigned int FUNC_1 (struct snd_ymfpci*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ymfpci *VAR_3 = FUNC_0(VAR_1);
 unsigned int VAR_4 = VAR_1->private_value;
 unsigned int VAR_5 = 0, VAR_6 = 16, VAR_7 = 16383;
 unsigned int VAR_8;

 if (VAR_4 < 0x80 || VAR_4 >= 0xc0)
  return -VAR_0;
 FUNC_2(&VAR_3->reg_lock);
 VAR_8 = FUNC_1(VAR_3, VAR_4);
 FUNC_3(&VAR_3->reg_lock);
 VAR_2->value.integer.value[0] = (VAR_8 >> VAR_5) & VAR_7;
 VAR_2->value.integer.value[1] = (VAR_8 >> VAR_6) & VAR_7;
 return 0;
}
