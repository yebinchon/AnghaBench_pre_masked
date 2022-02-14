
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_codec {int bias_level; int reg_cache; struct i2c_client* control_data; } ;
struct i2c_client {int dev; } ;
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
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct snd_soc_codec*,int ) ;
 int FUNC_2 (struct snd_soc_codec*,int ,int) ;
 int FUNC_3 (struct snd_soc_codec*,int) ;
 int FUNC_4 (struct snd_soc_codec*,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_codec *VAR_16,
     enum snd_soc_bias_level VAR_17)
{
 struct i2c_client *VAR_18 = VAR_16->control_data;
 u16 VAR_19, VAR_20;

 switch (VAR_17) {
 case 130:
 case 129:
  VAR_19 = FUNC_1(VAR_16, VAR_9);
  VAR_19 &= ~(VAR_12);
  VAR_19 |= VAR_11;
  FUNC_2(VAR_16, VAR_9, VAR_19);
  break;

 case 128:
  if (VAR_16->bias_level == 131) {
   FUNC_2(VAR_16, VAR_3,
         VAR_2);


   FUNC_2(VAR_16, VAR_13, 0x11);
   FUNC_2(VAR_16, VAR_14, 0x1257);
   FUNC_2(VAR_16, VAR_15, 0x2);

   FUNC_3(VAR_16, 0);
   FUNC_4(VAR_16, VAR_16->reg_cache);


   VAR_19 = FUNC_1(VAR_16,
       VAR_4);
   FUNC_2(VAR_16, VAR_4,
         VAR_19 | VAR_8);
   VAR_20 = FUNC_1(VAR_16, VAR_0);
   FUNC_2(VAR_16, VAR_0,
         VAR_20 | VAR_7);
   FUNC_2(VAR_16, VAR_4,
         VAR_19);




   FUNC_0(&VAR_18->dev, "Enabling Class W\n");
   FUNC_2(VAR_16, VAR_1, VAR_19 |
         VAR_5 | VAR_6);
  }

  VAR_19 = FUNC_1(VAR_16, VAR_9);
  VAR_19 &= ~(VAR_12);
  VAR_19 |= VAR_10;
  FUNC_2(VAR_16, VAR_9, VAR_19);
  break;

 case 131:
  FUNC_3(VAR_16, 32);
  VAR_19 = FUNC_1(VAR_16, VAR_3);
  VAR_19 &= ~VAR_2;
  FUNC_2(VAR_16, VAR_3, VAR_19);
  break;
 }

 VAR_16->bias_level = VAR_17;

 return 0;
}
