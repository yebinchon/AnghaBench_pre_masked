
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int (* read ) (struct snd_soc_codec*,int ) ;int (* write ) (struct snd_soc_codec*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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





 unsigned int VAR_14 ;



 unsigned int VAR_15 ;
 unsigned int VAR_16 ;


 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ) ;
 int FUNC_2 (struct snd_soc_codec*,int ,int) ;
 int FUNC_3 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_17,
  unsigned int VAR_18)
{
 struct snd_soc_codec *VAR_19 = VAR_17->codec;
 int VAR_20, VAR_21;

 VAR_20 = VAR_19->read(VAR_19, VAR_2);
 VAR_21 = VAR_19->read(VAR_19, VAR_10);




 switch (VAR_18 & VAR_14) {
 case 132:
  VAR_20 &= ~VAR_6;
  VAR_20 |= VAR_7;
  break;
 case 133:
  VAR_20 &= ~VAR_6;
  VAR_20 |= VAR_5;
  break;
 default:
  return -VAR_13;
 }

 switch (VAR_18 & VAR_15) {
 case 128:
  VAR_20 &= ~VAR_4;
  VAR_20 &= ~VAR_0;
  VAR_21 &= ~VAR_12;
  VAR_21 &= ~VAR_8;
  break;
 case 129:
  VAR_20 |= VAR_4;
  VAR_20 &= ~VAR_0;
  VAR_21 |= VAR_12;
  VAR_21 &= ~VAR_8;
  break;
 case 130:
  VAR_20 &= ~VAR_4;
  VAR_20 |= VAR_0;
  VAR_21 &= ~VAR_12;
  VAR_21 |= VAR_8;
  break;

 case 131:
  VAR_20 |= VAR_4;
  VAR_20 |= VAR_0;
  VAR_21 |= VAR_12;
  VAR_21 |= VAR_8;
  break;
 default:
  return -VAR_13;
 }

 switch (VAR_18 & VAR_16) {
 case 137:
  VAR_20 |= VAR_3;
  VAR_20 |= VAR_1;
  VAR_21 |= VAR_11;
  VAR_21 |= VAR_9;
  break;
 case 135:
  VAR_20 |= VAR_3;
  VAR_20 &= ~VAR_1;
  VAR_21 |= VAR_11;
  VAR_21 &= ~VAR_9;
  break;
 case 136:
  VAR_20 &= ~VAR_3;
  VAR_20 |= VAR_1;
  VAR_21 &= ~VAR_11;
  VAR_21 |= VAR_9;
  break;
 case 134:
  VAR_20 &= ~VAR_3;
  VAR_20 &= ~VAR_1;
  VAR_21 &= ~VAR_11;
  VAR_21 &= ~VAR_9;
  break;
 default:
  return -VAR_13;
 }

 VAR_19->write(VAR_19, VAR_2, VAR_20);
 VAR_19->write(VAR_19, VAR_10, VAR_21);

 return 0;
}
