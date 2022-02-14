
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct hda_codec {scalar_t__ inv_eapd; struct ad198x_spec* spec; } ;
struct ad198x_spec {int cur_eapd; } ;


 struct hda_codec* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_value *VAR_1)
{
 struct hda_codec *VAR_2 = FUNC_0(VAR_0);
 struct ad198x_spec *VAR_3 = VAR_2->spec;
 if (VAR_2->inv_eapd)
  VAR_1->value.integer.value[0] = ! VAR_3->cur_eapd;
 else
  VAR_1->value.integer.value[0] = VAR_3->cur_eapd;
 return 0;
}
