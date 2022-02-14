
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct a10codec_chinfo {int speed; int dir; } ;
typedef int kobj_t ;


 int VAR_0 ;

__attribute__((used)) static uint32_t
FUNC_0(kobj_t VAR_1, void *VAR_2, uint32_t VAR_3)
{
 struct a10codec_chinfo *VAR_4 = VAR_2;






 switch (VAR_3) {
 case 8000:
 case 12000:
 case 16000:
 case 24000:
 case 32000:
 case 48000:
  VAR_4->speed = VAR_3;
  break;
 case 96000:
 case 192000:

  if (VAR_4->dir == VAR_0) {
   VAR_4->speed = VAR_3;
  } else {
   VAR_4->speed = 48000;
  }
  break;
 case 44100:
  VAR_4->speed = 48000;
  break;
 case 22050:
  VAR_4->speed = 24000;
  break;
 case 11025:
  VAR_4->speed = 12000;
  break;
 default:
  VAR_4->speed = 48000;
  break;
 }

 return (VAR_4->speed);
}
