
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
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_codec *VAR_3,
     enum snd_soc_bias_level VAR_4)
{
 u16 VAR_5 = FUNC_0(VAR_3, VAR_2) & 0xff7f;

 switch (VAR_4) {
 case 130:

  FUNC_1(VAR_3, VAR_2, VAR_5);
  break;
 case 129:
  break;
 case 128:

  FUNC_1(VAR_3, VAR_2, VAR_5 | VAR_0);
  break;
 case 131:

  FUNC_1(VAR_3, VAR_1, 0);
  FUNC_1(VAR_3, VAR_2, 0xffff);
  break;

 }
 VAR_3->bias_level = VAR_4;
 return 0;
}
