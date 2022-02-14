
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;


 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2,
     int VAR_3, int VAR_4)
{
 struct snd_soc_codec *VAR_5 = VAR_2->codec;
 u16 VAR_6;
 int VAR_7 = 0;

 switch (VAR_3) {
 case 130:
  VAR_6 = FUNC_0(VAR_5, VAR_1) & 0xFFEF3;
  VAR_7 = FUNC_1(VAR_5, VAR_1, VAR_6 | (VAR_4 << 2));
  break;
 case 129:
  VAR_6 = FUNC_0(VAR_5, VAR_1) & 0xFF1F;
  VAR_7 = FUNC_1(VAR_5, VAR_1, VAR_6 | (VAR_4 << 5));
  break;
 case 128:
  VAR_6 = FUNC_0(VAR_5, VAR_0) & 0xFFCF;
  VAR_7 = FUNC_1(VAR_5, VAR_0, VAR_6 | (VAR_4 << 4));
  break;
 }
 return VAR_7;
}
