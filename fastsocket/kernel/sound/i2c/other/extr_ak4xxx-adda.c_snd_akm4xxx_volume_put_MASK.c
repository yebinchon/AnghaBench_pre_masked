
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct snd_kcontrol*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
      struct snd_ctl_elem_value *VAR_2)
{
 unsigned int VAR_3 = FUNC_1(VAR_1->private_value);
 unsigned int VAR_4 = VAR_2->value.integer.value[0];
 if (VAR_4 > VAR_3)
  return -VAR_0;
 return FUNC_2(VAR_1, FUNC_0(VAR_1->private_value), VAR_4);
}
