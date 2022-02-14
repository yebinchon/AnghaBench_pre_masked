
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_codec {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_codec *VAR_2,
     enum snd_soc_bias_level VAR_3)
{
 u16 VAR_4;
 u16 VAR_5 = FUNC_0(VAR_2, VAR_1) & 0x1F0;
 int VAR_6 = 0;

 switch (VAR_3) {
 case 130:

  VAR_5 |= (1 << 2) | (1 << 3);

  VAR_4 = FUNC_0(VAR_2, VAR_0);
  VAR_6 = FUNC_1(VAR_2, VAR_0, VAR_4 | 0x2);
  if (VAR_6)
   break;

  VAR_6 = FUNC_1(VAR_2, VAR_1, VAR_5 | 0x1);
  break;
 case 129:

  VAR_5 |= (1 << 2) | (1 << 3);
  VAR_6 = FUNC_1(VAR_2, VAR_1, VAR_5 | 0x1);
  break;
 case 128:

  VAR_5 |= (1 << 2) | (1 << 3);

  VAR_6 = FUNC_1(VAR_2, VAR_1, VAR_5 | 0x2);
  break;
 case 131:
  VAR_6 = FUNC_1(VAR_2, VAR_1, VAR_5);
  break;
 }

 return VAR_6;
}
