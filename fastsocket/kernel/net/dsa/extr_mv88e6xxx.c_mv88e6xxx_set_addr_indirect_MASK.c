
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dsa_switch {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;

int FUNC_2(struct dsa_switch *VAR_2, u8 *VAR_3)
{
 int VAR_4;
 int VAR_5;

 for (VAR_4 = 0; VAR_4 < 6; VAR_4++) {
  int VAR_6;




  FUNC_1(VAR_1, 0x0d, 0x8000 | (VAR_4 << 8) | VAR_3[VAR_4]);




  for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
   VAR_5 = FUNC_0(VAR_1, 0x0d);
   if ((VAR_5 & 0x8000) == 0)
    break;
  }
  if (VAR_6 == 16)
   return -VAR_0;
 }

 return 0;
}
