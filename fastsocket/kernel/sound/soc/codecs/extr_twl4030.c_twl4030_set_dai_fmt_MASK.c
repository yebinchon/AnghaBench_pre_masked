
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
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
 int FUNC_0 (struct snd_soc_codec*,int) ;
 int FUNC_1 (struct snd_soc_codec*,int ) ;
 int FUNC_2 (struct snd_soc_codec*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_9,
        unsigned int VAR_10)
{
 struct snd_soc_codec *VAR_11 = VAR_9->codec;
 u8 VAR_12, VAR_13;


 VAR_12 = FUNC_1(VAR_11, VAR_8);
 VAR_13 = VAR_12;


 switch (VAR_10 & VAR_2) {
 case 131:
  VAR_13 &= ~(VAR_6);
  VAR_13 &= ~(VAR_7);
  break;
 case 130:
  VAR_13 |= VAR_6;
  VAR_13 |= VAR_7;
  break;
 default:
  return -VAR_0;
 }


 VAR_13 &= ~VAR_3;
 switch (VAR_10 & VAR_1) {
 case 128:
  VAR_13 |= VAR_4;
  break;
 case 129:
  VAR_13 |= VAR_5;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_13 != VAR_12) {


  FUNC_0(VAR_11, 0);


  FUNC_2(VAR_11, VAR_8, VAR_13);


  FUNC_0(VAR_11, 1);
 }

 return 0;
}
