
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {unsigned int cur_eapd; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int,int ,int ,int) ;
 struct hda_codec* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
        struct snd_ctl_elem_value *VAR_2)
{
 struct hda_codec *VAR_3 = FUNC_1(VAR_1);
 struct conexant_spec *VAR_4 = VAR_3->spec;
 int VAR_5 = (VAR_1->private_value >> 8) & 1;
 hda_nid_t VAR_6 = VAR_1->private_value & 0xff;
 unsigned int VAR_7;

 VAR_7 = !!VAR_2->value.integer.value[0];
 if (VAR_5)
  VAR_7 = !VAR_7;
 if (VAR_7 == VAR_4->cur_eapd)
  return 0;

 VAR_4->cur_eapd = VAR_7;
 FUNC_0(VAR_3, VAR_6,
      0, VAR_0,
      VAR_7 ? 0x02 : 0x00);
 return 1;
}
