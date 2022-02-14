
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {int bias_level; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;






 int FUNC_0 (struct snd_soc_codec*,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_codec *VAR_0,
  enum snd_soc_bias_level VAR_1)
{
 switch (VAR_1) {
 case 130:
  FUNC_0(VAR_0, 1);
  break;
 case 129:
  break;
 case 128:
 case 131:
  FUNC_0(VAR_0, 0);
  break;
 }
 VAR_0->bias_level = VAR_1;
 return 0;
}
