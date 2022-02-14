
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_plugin_format {scalar_t__ rate; scalar_t__ channels; scalar_t__ format; } ;
struct snd_pcm_plugin {int transfer; scalar_t__ extra_data; } ;
struct mulaw_priv {int func; } ;
typedef int mulaw_f ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mulaw_priv*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct snd_pcm_substream*,char*,struct snd_pcm_plugin_format*,struct snd_pcm_plugin_format*,int,struct snd_pcm_plugin**) ;

int FUNC_5(struct snd_pcm_substream *VAR_6,
          struct snd_pcm_plugin_format *VAR_7,
          struct snd_pcm_plugin_format *VAR_8,
          struct snd_pcm_plugin **VAR_9)
{
 int VAR_10;
 struct mulaw_priv *VAR_11;
 struct snd_pcm_plugin *VAR_12;
 struct snd_pcm_plugin_format *VAR_13;
 mulaw_f VAR_14;

 if (FUNC_2(!VAR_9))
  return -VAR_1;
 *VAR_9 = ((void*)0);

 if (FUNC_2(VAR_7->rate != VAR_8->rate))
  return -VAR_1;
 if (FUNC_2(VAR_7->channels != VAR_8->channels))
  return -VAR_1;

 if (VAR_8->format == VAR_2) {
  VAR_13 = VAR_7;
  VAR_14 = VAR_4;
 }
 else if (VAR_7->format == VAR_2) {
  VAR_13 = VAR_8;
  VAR_14 = VAR_3;
 }
 else {
  FUNC_1();
  return -VAR_0;
 }
 if (FUNC_2(!FUNC_3(VAR_13->format)))
  return -VAR_1;

 VAR_10 = FUNC_4(VAR_6, "Mu-Law<->linear conversion",
       VAR_7, VAR_8,
       sizeof(struct mulaw_priv), &VAR_12);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_11 = (struct mulaw_priv *)VAR_12->extra_data;
 VAR_11->func = VAR_14;
 FUNC_0(VAR_11, VAR_13->format);
 VAR_12->transfer = VAR_5;
 *VAR_9 = VAR_12;
 return 0;
}
