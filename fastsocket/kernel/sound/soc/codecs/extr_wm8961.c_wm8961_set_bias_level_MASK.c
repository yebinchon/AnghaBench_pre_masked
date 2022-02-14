
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
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_codec *VAR_7,
     enum snd_soc_bias_level VAR_8)
{
 u16 VAR_9;






 switch (VAR_8) {
 case 130:
  break;

 case 129:
  if (VAR_7->bias_level == 128) {

   VAR_9 = FUNC_0(VAR_7, VAR_0);
   VAR_9 |= VAR_2 | VAR_1;
   FUNC_1(VAR_7, VAR_0, VAR_9);


   VAR_9 = FUNC_0(VAR_7, VAR_3);
   VAR_9 &= ~VAR_4;
   VAR_9 |= (1 << VAR_5) | VAR_6;
   FUNC_1(VAR_7, VAR_3, VAR_9);
  }
  break;

 case 128:
  if (VAR_7->bias_level == 129) {

   VAR_9 = FUNC_0(VAR_7, VAR_3);
   VAR_9 &= ~VAR_6;
   FUNC_1(VAR_7, VAR_3, VAR_9);


   VAR_9 = FUNC_0(VAR_7, VAR_0);
   VAR_9 &= ~(VAR_2 | VAR_1);
   FUNC_1(VAR_7, VAR_0, VAR_9);


   VAR_9 = FUNC_0(VAR_7, VAR_3);
   VAR_9 &= ~VAR_4;
   FUNC_1(VAR_7, VAR_3, VAR_9);
  }
  break;

 case 131:
  break;
 }

 VAR_7->bias_level = VAR_8;

 return 0;
}
