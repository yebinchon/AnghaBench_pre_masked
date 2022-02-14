
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
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hda_codec*,scalar_t__) ;
 int FUNC_1 (struct hda_codec*,scalar_t__,char*,int) ;
 int VAR_2 ;
 unsigned int FUNC_2 (struct hda_codec*,scalar_t__) ;
 struct snd_kcontrol_new* FUNC_3 (struct hda_gen_spec*,char*,int *) ;
 scalar_t__ FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_3, hda_nid_t VAR_4)
{
 struct hda_gen_spec *VAR_5 = VAR_3->spec;
 struct snd_kcontrol_new *VAR_6;
 char VAR_7[44];
 unsigned int VAR_8;

 if (VAR_4 == VAR_5->hp_mic_pin)
  return 0;


 VAR_8 = FUNC_2(VAR_3, VAR_4);
 if (FUNC_4(VAR_8) == VAR_1)
  return 0;


 if (FUNC_0(VAR_3, VAR_4) <= 1)
  return 0;

 FUNC_1(VAR_3, VAR_4, VAR_7, sizeof(VAR_7));
 VAR_6 = FUNC_3(VAR_5, VAR_7, &VAR_2);
 if (!VAR_6)
  return -VAR_0;
 VAR_6->private_value = VAR_4;
 return 0;
}
