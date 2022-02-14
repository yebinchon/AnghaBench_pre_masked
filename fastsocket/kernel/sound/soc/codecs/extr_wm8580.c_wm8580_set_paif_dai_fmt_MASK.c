
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {scalar_t__ id; struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;


 int VAR_0 ;




 unsigned int VAR_1 ;



 unsigned int VAR_2 ;

 unsigned int VAR_3 ;



 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 unsigned int FUNC_0 (struct snd_soc_codec*,scalar_t__) ;
 int FUNC_1 (struct snd_soc_codec*,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_14,
          unsigned int VAR_15)
{
 struct snd_soc_codec *VAR_16 = VAR_14->codec;
 unsigned int VAR_17;
 unsigned int VAR_18;
 int VAR_19;

 VAR_17 = FUNC_0(VAR_16, VAR_12 + VAR_14->id);
 VAR_18 = FUNC_0(VAR_16, VAR_13 + VAR_14->id);

 VAR_18 &= ~(VAR_8 | VAR_10 | VAR_4);

 switch (VAR_15 & VAR_3) {
 case 137:
  VAR_17 &= ~VAR_11;
  break;
 case 138:
  VAR_17 |= VAR_11;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_15 & VAR_1) {
 case 134:
  VAR_19 = 1;
  VAR_18 |= VAR_6;
  break;
 case 128:
  VAR_19 = 1;
  VAR_18 |= VAR_9;
  break;
 case 131:
  VAR_19 = 1;
  VAR_18 |= VAR_7;
  break;
 case 136:
  VAR_19 = 0;
  VAR_18 |= VAR_5;
  break;
 case 135:
  VAR_19 = 0;
  VAR_18 |= VAR_5;
  VAR_18 |= VAR_10;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_15 & VAR_2) {
 case 129:
  break;

 case 133:
  if (!VAR_19)
   return -VAR_0;
  VAR_18 |= VAR_4;
  VAR_18 |= VAR_10;
  break;

 case 132:
  VAR_18 |= VAR_4;
  break;

 case 130:
  if (!VAR_19)
   return -VAR_0;
  VAR_18 |= VAR_10;
  break;

 default:
  return -VAR_0;
 }

 FUNC_1(VAR_16, VAR_12 + VAR_14->id, VAR_17);
 FUNC_1(VAR_16, VAR_13 + VAR_14->id, VAR_18);

 return 0;
}
