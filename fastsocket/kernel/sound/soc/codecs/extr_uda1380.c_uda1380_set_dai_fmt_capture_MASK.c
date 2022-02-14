
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;


 unsigned int VAR_7 ;

 int VAR_8 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_9,
  unsigned int VAR_10)
{
 struct snd_soc_codec *VAR_11 = VAR_9->codec;
 int VAR_12;


 VAR_12 = FUNC_0(VAR_11, VAR_8);
 VAR_12 &= ~(VAR_4 | VAR_2);

 switch (VAR_10 & VAR_6) {
 case 130:
  VAR_12 |= VAR_0;
  break;
 case 129:
  VAR_12 |= VAR_1;
  break;
 case 128:
  VAR_12 |= VAR_3;
 }

 if ((VAR_10 & VAR_7) == VAR_5)
  VAR_12 |= VAR_4;

 FUNC_1(VAR_11, VAR_8, VAR_12);

 return 0;
}
