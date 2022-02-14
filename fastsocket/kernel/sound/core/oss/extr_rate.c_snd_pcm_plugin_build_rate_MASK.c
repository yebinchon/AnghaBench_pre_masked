
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_plugin_format {int channels; scalar_t__ format; int rate; } ;
struct snd_pcm_plugin {int action; int dst_frames; int src_frames; int transfer; scalar_t__ extra_data; } ;
struct rate_priv {int pitch; scalar_t__ old_dst_frames; scalar_t__ old_src_frames; scalar_t__ pos; int func; } ;
struct rate_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_pcm_plugin*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_pcm_substream*,char*,struct snd_pcm_plugin_format*,struct snd_pcm_plugin_format*,int,struct snd_pcm_plugin**) ;

int FUNC_3(struct snd_pcm_substream *VAR_9,
         struct snd_pcm_plugin_format *VAR_10,
         struct snd_pcm_plugin_format *VAR_11,
         struct snd_pcm_plugin **VAR_12)
{
 int VAR_13;
 struct rate_priv *VAR_14;
 struct snd_pcm_plugin *VAR_15;

 if (FUNC_1(!VAR_12))
  return -VAR_0;
 *VAR_12 = ((void*)0);

 if (FUNC_1(VAR_10->channels != VAR_11->channels))
  return -VAR_0;
 if (FUNC_1(VAR_10->channels <= 0))
  return -VAR_0;
 if (FUNC_1(VAR_10->format != VAR_2))
  return -VAR_0;
 if (FUNC_1(VAR_11->format != VAR_2))
  return -VAR_0;
 if (FUNC_1(VAR_10->rate == VAR_11->rate))
  return -VAR_0;

 VAR_13 = FUNC_2(VAR_9, "rate conversion",
       VAR_10, VAR_11,
       sizeof(struct rate_priv) +
       VAR_10->channels * sizeof(struct rate_channel),
       &VAR_15);
 if (VAR_13 < 0)
  return VAR_13;
 VAR_14 = (struct rate_priv *)VAR_15->extra_data;
 if (VAR_10->rate < VAR_11->rate) {
  VAR_14->pitch = ((VAR_10->rate << VAR_1) + (VAR_11->rate >> 1)) / VAR_11->rate;
  VAR_14->func = VAR_7;
 } else {
  VAR_14->pitch = ((VAR_11->rate << VAR_1) + (VAR_10->rate >> 1)) / VAR_10->rate;
  VAR_14->func = VAR_8;
 }
 VAR_14->pos = 0;
 FUNC_0(VAR_15);
 VAR_14->old_src_frames = VAR_14->old_dst_frames = 0;
 VAR_15->transfer = VAR_6;
 VAR_15->src_frames = VAR_5;
 VAR_15->dst_frames = VAR_4;
 VAR_15->action = VAR_3;
 *VAR_12 = VAR_15;
 return 0;
}
