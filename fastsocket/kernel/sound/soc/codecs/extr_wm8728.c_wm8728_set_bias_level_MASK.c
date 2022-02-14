
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_codec {int bias_level; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int FUNC_0 (int ) ;




 int VAR_0 ;
 int FUNC_1 (struct snd_soc_codec*,int) ;
 int FUNC_2 (struct snd_soc_codec*,int,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct snd_soc_codec *VAR_2,
     enum snd_soc_bias_level VAR_3)
{
 u16 VAR_4;
 int VAR_5;

 switch (VAR_3) {
 case 130:
 case 129:
 case 128:
  if (VAR_2->bias_level == 131) {

   VAR_4 = FUNC_1(VAR_2, VAR_0);
   FUNC_2(VAR_2, VAR_0, VAR_4 & ~0x4);


   for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++)
    FUNC_2(VAR_2, VAR_5,
          FUNC_1(VAR_2, VAR_5));
  }
  break;

 case 131:
  VAR_4 = FUNC_1(VAR_2, VAR_0);
  FUNC_2(VAR_2, VAR_0, VAR_4 | 0x4);
  break;
 }
 VAR_2->bias_level = VAR_3;
 return 0;
}
