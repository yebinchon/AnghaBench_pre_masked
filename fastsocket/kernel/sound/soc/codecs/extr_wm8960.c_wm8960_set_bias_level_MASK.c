
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wm8960_data {int dres; } ;
struct snd_soc_codec {int bias_level; TYPE_1__* dev; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;
struct TYPE_2__ {struct wm8960_data* platform_data; } ;






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
 struct wm8960_data *VAR_11 = VAR_9->dev->platform_data;
 u16 VAR_12;

 switch (VAR_10) {
 case 130:
  break;

 case 129:

  VAR_12 = FUNC_1(VAR_9, VAR_6);
  VAR_12 &= ~0x180;
  VAR_12 |= 0x80;
  FUNC_2(VAR_9, VAR_6, VAR_12);
  break;

 case 128:
  if (VAR_9->bias_level == 131) {

   FUNC_2(VAR_9, VAR_0,
         VAR_5 | VAR_7 |
         VAR_2 | VAR_3);


   VAR_12 = VAR_4;
   if (VAR_11)
    VAR_12 |= VAR_11->dres << 4;
   FUNC_2(VAR_9, VAR_1, VAR_12);

   FUNC_0(400);

   FUNC_2(VAR_9, VAR_1, 0);


   VAR_12 = FUNC_1(VAR_9, VAR_6);
   VAR_12 |= 0x80;
   FUNC_2(VAR_9, VAR_6, VAR_12);
   FUNC_0(100);


   FUNC_2(VAR_9, VAR_6, VAR_12 | VAR_8);


   FUNC_2(VAR_9, VAR_0, VAR_3);
  }


  VAR_12 = FUNC_1(VAR_9, VAR_6);
  VAR_12 &= ~0x180;
  VAR_12 |= 0x100;
  FUNC_2(VAR_9, VAR_6, VAR_12);
  break;

 case 131:

  FUNC_2(VAR_9, VAR_0,
        VAR_5 | VAR_7 |
        VAR_2 | VAR_3);


  FUNC_2(VAR_9, VAR_6, 0);
  FUNC_0(600);

  FUNC_2(VAR_9, VAR_0, 0);
  break;
 }

 VAR_9->bias_level = VAR_10;

 return 0;
}
