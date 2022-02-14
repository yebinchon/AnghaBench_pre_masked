
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8988_priv {int sysclk_constraints; int sysclk; } ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dev; struct wm8988_priv* private_data; } ;
struct snd_pcm_substream {int runtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2,
         struct snd_soc_dai *VAR_3)
{
 struct snd_soc_codec *VAR_4 = VAR_3->codec;
 struct wm8988_priv *VAR_5 = VAR_4->private_data;




 if (!VAR_5->sysclk) {
  FUNC_0(VAR_4->dev,
   "No MCLK configured, call set_sysclk() on init\n");
  return -VAR_0;
 }

 FUNC_1(VAR_2->runtime, 0,
       VAR_1,
       VAR_5->sysclk_constraints);

 return 0;
}
