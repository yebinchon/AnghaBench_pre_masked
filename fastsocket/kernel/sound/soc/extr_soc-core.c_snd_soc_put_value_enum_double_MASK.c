
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_enum {int max; unsigned int* values; unsigned int shift_l; unsigned int mask; unsigned int shift_r; int reg; } ;
struct snd_soc_codec {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 struct snd_soc_codec* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_soc_codec*,int ,unsigned int,unsigned int) ;

int FUNC_2(struct snd_kcontrol *VAR_1,
 struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_codec *VAR_3 = FUNC_0(VAR_1);
 struct soc_enum *VAR_4 = (struct soc_enum *)VAR_1->private_value;
 unsigned int VAR_5;
 unsigned int VAR_6;

 if (VAR_2->value.enumerated.item[0] > VAR_4->max - 1)
  return -VAR_0;
 VAR_5 = VAR_4->values[VAR_2->value.enumerated.item[0]] << VAR_4->shift_l;
 VAR_6 = VAR_4->mask << VAR_4->shift_l;
 if (VAR_4->shift_l != VAR_4->shift_r) {
  if (VAR_2->value.enumerated.item[1] > VAR_4->max - 1)
   return -VAR_0;
  VAR_5 |= VAR_4->values[VAR_2->value.enumerated.item[1]] << VAR_4->shift_r;
  VAR_6 |= VAR_4->mask << VAR_4->shift_r;
 }

 return FUNC_1(VAR_3, VAR_4->reg, VAR_6, VAR_5);
}
