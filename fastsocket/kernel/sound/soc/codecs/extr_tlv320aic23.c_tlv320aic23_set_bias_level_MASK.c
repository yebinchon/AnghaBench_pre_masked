
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_codec {int bias_level; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_codec *VAR_2,
          enum snd_soc_bias_level VAR_3)
{
 u16 VAR_4 = FUNC_0(VAR_2, VAR_1) & 0xff7f;

 switch (VAR_3) {
 case 130:

  FUNC_1(VAR_2, VAR_1, VAR_4);
  break;
 case 129:
  break;
 case 128:

  FUNC_1(VAR_2, VAR_1, VAR_4 | 0x0040);
  break;
 case 131:

  FUNC_1(VAR_2, VAR_0, 0x0);
  FUNC_1(VAR_2, VAR_1, 0xffff);
  break;
 }
 VAR_2->bias_level = VAR_3;
 return 0;
}
