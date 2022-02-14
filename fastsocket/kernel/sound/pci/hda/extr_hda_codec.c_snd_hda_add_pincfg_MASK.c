
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_array {int dummy; } ;
struct hda_pincfg {unsigned int cfg; int nid; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 struct hda_pincfg* FUNC_0 (struct hda_codec*,struct snd_array*,int ) ;
 struct hda_pincfg* FUNC_1 (struct snd_array*) ;

int FUNC_2(struct hda_codec *VAR_1, struct snd_array *VAR_2,
         hda_nid_t VAR_3, unsigned int VAR_4)
{
 struct hda_pincfg *VAR_5;
 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (!VAR_5) {
  VAR_5 = FUNC_1(VAR_2);
  if (!VAR_5)
   return -VAR_0;
  VAR_5->nid = VAR_3;
 }
 VAR_5->cfg = VAR_4;
 return 0;
}
