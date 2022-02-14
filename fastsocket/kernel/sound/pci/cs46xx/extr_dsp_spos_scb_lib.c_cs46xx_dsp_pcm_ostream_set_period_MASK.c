
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_cs46xx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct snd_cs46xx*,int) ;
 int FUNC_1 (struct snd_cs46xx*,int,int ) ;
 int FUNC_2 (char*,int) ;

int FUNC_3 (struct snd_cs46xx * VAR_10,
           int VAR_11)
{
 u32 VAR_12 = FUNC_0 (VAR_10,VAR_9 << 2);
 VAR_12 &= ~VAR_7;

 switch (VAR_11) {
 case 2048:
  VAR_12 |= VAR_0;
  break;
 case 1024:
  VAR_12 |= VAR_5;
  break;
 case 512:
  VAR_12 |= VAR_3;
  break;
 case 256:
  VAR_12 |= VAR_1;
  break;
 case 128:
  VAR_12 |= VAR_6;
  break;
 case 64:
  VAR_12 |= VAR_4;
  break;
 case 32:
  VAR_12 |= VAR_2;
  break;
 default:
  FUNC_2 ("period size (%d) not supported by HW\n", VAR_11);
  return -VAR_8;
 }

 FUNC_1 (VAR_10,VAR_9 << 2,VAR_12);

 return 0;
}
