
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
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_soc_codec*,int ) ;
 int FUNC_2 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_codec *VAR_5,
 enum snd_soc_bias_level VAR_6)
{
 u16 VAR_7 = FUNC_1(VAR_5, VAR_0) & ~0x3;

 switch (VAR_6) {
 case 130:
 case 129:
  VAR_7 |= 0x1;
  FUNC_2(VAR_5, VAR_0, VAR_7);
  break;

 case 128:
  VAR_7 |= VAR_1 | VAR_2;

  if (VAR_5->bias_level == 131) {

   FUNC_2(VAR_5, VAR_0, VAR_7 | 0x3);
   FUNC_0(100);
  }

  VAR_7 |= 0x2;
  FUNC_2(VAR_5, VAR_0, VAR_7);
  break;

 case 131:
  FUNC_2(VAR_5, VAR_0, 0);
  FUNC_2(VAR_5, VAR_3, 0);
  FUNC_2(VAR_5, VAR_4, 0);
  break;
 }

 VAR_5->bias_level = VAR_6;
 return 0;
}
