
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ac97_codec {int (* codec_read ) (struct ac97_codec*,int) ;int (* codec_write ) (struct ac97_codec*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ac97_codec*,int,int) ;
 int FUNC_1 (struct ac97_codec*,int,int) ;
 int FUNC_2 (struct ac97_codec*,int) ;
 int FUNC_3 (struct ac97_codec*,int,int) ;

__attribute__((used)) static int FUNC_4(struct ac97_codec *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 u16 VAR_6;

 if(VAR_5 & VAR_0)
  return -VAR_1;

 switch(VAR_4)
 {
  case 0: VAR_6 = 0x0001; break;
  case 48000: VAR_6 = 0x0009; break;
  default:
   return -VAR_1;
 }
 VAR_2->codec_write(VAR_2, 0x2A, 0x05c4);
 VAR_2->codec_write(VAR_2, 0x6C, VAR_6);


 VAR_6 = VAR_2->codec_read(VAR_2, 0x64);
 VAR_6 &= ~0x0200;
 if(VAR_5)
  VAR_6 |= 0x0200;
 VAR_2->codec_write(VAR_2, 0x64, VAR_6);
 return 0;
}
