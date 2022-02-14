
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm9081_priv {int master; } ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {struct wm9081_priv* private_data; } ;


 int VAR_0 ;






 unsigned int VAR_1 ;



 unsigned int VAR_2 ;

 unsigned int VAR_3 ;



 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_10,
         unsigned int VAR_11)
{
 struct snd_soc_codec *VAR_12 = VAR_10->codec;
 struct wm9081_priv *VAR_13 = VAR_12->private_data;
 unsigned int VAR_14 = FUNC_0(VAR_12, VAR_7);

 VAR_14 &= ~(VAR_4 | VAR_6 |
    VAR_8 | VAR_9 | VAR_5);

 switch (VAR_11 & VAR_3) {
 case 137:
  VAR_13->master = 0;
  break;
 case 138:
  VAR_14 |= VAR_9;
  VAR_13->master = 1;
  break;
 case 139:
  VAR_14 |= VAR_8;
  VAR_13->master = 1;
  break;
 case 140:
  VAR_14 |= VAR_9 | VAR_8;
  VAR_13->master = 1;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_11 & VAR_1) {
 case 135:
  VAR_14 |= VAR_6;
 case 136:
  VAR_14 |= 0x3;
  break;
 case 134:
  VAR_14 |= 0x2;
  break;
 case 128:
  break;
 case 131:
  VAR_14 |= 0x1;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_11 & VAR_1) {
 case 136:
 case 135:

  switch (VAR_11 & VAR_2) {
  case 129:
   break;
  case 132:
   VAR_14 |= VAR_4;
   break;
  default:
   return -VAR_0;
  }
  break;

 case 134:
 case 128:
 case 131:
  switch (VAR_11 & VAR_2) {
  case 129:
   break;
  case 133:
   VAR_14 |= VAR_4 | VAR_6;
   break;
  case 132:
   VAR_14 |= VAR_4;
   break;
  case 130:
   VAR_14 |= VAR_6;
   break;
  default:
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_12, VAR_7, VAR_14);

 return 0;
}
