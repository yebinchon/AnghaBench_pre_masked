
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;

CORE_ADDR
FUNC_1(u_int VAR_1, u_int VAR_2)
{
 static int VAR_3 = 0;

 if (VAR_0 == 0 && !VAR_3) {
  VAR_3 = 1;
  VAR_0 = FUNC_0("stoppcbs");
 }
 if (VAR_0 == 0)
  return 0;

 return (VAR_0 + VAR_2 * VAR_1);
}
