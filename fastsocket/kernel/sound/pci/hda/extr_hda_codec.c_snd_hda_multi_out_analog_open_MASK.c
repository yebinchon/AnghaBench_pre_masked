
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int rates; int formats; int channels_max; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct hda_pcm_stream {int rates; int formats; scalar_t__ maxbps; } ;
struct hda_multi_out {int analog_rates; int analog_formats; scalar_t__ analog_maxbps; int spdif_rates; int spdif_formats; scalar_t__ spdif_maxbps; scalar_t__ share_spdif; scalar_t__ dig_out_nid; int max_channels; } ;
struct hda_codec {int spdif_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hda_codec*,scalar_t__,int*,int*,scalar_t__*) ;
 int FUNC_3 (struct snd_pcm_runtime*,int ,int ,int) ;

int FUNC_4(struct hda_codec *VAR_1,
      struct hda_multi_out *VAR_2,
      struct snd_pcm_substream *VAR_3,
      struct hda_pcm_stream *VAR_4)
{
 struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;
 VAR_5->hw.channels_max = VAR_2->max_channels;
 if (VAR_2->dig_out_nid) {
  if (!VAR_2->analog_rates) {
   VAR_2->analog_rates = VAR_4->rates;
   VAR_2->analog_formats = VAR_4->formats;
   VAR_2->analog_maxbps = VAR_4->maxbps;
  } else {
   VAR_5->hw.rates = VAR_2->analog_rates;
   VAR_5->hw.formats = VAR_2->analog_formats;
   VAR_4->maxbps = VAR_2->analog_maxbps;
  }
  if (!VAR_2->spdif_rates) {
   FUNC_2(VAR_1, VAR_2->dig_out_nid,
          &VAR_2->spdif_rates,
          &VAR_2->spdif_formats,
          &VAR_2->spdif_maxbps);
  }
  FUNC_0(&VAR_1->spdif_mutex);
  if (VAR_2->share_spdif) {
   if ((VAR_5->hw.rates & VAR_2->spdif_rates) &&
       (VAR_5->hw.formats & VAR_2->spdif_formats)) {
    VAR_5->hw.rates &= VAR_2->spdif_rates;
    VAR_5->hw.formats &= VAR_2->spdif_formats;
    if (VAR_2->spdif_maxbps < VAR_4->maxbps)
     VAR_4->maxbps = VAR_2->spdif_maxbps;
   } else {
    VAR_2->share_spdif = 0;

   }
  }
  FUNC_1(&VAR_1->spdif_mutex);
 }
 return FUNC_3(VAR_3->runtime, 0,
       VAR_0, 2);
}
