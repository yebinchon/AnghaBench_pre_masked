
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_codec {struct hda_beep* beep; } ;
struct hda_beep {scalar_t__ enabled; } ;


 int FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 struct hda_codec* FUNC_2 (struct snd_kcontrol*) ;

int FUNC_3(struct snd_kcontrol *VAR_0,
          struct snd_ctl_elem_value *VAR_1)
{
 struct hda_codec *VAR_2 = FUNC_2(VAR_0);
 struct hda_beep *VAR_3 = VAR_2->beep;
 if (VAR_3 && (!VAR_3->enabled || !FUNC_0(VAR_0))) {
  VAR_1->value.integer.value[0] =
   VAR_1->value.integer.value[1] = VAR_3->enabled;
  return 0;
 }
 return FUNC_1(VAR_0, VAR_1);
}
