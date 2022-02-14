
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
 int VAR_5 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_6,
  unsigned int VAR_7)
{
 struct snd_soc_codec *VAR_8 = VAR_6->codec;
 u16 VAR_9, VAR_10;

 VAR_9 = FUNC_0(VAR_8, VAR_5) & 0x011f;
 VAR_10 = FUNC_0(VAR_8, VAR_4) & 0x015d;


 switch (VAR_7 & VAR_3) {
 case 137:
  break;
 case 139:
  VAR_10 |= 0x2;
 case 138:
  VAR_9 |= 0x0040;
  break;
 default:
  return -VAR_0;
 }


 switch (VAR_7 & VAR_1) {
 case 136:
 case 135:

  switch (VAR_7 & VAR_2) {
  case 129:
   break;
  case 132:
   VAR_9 |= 0x0080;
   break;
  default:
   return -VAR_0;
  }
  break;
 case 134:
 case 128:
 case 131:
  VAR_9 &= ~0x0010;
  switch (VAR_7 & VAR_2) {
  case 129:
   break;
  case 133:
   VAR_9 |= 0x0090;
   break;
  case 132:
   VAR_9 |= 0x0080;
   break;
  case 130:
   VAR_9 |= 0x0010;
   break;
  default:
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_8, VAR_5, VAR_9);
 FUNC_1(VAR_8, VAR_4, VAR_10);
 return 0;
}
