
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ac97_info {int dummy; } ;


 int FUNC_0 (struct ac97_info*) ;
 int FUNC_1 (struct ac97_info*,int) ;
 int FUNC_2 (struct ac97_info*,int,int) ;

void FUNC_3(struct ac97_info* VAR_0)
{



 switch (FUNC_0(VAR_0)) {
 case 0x00611462:
 case 0x01311462:
 case 0x01611462:
 case 0x03511462:
  FUNC_2(VAR_0, 0x7a, FUNC_1(VAR_0, 0x7a) & 0xfffd);
  break;
 case 0x10ca1734:






  FUNC_2(VAR_0, 0x6a, FUNC_1(VAR_0, 0x6a) | 0x0001);
  break;
 default:
  break;
 }
}
