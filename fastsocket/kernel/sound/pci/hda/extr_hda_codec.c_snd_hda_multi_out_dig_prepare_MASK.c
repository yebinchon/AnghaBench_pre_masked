
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct hda_multi_out {int dig_out_nid; } ;
struct hda_codec {int spdif_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hda_codec*,int ,unsigned int,unsigned int) ;

int FUNC_3(struct hda_codec *VAR_0,
      struct hda_multi_out *VAR_1,
      unsigned int VAR_2,
      unsigned int VAR_3,
      struct snd_pcm_substream *VAR_4)
{
 FUNC_0(&VAR_0->spdif_mutex);
 FUNC_2(VAR_0, VAR_1->dig_out_nid, VAR_2, VAR_3);
 FUNC_1(&VAR_0->spdif_mutex);
 return 0;
}
