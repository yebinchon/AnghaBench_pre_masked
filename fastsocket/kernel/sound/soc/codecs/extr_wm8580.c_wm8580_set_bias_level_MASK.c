
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
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_codec *VAR_4,
 enum snd_soc_bias_level VAR_5)
{
 u16 VAR_6;
 switch (VAR_5) {
 case 130:
 case 129:
  break;

 case 128:
  if (VAR_4->bias_level == 131) {

   VAR_6 = FUNC_0(VAR_4, VAR_1);
   VAR_6 &= ~(VAR_3 | VAR_2);
   FUNC_1(VAR_4, VAR_1, VAR_6);


   VAR_6 = FUNC_0(VAR_4, VAR_0);
   VAR_6 &= ~0x100;
   FUNC_1(VAR_4, VAR_0, VAR_6);
  }
  break;

 case 131:
  VAR_6 = FUNC_0(VAR_4, VAR_1);
  FUNC_1(VAR_4, VAR_1, VAR_6 | VAR_3);
  break;
 }
 VAR_4->bias_level = VAR_5;
 return 0;
}
