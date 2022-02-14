
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_plugin_format {scalar_t__ rate; scalar_t__ channels; int format; } ;
struct snd_pcm_plugin {int transfer; scalar_t__ extra_data; } ;
struct linear_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct linear_priv*,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_pcm_substream*,char*,struct snd_pcm_plugin_format*,struct snd_pcm_plugin_format*,int,struct snd_pcm_plugin**) ;

int FUNC_4(struct snd_pcm_substream *VAR_2,
    struct snd_pcm_plugin_format *VAR_3,
    struct snd_pcm_plugin_format *VAR_4,
    struct snd_pcm_plugin **VAR_5)
{
 int VAR_6;
 struct linear_priv *VAR_7;
 struct snd_pcm_plugin *VAR_8;

 if (FUNC_1(!VAR_5))
  return -VAR_0;
 *VAR_5 = ((void*)0);

 if (FUNC_1(VAR_3->rate != VAR_4->rate))
  return -VAR_0;
 if (FUNC_1(VAR_3->channels != VAR_4->channels))
  return -VAR_0;
 if (FUNC_1(!FUNC_2(VAR_3->format) ||
         !FUNC_2(VAR_4->format)))
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_2, "linear format conversion",
       VAR_3, VAR_4,
       sizeof(struct linear_priv), &VAR_8);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_7 = (struct linear_priv *)VAR_8->extra_data;
 FUNC_0(VAR_7, VAR_3->format, VAR_4->format);
 VAR_8->transfer = VAR_1;
 *VAR_5 = VAR_8;
 return 0;
}
