
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lineout2_diff; int lineout1_diff; } ;
struct wm8993_priv {TYPE_1__ pdata; } ;
struct snd_soc_codec {int bias_level; struct wm8993_priv* private_data; } ;
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
 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_codec *VAR_12,
     enum snd_soc_bias_level VAR_13)
{
 struct wm8993_priv *VAR_14 = VAR_12->private_data;

 switch (VAR_13) {
 case 130:
 case 129:

  FUNC_1(VAR_12, VAR_5,
        VAR_11, 0x2);
  FUNC_1(VAR_12, VAR_6,
        VAR_8, VAR_8);
  break;

 case 128:
  if (VAR_12->bias_level == 131) {

   FUNC_1(VAR_12, VAR_1,
         VAR_7 |
         VAR_9 |
         VAR_10 |
         VAR_3,
         VAR_7 |
         VAR_9 |
         VAR_10 |
         VAR_3);



   if (!VAR_14->pdata.lineout1_diff ||
       !VAR_14->pdata.lineout2_diff)
    FUNC_1(VAR_12, VAR_0,
       VAR_4,
       VAR_4);


   FUNC_1(VAR_12, VAR_5,
         VAR_11 |
         VAR_2,
         VAR_2 | 0x2);
   FUNC_0(32);


   FUNC_1(VAR_12, VAR_1,
         VAR_3 |
         VAR_7, 0);
  }


  FUNC_1(VAR_12, VAR_5,
        VAR_11, 0x4);

  FUNC_1(VAR_12, VAR_6,
        VAR_8, 0);
  break;

 case 131:
  FUNC_1(VAR_12, VAR_0,
        VAR_4, 0);

  FUNC_1(VAR_12, VAR_5,
        VAR_11 | VAR_2,
        0);
  break;
 }

 VAR_12->bias_level = VAR_13;

 return 0;
}
