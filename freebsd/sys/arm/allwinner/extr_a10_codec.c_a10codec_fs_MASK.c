
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct a10codec_chinfo {int speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static unsigned
FUNC_0(struct a10codec_chinfo *VAR_8)
{
 switch (VAR_8->speed) {
 case 48000:
  return (VAR_5);
 case 24000:
  return (VAR_3);
 case 12000:
  return (VAR_0);
 case 192000:
  return (VAR_2);
 case 32000:
  return (VAR_4);
 case 16000:
  return (VAR_1);
 case 8000:
  return (VAR_6);
 case 96000:
  return (VAR_7);
 default:
  return (VAR_5);
 }
}
