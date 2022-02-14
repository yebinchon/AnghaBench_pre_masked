
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8993_priv {int master; } ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {struct wm8993_priv* private_data; } ;


 int VAR_0 ;






 unsigned int VAR_1 ;



 unsigned int VAR_2 ;

 unsigned int VAR_3 ;



 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_11,
         unsigned int VAR_12)
{
 struct snd_soc_codec *VAR_13 = VAR_11->codec;
 struct wm8993_priv *VAR_14 = VAR_13->private_data;
 unsigned int VAR_15 = FUNC_0(VAR_13, VAR_7);
 unsigned int VAR_16 = FUNC_0(VAR_13, VAR_8);

 VAR_15 &= ~(VAR_9 | VAR_4 |
    VAR_6 | VAR_5);
 VAR_16 &= ~VAR_10;

 switch (VAR_12 & VAR_3) {
 case 137:
  VAR_14->master = 0;
  break;
 case 138:
  VAR_16 |= VAR_10;
  VAR_14->master = 1;
  break;
 case 139:
  VAR_15 |= VAR_9;
  VAR_14->master = 1;
  break;
 case 140:
  VAR_15 |= VAR_9;
  VAR_16 |= VAR_10;
  VAR_14->master = 1;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_12 & VAR_1) {
 case 135:
  VAR_15 |= VAR_6;
 case 136:
  VAR_15 |= 0x18;
  break;
 case 134:
  VAR_15 |= 0x10;
  break;
 case 128:
  break;
 case 131:
  VAR_15 |= 0x8;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_12 & VAR_1) {
 case 136:
 case 135:

  switch (VAR_12 & VAR_2) {
  case 129:
   break;
  case 132:
   VAR_15 |= VAR_4;
   break;
  default:
   return -VAR_0;
  }
  break;

 case 134:
 case 128:
 case 131:
  switch (VAR_12 & VAR_2) {
  case 129:
   break;
  case 133:
   VAR_15 |= VAR_4 | VAR_6;
   break;
  case 132:
   VAR_15 |= VAR_4;
   break;
  case 130:
   VAR_15 |= VAR_6;
   break;
  default:
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_13, VAR_7, VAR_15);
 FUNC_1(VAR_13, VAR_8, VAR_16);

 return 0;
}
