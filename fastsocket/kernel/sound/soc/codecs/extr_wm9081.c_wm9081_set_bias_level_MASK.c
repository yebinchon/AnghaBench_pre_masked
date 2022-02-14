
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_codec {int bias_level; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_soc_codec*,int ) ;
 int FUNC_2 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_codec *VAR_9,
     enum snd_soc_bias_level VAR_10)
{
 u16 VAR_11;

 switch (VAR_10) {
 case 130:
  break;

 case 129:

  VAR_11 = FUNC_1(VAR_9, VAR_6);
  VAR_11 &= ~VAR_8;
  VAR_11 |= 0x2;
  FUNC_2(VAR_9, VAR_6, VAR_11);


  VAR_11 = FUNC_1(VAR_9, VAR_1);
  VAR_11 &= ~VAR_5;
  FUNC_2(VAR_9, VAR_1, VAR_11);
  break;

 case 128:

  if (VAR_9->bias_level == 131) {

   VAR_11 = FUNC_1(VAR_9, VAR_0);
   VAR_11 &= ~VAR_4;
   FUNC_2(VAR_9, VAR_0, VAR_11);


   VAR_11 = FUNC_1(VAR_9, VAR_1);
   VAR_11 |= VAR_3 | VAR_2;
   FUNC_2(VAR_9, VAR_1, VAR_11);


   VAR_11 = FUNC_1(VAR_9, VAR_6);
   VAR_11 |= VAR_7 | 0x6;
   FUNC_2(VAR_9, VAR_6, VAR_11);

   FUNC_0(100);


   VAR_11 |= VAR_2;
   VAR_11 &= ~VAR_7;
   FUNC_2(VAR_9, VAR_6, VAR_11);


   VAR_11 = FUNC_1(VAR_9, VAR_1);
   VAR_11 &= ~VAR_3;
   FUNC_2(VAR_9, VAR_1, VAR_11);
  }


  VAR_11 = FUNC_1(VAR_9, VAR_1);
  VAR_11 &= ~VAR_8;
  VAR_11 |= 0x40;
  FUNC_2(VAR_9, VAR_6, VAR_11);


  VAR_11 = FUNC_1(VAR_9, VAR_1);
  VAR_11 |= VAR_5;
  FUNC_2(VAR_9, VAR_1, VAR_11);
  break;

 case 131:

  VAR_11 = FUNC_1(VAR_9, VAR_1);
  VAR_11 |= VAR_3;
  FUNC_2(VAR_9, VAR_1, VAR_11);


  VAR_11 = FUNC_1(VAR_9, VAR_6);
  VAR_11 &= ~(VAR_8 | VAR_2);
  VAR_11 |= VAR_7;
  FUNC_2(VAR_9, VAR_6, VAR_11);


  VAR_11 = FUNC_1(VAR_9, VAR_0);
  VAR_11 |= VAR_4;
  FUNC_2(VAR_9, VAR_0, VAR_11);
  break;
 }

 VAR_9->bias_level = VAR_10;

 return 0;
}
