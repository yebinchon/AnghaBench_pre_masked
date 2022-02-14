
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_soc_codec*,int ) ;
 int FUNC_3 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_codec *VAR_19,
 enum snd_soc_bias_level VAR_20)
{
 u16 VAR_21;

 switch (VAR_20) {
 case 130:
  break;

 case 129:

  VAR_21 = FUNC_2(VAR_19, VAR_15) &
   ~VAR_18;
  FUNC_3(VAR_19, VAR_15, VAR_21 | 0x2);
  break;

 case 128:
  if (VAR_19->bias_level == 131) {

   FUNC_3(VAR_19, VAR_0, VAR_6 |
    VAR_10 | VAR_8 |
    VAR_9 | VAR_7 |
    VAR_11);


   FUNC_3(VAR_19, VAR_1, VAR_16 |
         VAR_2 | VAR_14 |
         VAR_17);


   FUNC_1(FUNC_0(300));


   FUNC_3(VAR_19, VAR_1, VAR_16 |
         VAR_2 | VAR_14);


   FUNC_3(VAR_19, VAR_0, 0);


   FUNC_3(VAR_19, VAR_15, 0x1b00);

   FUNC_1(FUNC_0(50));


   FUNC_3(VAR_19, VAR_15, 0x1f02);

   FUNC_1(FUNC_0(100));


   FUNC_3(VAR_19, VAR_15, 0x1f03);

   FUNC_1(FUNC_0(600));


   FUNC_3(VAR_19, VAR_1, VAR_16 |
         VAR_2 | VAR_14 |
         VAR_3);


   FUNC_3(VAR_19, VAR_15, 0x3);


   FUNC_3(VAR_19, VAR_1, VAR_3);


   FUNC_3(VAR_19, VAR_12, 0x2);
   FUNC_3(VAR_19, VAR_13, 0xa003);
   FUNC_3(VAR_19, VAR_12, 0);
  }


  VAR_21 = FUNC_2(VAR_19, VAR_15) &
   ~VAR_18;
  FUNC_3(VAR_19, VAR_15, VAR_21 | 0x4);
  break;

 case 131:

  FUNC_3(VAR_19, VAR_1, VAR_16 |
   VAR_14 | VAR_3);


  FUNC_3(VAR_19, VAR_1, VAR_16 |
   VAR_2 | VAR_14 |
   VAR_3);


  VAR_21 = FUNC_2(VAR_19, VAR_4);
  FUNC_3(VAR_19, VAR_4, VAR_21 | VAR_5);


  FUNC_3(VAR_19, VAR_15, 0x1f03);


  FUNC_3(VAR_19, VAR_15, 0x1f01);

  FUNC_1(FUNC_0(300));


  FUNC_3(VAR_19, VAR_0, VAR_6 |
   VAR_10 | VAR_8 |
   VAR_9 | VAR_7 |
   VAR_11);


  FUNC_3(VAR_19, VAR_15, 0x0);


  FUNC_3(VAR_19, VAR_1, 0x0);
  break;
 }

 VAR_19->bias_level = VAR_20;
 return 0;
}
