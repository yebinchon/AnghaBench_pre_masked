
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_codec {int bias_level; struct aic3x_priv* private_data; } ;
struct aic3x_priv {int master; } ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;




 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_codec *VAR_23,
    enum snd_soc_bias_level VAR_24)
{
 struct aic3x_priv *VAR_25 = VAR_23->private_data;
 u8 VAR_26;

 switch (VAR_24) {
 case 130:

  if (VAR_25->master) {

   VAR_26 = FUNC_0(VAR_23, VAR_0);
   FUNC_1(VAR_23, VAR_0,
        VAR_26 | VAR_18);
  }
  break;
 case 129:
  break;
 case 128:




  if (VAR_25->master) {

   VAR_26 = FUNC_0(VAR_23, VAR_0);
   FUNC_1(VAR_23, VAR_0,
        VAR_26 & ~VAR_18);
  }
  break;
 case 131:

  VAR_26 = FUNC_0(VAR_23, VAR_12);
  FUNC_1(VAR_23, VAR_12, VAR_26 & ~VAR_10);
  VAR_26 = FUNC_0(VAR_23, VAR_13);
  FUNC_1(VAR_23, VAR_13, VAR_26 & ~VAR_19);

  VAR_26 = FUNC_0(VAR_23, VAR_1);
  FUNC_1(VAR_23, VAR_1, VAR_26 & ~(VAR_11 | VAR_20));

  VAR_26 = FUNC_0(VAR_23, VAR_4);
  FUNC_1(VAR_23, VAR_4, VAR_26 & ~VAR_5);
  VAR_26 = FUNC_0(VAR_23, VAR_8);
  FUNC_1(VAR_23, VAR_8, VAR_26 & ~VAR_9);

  VAR_26 = FUNC_0(VAR_23, VAR_2);
  FUNC_1(VAR_23, VAR_2, VAR_26 & ~VAR_3);
  VAR_26 = FUNC_0(VAR_23, VAR_6);
  FUNC_1(VAR_23, VAR_6, VAR_26 & ~VAR_7);

  VAR_26 = FUNC_0(VAR_23, VAR_16);
  FUNC_1(VAR_23, VAR_16, VAR_26 & ~VAR_17);

  VAR_26 = FUNC_0(VAR_23, VAR_14);
  FUNC_1(VAR_23, VAR_14, VAR_26 & ~VAR_15);
  VAR_26 = FUNC_0(VAR_23, VAR_21);
  FUNC_1(VAR_23, VAR_21, VAR_26 & ~VAR_22);

  if (VAR_25->master) {

   VAR_26 = FUNC_0(VAR_23, VAR_0);
   FUNC_1(VAR_23, VAR_0,
        VAR_26 & ~VAR_18);
  }
  break;
 }
 VAR_23->bias_level = VAR_24;

 return 0;
}
