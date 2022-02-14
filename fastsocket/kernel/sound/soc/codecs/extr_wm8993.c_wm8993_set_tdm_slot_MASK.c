
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8993_priv {int tdm_slots; int tdm_width; } ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {struct wm8993_priv* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_soc_codec*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_7, unsigned int VAR_8,
          unsigned int VAR_9, int VAR_10, int VAR_11)
{
 struct snd_soc_codec *VAR_12 = VAR_7->codec;
 struct wm8993_priv *VAR_13 = VAR_12->private_data;
 int VAR_14 = 0;
 int VAR_15 = 0;


 if (VAR_10 == 0) {
  VAR_13->tdm_slots = 0;
  goto out;
 }





 VAR_14 |= VAR_1;
 VAR_15 |= VAR_3;

 switch (VAR_9) {
 case 3:
  break;
 case 0xc:
  VAR_14 |= VAR_2;
  break;
 default:
  return -VAR_0;
 }


 switch (VAR_8) {
 case 3:
  break;
 case 0xc:
  VAR_15 |= VAR_4;
  break;
 default:
  return -VAR_0;
 }

out:
 VAR_13->tdm_width = VAR_11;
 VAR_13->tdm_slots = VAR_10 / 2;

 FUNC_0(VAR_12, VAR_5,
       VAR_1 | VAR_2, VAR_14);
 FUNC_0(VAR_12, VAR_6,
       VAR_3 | VAR_4, VAR_15);

 return 0;
}
