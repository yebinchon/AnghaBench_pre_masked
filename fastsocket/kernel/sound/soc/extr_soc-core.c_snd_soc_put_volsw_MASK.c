
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_mixer_control {unsigned int reg; unsigned int shift; unsigned int rshift; int max; unsigned int invert; } ;
struct snd_soc_codec {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (int) ;
 struct snd_soc_codec* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_soc_codec*,unsigned int,unsigned int,unsigned int) ;

int FUNC_3(struct snd_kcontrol *VAR_0,
 struct snd_ctl_elem_value *VAR_1)
{
 struct soc_mixer_control *VAR_2 =
  (struct soc_mixer_control *)VAR_0->private_value;
 struct snd_soc_codec *VAR_3 = FUNC_1(VAR_0);
 unsigned int VAR_4 = VAR_2->reg;
 unsigned int VAR_5 = VAR_2->shift;
 unsigned int VAR_6 = VAR_2->rshift;
 int VAR_7 = VAR_2->max;
 unsigned int VAR_8 = (1 << FUNC_0(VAR_7)) - 1;
 unsigned int VAR_9 = VAR_2->invert;
 unsigned int VAR_10, VAR_11, VAR_12;

 VAR_10 = (VAR_1->value.integer.value[0] & VAR_8);
 if (VAR_9)
  VAR_10 = VAR_7 - VAR_10;
 VAR_12 = VAR_8 << VAR_5;
 VAR_10 = VAR_10 << VAR_5;
 if (VAR_5 != VAR_6) {
  VAR_11 = (VAR_1->value.integer.value[1] & VAR_8);
  if (VAR_9)
   VAR_11 = VAR_7 - VAR_11;
  VAR_12 |= VAR_8 << VAR_6;
  VAR_10 |= VAR_11 << VAR_6;
 }
 return FUNC_2(VAR_3, VAR_4, VAR_12, VAR_10);
}
