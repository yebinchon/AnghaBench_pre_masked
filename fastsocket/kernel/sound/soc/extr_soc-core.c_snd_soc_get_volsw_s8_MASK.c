
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_mixer_control {unsigned int reg; int min; } ;
struct snd_soc_codec {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {char* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct snd_soc_codec* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_soc_codec*,unsigned int) ;

int FUNC_2(struct snd_kcontrol *VAR_0,
 struct snd_ctl_elem_value *VAR_1)
{
 struct soc_mixer_control *VAR_2 =
  (struct soc_mixer_control *)VAR_0->private_value;
 struct snd_soc_codec *VAR_3 = FUNC_0(VAR_0);
 unsigned int VAR_4 = VAR_2->reg;
 int VAR_5 = VAR_2->min;
 int VAR_6 = FUNC_1(VAR_3, VAR_4);

 VAR_1->value.integer.value[0] =
  ((signed char)(VAR_6 & 0xff))-VAR_5;
 VAR_1->value.integer.value[1] =
  ((signed char)((VAR_6 >> 8) & 0xff))-VAR_5;
 return 0;
}
