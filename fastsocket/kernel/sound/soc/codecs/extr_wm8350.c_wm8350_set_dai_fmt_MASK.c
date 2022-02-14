
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_14, unsigned int VAR_15)
{
 struct snd_soc_codec *VAR_16 = VAR_14->codec;
 u16 VAR_17 = FUNC_0(VAR_16, VAR_10) &
     ~(VAR_6 | VAR_8 | VAR_7);
 u16 VAR_18 = FUNC_0(VAR_16, VAR_9) &
     ~VAR_11;
 u16 VAR_19 = FUNC_0(VAR_16, VAR_13) &
     ~VAR_12;
 u16 VAR_20 = FUNC_0(VAR_16, VAR_5) &
     ~VAR_4;


 switch (VAR_15 & VAR_3) {
 case 138:
  VAR_18 |= VAR_11;
  VAR_19 |= VAR_12;
  VAR_20 |= VAR_4;
  break;
 case 137:
  break;
 default:
  return -VAR_0;
 }


 switch (VAR_15 & VAR_1) {
 case 134:
  VAR_17 |= 0x2 << 8;
  break;
 case 128:
  break;
 case 131:
  VAR_17 |= 0x1 << 8;
  break;
 case 136:
  VAR_17 |= 0x3 << 8;
  break;
 case 135:
  VAR_17 |= 0x3 << 8 | VAR_8;
  break;
 default:
  return -VAR_0;
 }


 switch (VAR_15 & VAR_2) {
 case 129:
  break;
 case 133:
  VAR_17 |= VAR_8 | VAR_6;
  break;
 case 132:
  VAR_17 |= VAR_6;
  break;
 case 130:
  VAR_17 |= VAR_8;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_16, VAR_10, VAR_17);
 FUNC_1(VAR_16, VAR_9, VAR_18);
 FUNC_1(VAR_16, VAR_13, VAR_19);
 FUNC_1(VAR_16, VAR_5, VAR_20);
 return 0;
}
