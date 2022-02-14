
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct via_spec {scalar_t__ codec_type; int vt1708_jack_detect; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hda_codec {struct via_spec* spec; } ;


 scalar_t__ VAR_0 ;
 struct hda_codec* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1,
         struct snd_ctl_elem_value *VAR_2)
{
 struct hda_codec *VAR_3 = FUNC_0(VAR_1);
 struct via_spec *VAR_4 = VAR_3->spec;

 if (VAR_4->codec_type != VAR_0)
  return 0;
 VAR_2->value.integer.value[0] = VAR_4->vt1708_jack_detect;
 return 0;
}
