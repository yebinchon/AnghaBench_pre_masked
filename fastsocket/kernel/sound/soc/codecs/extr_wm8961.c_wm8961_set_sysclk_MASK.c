
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8961_priv {unsigned int sysclk; } ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dev; struct wm8961_priv* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct snd_soc_codec*,int ) ;
 int FUNC_3 (struct snd_soc_codec*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_3, int VAR_4,
        unsigned int VAR_5,
        int VAR_6)
{
 struct snd_soc_codec *VAR_7 = VAR_3->codec;
 struct wm8961_priv *VAR_8 = VAR_7->private_data;
 u16 VAR_9 = FUNC_2(VAR_7, VAR_1);

 if (VAR_5 > 33000000) {
  FUNC_1(VAR_7->dev, "MCLK must be <33MHz\n");
  return -VAR_0;
 }

 if (VAR_5 > 16500000) {
  FUNC_0(VAR_7->dev, "Using MCLK/2 for %dHz MCLK\n", VAR_5);
  VAR_9 |= VAR_2;
  VAR_5 /= 2;
 } else {
  FUNC_0(VAR_7->dev, "Using MCLK/1 for %dHz MCLK\n", VAR_5);
  VAR_9 &= VAR_2;
 }

 FUNC_3(VAR_7, VAR_1, VAR_9);

 VAR_8->sysclk = VAR_5;

 return 0;
}
