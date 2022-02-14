
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int id; struct snd_soc_codec* codec; } ;
struct snd_soc_codec {int dummy; } ;


 int VAR_0 ;




 unsigned int VAR_1 ;



 unsigned int VAR_2 ;

 unsigned int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int FUNC_0 (struct snd_soc_codec*,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_7, unsigned int VAR_8)
{
 struct snd_soc_codec *VAR_9 = VAR_7->codec;
 int VAR_10, VAR_11, VAR_12;

 switch (VAR_7->id) {
 case 128:
  VAR_10 = VAR_5;
  VAR_12 = 0x80;
  break;
 case 129:
  VAR_10 = VAR_4;
  VAR_12 = 0x100;
  break;
 default:
  return -VAR_0;
 }

 VAR_11 = 0;

 switch (VAR_8 & VAR_3) {
 case 140:
  break;
 case 139:
  VAR_12 = 0;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_8 & VAR_1) {
 case 136:
  VAR_11 |= 0x0002;
  break;
 case 130:
  break;
 case 133:
  VAR_11 |= 0x0001;
  break;

 case 138:
  VAR_11 |= 0x0003;
  break;
 case 137:
  VAR_11 |= 0x0007;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_8 & VAR_2) {
 case 131:
  break;
 case 135:
  VAR_11 |= 0x00c;
  break;
 case 134:
  VAR_11 |= 0x008;
  break;
 case 132:
  VAR_11 |= 0x004;
  break;
 default:
  return -VAR_0;
 }


 FUNC_0(VAR_9, VAR_10, 0xf, VAR_11);
 FUNC_0(VAR_9, VAR_6, 0x180, VAR_12);

 return 0;
}
