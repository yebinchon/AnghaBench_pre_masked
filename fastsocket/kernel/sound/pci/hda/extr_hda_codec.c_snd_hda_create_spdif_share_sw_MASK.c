
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct hda_multi_out {int dig_out_nid; } ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 struct snd_kcontrol* FUNC_0 (int *,struct hda_multi_out*) ;
 int FUNC_1 (struct hda_codec*,int ,struct snd_kcontrol*) ;
 int VAR_1 ;

int FUNC_2(struct hda_codec *VAR_2,
      struct hda_multi_out *VAR_3)
{
 struct snd_kcontrol *VAR_4;

 if (!VAR_3->dig_out_nid)
  return 0;

 VAR_4 = FUNC_0(&VAR_1, VAR_3);
 if (!VAR_4)
  return -VAR_0;

 return FUNC_1(VAR_2, VAR_3->dig_out_nid, VAR_4);
}
