
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {struct aic3x_priv* private_data; } ;
struct aic3x_priv {unsigned int sysclk; } ;



__attribute__((used)) static int FUNC_0(struct snd_soc_dai *VAR_0,
    int VAR_1, unsigned int VAR_2, int VAR_3)
{
 struct snd_soc_codec *VAR_4 = VAR_0->codec;
 struct aic3x_priv *VAR_5 = VAR_4->private_data;

 VAR_5->sysclk = VAR_2;
 return 0;
}
