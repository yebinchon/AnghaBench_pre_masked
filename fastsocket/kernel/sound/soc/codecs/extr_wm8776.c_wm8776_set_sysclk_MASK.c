
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8776_priv {unsigned int* sysclk; } ;
struct snd_soc_dai {size_t id; struct snd_soc_codec* codec; } ;
struct snd_soc_codec {struct wm8776_priv* private_data; } ;


 size_t FUNC_0 (unsigned int*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_0,
        int VAR_1, unsigned int VAR_2, int VAR_3)
{
 struct snd_soc_codec *VAR_4 = VAR_0->codec;
 struct wm8776_priv *VAR_5 = VAR_4->private_data;

 FUNC_1(VAR_0->id >= FUNC_0(VAR_5->sysclk));

 VAR_5->sysclk[VAR_0->id] = VAR_2;

 return 0;
}
