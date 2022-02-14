
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_mixer_control {unsigned int reg; unsigned int shift; unsigned int rshift; int max; unsigned int invert; } ;
struct snd_soc_dapm_widget {scalar_t__ id; unsigned int saved_value; int codec; int power; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (int) ;
 struct snd_soc_dapm_widget* FUNC_1 (struct snd_kcontrol*) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_2 (int ,unsigned int) ;

int FUNC_3(struct snd_kcontrol *VAR_1,
 struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_dapm_widget *VAR_3 = FUNC_1(VAR_1);
 struct soc_mixer_control *VAR_4 =
  (struct soc_mixer_control *)VAR_1->private_value;
 unsigned int VAR_5 = VAR_4->reg;
 unsigned int VAR_6 = VAR_4->shift;
 unsigned int VAR_7 = VAR_4->rshift;
 int VAR_8 = VAR_4->max;
 unsigned int VAR_9 = VAR_4->invert;
 unsigned int VAR_10 = (1 << FUNC_0(VAR_8)) - 1;


 if (VAR_3->id == VAR_0 && !VAR_3->power) {
  VAR_2->value.integer.value[0] = VAR_3->saved_value;
  return 0;
 }

 VAR_2->value.integer.value[0] =
  (FUNC_2(VAR_3->codec, VAR_5) >> VAR_6) & VAR_10;
 if (VAR_6 != VAR_7)
  VAR_2->value.integer.value[1] =
   (FUNC_2(VAR_3->codec, VAR_5) >> VAR_7) & VAR_10;
 if (VAR_9) {
  VAR_2->value.integer.value[0] =
   VAR_8 - VAR_2->value.integer.value[0];
  if (VAR_6 != VAR_7)
   VAR_2->value.integer.value[1] =
    VAR_8 - VAR_2->value.integer.value[1];
 }

 return 0;
}
