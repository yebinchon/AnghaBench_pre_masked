
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {int bias_level; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;






 int VAR_0 ;
 int FUNC_0 (struct snd_soc_codec*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_codec *VAR_1,
     enum snd_soc_bias_level VAR_2)
{
 switch (VAR_2) {
 case 130:
  break;
 case 129:
  break;
 case 128:
  if (VAR_1->bias_level == 131) {

   FUNC_0(VAR_1, VAR_0, 1, 0);
  }

  break;
 case 131:
  FUNC_0(VAR_1, VAR_0, 1, 1);
  break;
 }

 VAR_1->bias_level = VAR_2;
 return 0;
}
