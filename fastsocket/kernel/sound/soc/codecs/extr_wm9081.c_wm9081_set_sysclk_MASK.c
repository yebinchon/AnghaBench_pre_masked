
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm9081_priv {int sysclk_source; unsigned int mclk_rate; } ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {struct wm9081_priv* private_data; } ;


 int VAR_0 ;



__attribute__((used)) static int FUNC_0(struct snd_soc_dai *VAR_1,
        int VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct snd_soc_codec *VAR_5 = VAR_1->codec;
 struct wm9081_priv *VAR_6 = VAR_5->private_data;

 switch (VAR_2) {
 case 128:
 case 129:
  VAR_6->sysclk_source = VAR_2;
  VAR_6->mclk_rate = VAR_3;
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
