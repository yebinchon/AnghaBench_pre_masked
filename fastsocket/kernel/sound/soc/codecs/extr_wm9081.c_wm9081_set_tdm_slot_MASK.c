
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm9081_priv {int tdm_width; } ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {struct wm9081_priv* private_data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_5,
 unsigned int VAR_6, unsigned int VAR_7, int VAR_8, int VAR_9)
{
 struct snd_soc_codec *VAR_10 = VAR_5->codec;
 struct wm9081_priv *VAR_11 = VAR_10->private_data;
 unsigned int VAR_12 = FUNC_0(VAR_10, VAR_4);

 VAR_12 &= ~(VAR_3 | VAR_1);

 if (VAR_8 < 0 || VAR_8 > 4)
  return -VAR_0;

 VAR_11->tdm_width = VAR_9;

 if (VAR_8 == 0)
  VAR_8 = 1;

 VAR_12 |= (VAR_8 - 1) << VAR_2;

 switch (VAR_7) {
 case 1:
  break;
 case 2:
  VAR_12 |= 0x10;
  break;
 case 4:
  VAR_12 |= 0x20;
  break;
 case 8:
  VAR_12 |= 0x30;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_10, VAR_4, VAR_12);

 return 0;
}
