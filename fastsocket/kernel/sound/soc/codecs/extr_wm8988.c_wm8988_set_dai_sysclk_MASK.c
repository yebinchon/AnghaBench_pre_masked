
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8988_priv {unsigned int sysclk; int * sysclk_constraints; } ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {struct wm8988_priv* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct snd_soc_dai *VAR_4,
  int VAR_5, unsigned int VAR_6, int VAR_7)
{
 struct snd_soc_codec *VAR_8 = VAR_4->codec;
 struct wm8988_priv *VAR_9 = VAR_8->private_data;

 switch (VAR_6) {
 case 11289600:
 case 18432000:
 case 22579200:
 case 36864000:
  VAR_9->sysclk_constraints = &VAR_1;
  VAR_9->sysclk = VAR_6;
  return 0;

 case 12288000:
 case 16934400:
 case 24576000:
 case 33868800:
  VAR_9->sysclk_constraints = &VAR_3;
  VAR_9->sysclk = VAR_6;
  return 0;

 case 12000000:
 case 24000000:
  VAR_9->sysclk_constraints = &VAR_2;
  VAR_9->sysclk = VAR_6;
  return 0;
 }
 return -VAR_0;
}
