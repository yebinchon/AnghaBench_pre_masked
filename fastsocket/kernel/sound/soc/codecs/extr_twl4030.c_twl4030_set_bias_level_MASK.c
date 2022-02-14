
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_priv {int bypass_state; } ;
struct snd_soc_codec {int bias_level; struct twl4030_priv* private_data; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;






 int FUNC_0 (struct snd_soc_codec*,int) ;
 int FUNC_1 (struct snd_soc_codec*) ;
 int FUNC_2 (struct snd_soc_codec*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_codec *VAR_0,
      enum snd_soc_bias_level VAR_1)
{
 struct twl4030_priv *VAR_2 = VAR_0->private_data;

 switch (VAR_1) {
 case 130:
  FUNC_0(VAR_0, 0);
  break;
 case 129:
  FUNC_2(VAR_0);
  if (VAR_2->bypass_state)
   FUNC_0(VAR_0, 0);
  else
   FUNC_0(VAR_0, 1);
  break;
 case 128:
  FUNC_2(VAR_0);
  if (VAR_2->bypass_state)
   FUNC_0(VAR_0, 0);
  else
   FUNC_0(VAR_0, 1);
  break;
 case 131:
  FUNC_1(VAR_0);
  break;
 }
 VAR_0->bias_level = VAR_1;

 return 0;
}
