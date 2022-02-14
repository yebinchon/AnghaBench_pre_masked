
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

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_12,
  unsigned int VAR_13)
{
 struct snd_soc_codec *VAR_14 = VAR_12->codec;
 u16 VAR_15, VAR_16;

 VAR_15 = FUNC_0(VAR_14, VAR_10);
 VAR_16 = FUNC_0(VAR_14, VAR_11);


 switch (VAR_13 & VAR_2) {
 case 133:
  VAR_16 &= ~VAR_9;
  break;
 case 134:
  VAR_16 |= VAR_9;
  break;
 default:
  return -VAR_0;
 }

 VAR_15 &= ~VAR_6;


 switch (VAR_13 & VAR_1) {
 case 130:
  VAR_15 |= VAR_4;
  VAR_15 &= ~VAR_8;
  break;
 case 128:
  VAR_15 |= VAR_7;
  VAR_15 &= ~VAR_8;
  break;
 case 129:
  VAR_15 |= VAR_5;
  VAR_15 &= ~VAR_8;
  break;
 case 132:
  VAR_15 |= VAR_3;
  VAR_15 &= ~VAR_8;
  break;
 case 131:
  VAR_15 |= VAR_3 | VAR_8;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_14, VAR_10, VAR_15);
 FUNC_1(VAR_14, VAR_11, VAR_16);
 return 0;
}
