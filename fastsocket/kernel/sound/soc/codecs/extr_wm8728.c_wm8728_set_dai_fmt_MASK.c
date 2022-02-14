
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;


 int VAR_0 ;

 unsigned int VAR_1 ;



 unsigned int VAR_2 ;
 unsigned int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_5,
  unsigned int VAR_6)
{
 struct snd_soc_codec *VAR_7 = VAR_5->codec;
 u16 VAR_8 = FUNC_0(VAR_7, VAR_4);




 switch (VAR_6 & VAR_1) {
 case 132:
  VAR_8 |= 1;
  break;
 default:
  return -VAR_0;
 }


 switch (VAR_6 & VAR_3) {
 case 133:
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_6 & VAR_2) {
 case 128:
  VAR_8 &= ~0x22;
  break;
 case 130:
  VAR_8 |= 0x20;
  VAR_8 &= ~0x02;
  break;
 case 129:
  VAR_8 |= 0x02;
  VAR_8 &= ~0x20;
  break;
 case 131:
  VAR_8 |= 0x22;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_7, VAR_4, VAR_8);
 return 0;
}
