
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ac97_codec {int (* codec_write ) (struct ac97_codec*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ac97_codec*,int,int) ;

__attribute__((used)) static int FUNC_1(struct ac97_codec *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 u16 VAR_6;

 if(VAR_5 & VAR_0)
  return -VAR_1;

 switch(VAR_4)
 {
  case 0: VAR_6 = 0x0; break;
  case 48000: VAR_6 = 0x8004; break;
  case 44100: VAR_6 = 0x8104; break;
  case 32768:
  default:
   return -VAR_1;
 }
 VAR_2->codec_write(VAR_2, 0x68, VAR_6);
 return 0;
}
