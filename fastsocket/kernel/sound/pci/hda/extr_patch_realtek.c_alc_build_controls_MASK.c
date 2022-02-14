
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {scalar_t__ name; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {int num_mixers; scalar_t__ beep_amp; int * mixers; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_kcontrol_new* VAR_2 ;
 struct snd_kcontrol* FUNC_0 (struct snd_kcontrol_new const*,struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (struct hda_codec*,int ) ;
 int FUNC_3 (struct hda_codec*,int ,struct snd_kcontrol*) ;
 int FUNC_4 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_3)
{
 struct alc_spec *VAR_4 = VAR_3->spec;
 int VAR_5, VAR_6;

 VAR_6 = FUNC_4(VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_mixers; VAR_5++) {
  VAR_6 = FUNC_1(VAR_3, VAR_4->mixers[VAR_5]);
  if (VAR_6 < 0)
   return VAR_6;
 }
 FUNC_2(VAR_3, VAR_1);
 return 0;
}
