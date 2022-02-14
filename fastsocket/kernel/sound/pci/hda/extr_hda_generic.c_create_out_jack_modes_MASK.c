
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {scalar_t__ private_value; } ;
struct hda_gen_spec {scalar_t__ hp_mic_pin; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int name ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,scalar_t__) ;
 int FUNC_1 (struct hda_codec*,scalar_t__,char*,int) ;
 int FUNC_2 (struct hda_codec*,scalar_t__) ;
 int VAR_1 ;
 struct snd_kcontrol_new* FUNC_3 (struct hda_gen_spec*,char*,int *) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_2, int VAR_3,
     hda_nid_t *VAR_4)
{
 struct hda_gen_spec *VAR_5 = VAR_2->spec;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  hda_nid_t VAR_7 = VAR_4[VAR_6];
  if (VAR_7 == VAR_5->hp_mic_pin) {
   int VAR_8 = FUNC_0(VAR_2, VAR_7);
   if (VAR_8 < 0)
    return VAR_8;
   continue;
  }
  if (FUNC_2(VAR_2, VAR_7) > 1) {
   struct snd_kcontrol_new *VAR_9;
   char VAR_10[44];
   FUNC_1(VAR_2, VAR_7, VAR_10, sizeof(VAR_10));
   VAR_9 = FUNC_3(VAR_5, VAR_10,
          &VAR_1);
   if (!VAR_9)
    return -VAR_0;
   VAR_9->private_value = VAR_7;
  }
 }

 return 0;
}
