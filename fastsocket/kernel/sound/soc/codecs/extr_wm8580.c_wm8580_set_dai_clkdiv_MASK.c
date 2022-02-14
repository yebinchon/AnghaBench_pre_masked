
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;







 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_14,
     int VAR_15, int VAR_16)
{
 struct snd_soc_codec *VAR_17 = VAR_14->codec;
 unsigned int VAR_18;

 switch (VAR_15) {
 case 128:
  VAR_18 = FUNC_0(VAR_17, VAR_5);
  VAR_18 &= ~VAR_10;

  switch (VAR_16) {
  case 134:

   break;

  case 131:
   VAR_18 |= VAR_12;
   break;
  case 130:
   VAR_18 |= VAR_13;
   break;

  case 132:
   VAR_18 |= VAR_11;
   break;

  default:
   return -VAR_0;
  }
  FUNC_1(VAR_17, VAR_5, VAR_18);
  break;

 case 129:
  VAR_18 = FUNC_0(VAR_17, VAR_1);
  VAR_18 &= ~VAR_2;

  switch (VAR_16) {
  case 134:
   break;

  case 131:
   VAR_18 |= VAR_3;
   break;

  case 130:
   VAR_18 |= VAR_4;
   break;

  default:
   return -VAR_0;
  }
  FUNC_1(VAR_17, VAR_1, VAR_18);
  break;

 case 135:
  VAR_18 = FUNC_0(VAR_17, VAR_5);
  VAR_18 &= ~VAR_6;

  switch (VAR_16) {
  case 133:
   break;

  case 131:
   VAR_18 |= VAR_8;
   break;

  case 130:
   VAR_18 |= VAR_9;
   break;

  case 132:
   VAR_18 |= VAR_7;
   break;

  default:
   return -VAR_0;
  }
  FUNC_1(VAR_17, VAR_5, VAR_18);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
