
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_4,
  int VAR_5, int VAR_6)
{
 struct snd_soc_codec *VAR_7 = VAR_4->codec;
 u16 VAR_8;

 switch (VAR_5) {
 case 129:
  VAR_8 = FUNC_0(VAR_7, VAR_1) & 0xf0ff;
  FUNC_1(VAR_7, VAR_1, VAR_8 | VAR_6);
  break;
 case 134:
  VAR_8 = FUNC_0(VAR_7, VAR_1) & 0xfffd;
  FUNC_1(VAR_7, VAR_1, VAR_8 | VAR_6);
  break;
 case 133:
  VAR_8 = FUNC_0(VAR_7, VAR_1) & 0xfffb;
  FUNC_1(VAR_7, VAR_1, VAR_8 | VAR_6);
  break;
 case 132:
  VAR_8 = FUNC_0(VAR_7, VAR_1) & 0x8fff;
  FUNC_1(VAR_7, VAR_1, VAR_8 | VAR_6);
  break;
 case 130:
  VAR_8 = FUNC_0(VAR_7, VAR_0) & 0xf1ff;
  FUNC_1(VAR_7, VAR_0, VAR_8 | VAR_6);
  break;
 case 128:
  VAR_8 = FUNC_0(VAR_7, VAR_2) & 0xff80;
  FUNC_1(VAR_7, VAR_2, VAR_8 | 0x60 | VAR_6);
  break;
 case 131:
  VAR_8 = FUNC_0(VAR_7, VAR_2) & 0xff80;
  FUNC_1(VAR_7, VAR_2, VAR_8 | 0x70 | VAR_6);
  break;
 default:
  return -VAR_3;
 }

 return 0;
}
