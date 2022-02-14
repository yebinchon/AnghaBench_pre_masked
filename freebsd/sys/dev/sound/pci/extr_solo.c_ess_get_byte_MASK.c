
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ess_info {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ess_info*,int) ;

__attribute__((used)) static int
FUNC_2(struct ess_info *VAR_1)
{
     int VAR_2;

     for (VAR_2 = 1000; VAR_2 > 0; VAR_2--) {
  if (FUNC_1(VAR_1, 0xc) & 0x40)
   return FUNC_1(VAR_1, VAR_0);
  else
   FUNC_0(20);
     }
     return -1;
}
