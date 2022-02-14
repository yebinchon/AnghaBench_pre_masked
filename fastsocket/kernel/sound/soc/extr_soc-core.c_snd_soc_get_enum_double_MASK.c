
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_enum {unsigned int max; unsigned int shift_l; unsigned int shift_r; int reg; } ;
struct snd_soc_codec {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct snd_soc_codec* FUNC_0 (struct snd_kcontrol*) ;
 unsigned int FUNC_1 (struct snd_soc_codec*,int ) ;

int FUNC_2(struct snd_kcontrol *VAR_0,
 struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_codec *VAR_2 = FUNC_0(VAR_0);
 struct soc_enum *VAR_3 = (struct soc_enum *)VAR_0->private_value;
 unsigned int VAR_4, VAR_5;

 for (VAR_5 = 1; VAR_5 < VAR_3->max; VAR_5 <<= 1)
  ;
 VAR_4 = FUNC_1(VAR_2, VAR_3->reg);
 VAR_1->value.enumerated.item[0]
  = (VAR_4 >> VAR_3->shift_l) & (VAR_5 - 1);
 if (VAR_3->shift_l != VAR_3->shift_r)
  VAR_1->value.enumerated.item[1] =
   (VAR_4 >> VAR_3->shift_r) & (VAR_5 - 1);

 return 0;
}
