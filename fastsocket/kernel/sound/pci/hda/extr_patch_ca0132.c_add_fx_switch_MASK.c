
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {int dummy; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 struct snd_kcontrol_new FUNC_0 (char*,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 int FUNC_1 (struct snd_kcontrol_new*,struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int ,int ) ;
 int FUNC_3 (char*,char*,char const*,char*) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_3, hda_nid_t VAR_4,
    const char *VAR_5, int VAR_6)
{
 char VAR_7[44];
 int VAR_8 = VAR_6 ? VAR_0 : VAR_1;
 struct snd_kcontrol_new VAR_9 =
  FUNC_0(VAR_7, VAR_4, 1, VAR_8);
 FUNC_3(VAR_7, "%s %s Switch", VAR_5, VAR_2[VAR_6]);
 return FUNC_2(VAR_3, VAR_4, FUNC_1(&VAR_9, VAR_3));
}
