
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct hda_spdif_out {int status; } ;
struct hda_multi_out {scalar_t__* dac_nids; scalar_t__ dig_out_used; scalar_t__ const hp_nid; scalar_t__ const* hp_out_nid; scalar_t__ const* extra_out_nid; int num_dacs; int no_share_stream; scalar_t__ dig_out_nid; scalar_t__ share_spdif; } ;
struct hda_codec {int spdif_mutex; } ;
typedef scalar_t__ hda_nid_t ;
struct TYPE_2__ {int channels; } ;


 int FUNC_0 (scalar_t__ const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct hda_codec*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hda_codec*,scalar_t__,unsigned int,unsigned int) ;
 int FUNC_5 (struct hda_codec*,scalar_t__ const,unsigned int,int,unsigned int) ;
 scalar_t__ FUNC_6 (struct hda_codec*,scalar_t__,unsigned int) ;
 struct hda_spdif_out* FUNC_7 (struct hda_codec*,scalar_t__) ;

int FUNC_8(struct hda_codec *VAR_4,
         struct hda_multi_out *VAR_5,
         unsigned int VAR_6,
         unsigned int VAR_7,
         struct snd_pcm_substream *VAR_8)
{
 const hda_nid_t *VAR_9 = VAR_5->dac_nids;
 int VAR_10 = VAR_8->runtime->channels;
 struct hda_spdif_out *VAR_11;
 int VAR_12;

 FUNC_2(&VAR_4->spdif_mutex);
 VAR_11 = FUNC_7(VAR_4, VAR_5->dig_out_nid);
 if (VAR_5->dig_out_nid && VAR_5->share_spdif &&
     VAR_5->dig_out_used != VAR_1) {
  if (VAR_10 == 2 &&
      FUNC_6(VAR_4, VAR_5->dig_out_nid,
      VAR_7) &&
      !(VAR_11->status & VAR_3)) {
   VAR_5->dig_out_used = VAR_0;
   FUNC_4(VAR_4, VAR_5->dig_out_nid,
          VAR_6, VAR_7);
  } else {
   VAR_5->dig_out_used = 0;
   FUNC_1(VAR_4, VAR_5->dig_out_nid);
  }
 }
 FUNC_3(&VAR_4->spdif_mutex);


 FUNC_5(VAR_4, VAR_9[VAR_2], VAR_6,
       0, VAR_7);
 if (!VAR_5->no_share_stream &&
     VAR_5->hp_nid && VAR_5->hp_nid != VAR_9[VAR_2])

  FUNC_5(VAR_4, VAR_5->hp_nid, VAR_6,
        0, VAR_7);

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_5->hp_out_nid); VAR_12++)
  if (!VAR_5->no_share_stream && VAR_5->hp_out_nid[VAR_12])
   FUNC_5(VAR_4,
         VAR_5->hp_out_nid[VAR_12],
         VAR_6, 0, VAR_7);
 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_5->extra_out_nid); VAR_12++)
  if (!VAR_5->no_share_stream && VAR_5->extra_out_nid[VAR_12])
   FUNC_5(VAR_4,
         VAR_5->extra_out_nid[VAR_12],
         VAR_6, 0, VAR_7);


 for (VAR_12 = 1; VAR_12 < VAR_5->num_dacs; VAR_12++) {
  if (VAR_10 >= (VAR_12 + 1) * 2)
   FUNC_5(VAR_4, VAR_9[VAR_12], VAR_6,
         VAR_12 * 2, VAR_7);
  else if (!VAR_5->no_share_stream)
   FUNC_5(VAR_4, VAR_9[VAR_12], VAR_6,
         0, VAR_7);
 }
 return 0;
}
