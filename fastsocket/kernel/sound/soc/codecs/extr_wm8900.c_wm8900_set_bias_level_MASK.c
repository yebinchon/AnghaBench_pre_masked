
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
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_soc_codec*,int ) ;
 int FUNC_3 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_codec *VAR_14,
     enum snd_soc_bias_level VAR_15)
{
 u16 VAR_16;

 switch (VAR_15) {
 case 130:

  VAR_16 = FUNC_2(VAR_14, VAR_4);
  FUNC_3(VAR_14, VAR_4,
        VAR_16 | VAR_5);
  VAR_16 = FUNC_2(VAR_14, VAR_0);
  FUNC_3(VAR_14, VAR_0,
        VAR_16 | VAR_2);
  break;

 case 129:
  break;

 case 128:

  if (VAR_14->bias_level == 131) {

   FUNC_3(VAR_14, VAR_7,
         VAR_10);


   FUNC_3(VAR_14, VAR_0,
         VAR_1 |
         VAR_3);


   FUNC_3(VAR_14, VAR_7,
         VAR_10 | 0x1);


   FUNC_1(FUNC_0(400));


   FUNC_3(VAR_14, VAR_7,
         VAR_10 |
         VAR_8 | 0x1);

   FUNC_3(VAR_14, VAR_0, 0);

   FUNC_3(VAR_14, VAR_7,
         VAR_8 | 0x1);
  }

  VAR_16 = FUNC_2(VAR_14, VAR_7);
  FUNC_3(VAR_14, VAR_7,
        (VAR_16 & VAR_9) |
        VAR_8 | 0x1);
  FUNC_3(VAR_14, VAR_11,
        VAR_12);
  FUNC_3(VAR_14, VAR_13, 0);
  break;

 case 131:

  VAR_16 = FUNC_2(VAR_14, VAR_7);
  FUNC_3(VAR_14, VAR_7,
        VAR_16 & VAR_10);
  FUNC_3(VAR_14, VAR_0,
        VAR_1 |
        VAR_3);


  FUNC_3(VAR_14, VAR_7,
        VAR_10);
  FUNC_1(FUNC_0(500));


  FUNC_3(VAR_14, VAR_6, 0);


  FUNC_3(VAR_14, VAR_0, 0);
  FUNC_3(VAR_14, VAR_7, 0);
  FUNC_3(VAR_14, VAR_11, 0);
  FUNC_3(VAR_14, VAR_13, 0);




  FUNC_1(FUNC_0(1));
  FUNC_3(VAR_14, VAR_11,
        VAR_12);
  break;
 }
 VAR_14->bias_level = VAR_15;
 return 0;
}
