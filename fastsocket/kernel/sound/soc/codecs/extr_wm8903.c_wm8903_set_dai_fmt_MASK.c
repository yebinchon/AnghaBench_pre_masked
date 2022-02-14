
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;


 int VAR_0 ;






 unsigned int VAR_1 ;



 unsigned int VAR_2 ;

 unsigned int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_10,
         unsigned int VAR_11)
{
 struct snd_soc_codec *VAR_12 = VAR_10->codec;
 u16 VAR_13 = FUNC_0(VAR_12, VAR_7);

 VAR_13 &= ~(VAR_9 | VAR_8 | VAR_5 |
    VAR_6 | VAR_4);

 switch (VAR_11 & VAR_3) {
 case 137:
  break;
 case 138:
  VAR_13 |= VAR_9;
  break;
 case 140:
  VAR_13 |= VAR_9 | VAR_8;
  break;
 case 139:
  VAR_13 |= VAR_8;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_11 & VAR_1) {
 case 136:
  VAR_13 |= 0x3;
  break;
 case 135:
  VAR_13 |= 0x3 | VAR_6;
  break;
 case 134:
  VAR_13 |= 0x2;
  break;
 case 128:
  VAR_13 |= 0x1;
  break;
 case 131:
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
   VAR_13 |= VAR_4;
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
   VAR_13 |= VAR_4 | VAR_6;
   break;
  case 132:
   VAR_13 |= VAR_4;
   break;
  case 130:
   VAR_13 |= VAR_6;
   break;
  default:
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_12, VAR_7, VAR_13);

 return 0;
}
