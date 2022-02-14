
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_mixer_control {unsigned int reg; unsigned int rreg; unsigned int shift; unsigned int max; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 unsigned int* VAR_0 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_1,
  struct snd_ctl_elem_value *VAR_2)
{
 struct soc_mixer_control *VAR_3 =
  (struct soc_mixer_control *)VAR_1->private_value;
 unsigned int VAR_4 = VAR_3->reg;
 unsigned int VAR_5 = VAR_3->rreg;
 unsigned int VAR_6 = VAR_3->shift;
 unsigned int VAR_7 = VAR_3->max;

 VAR_2->value.integer.value[0] = (VAR_0[VAR_4] >> VAR_6) & VAR_7;
 VAR_2->value.integer.value[1] = (VAR_0[VAR_5] >> VAR_6) & VAR_7;

 return 0;
}
