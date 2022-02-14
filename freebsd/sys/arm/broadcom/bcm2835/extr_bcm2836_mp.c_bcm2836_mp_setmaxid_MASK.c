
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int platform_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_1(platform_t VAR_2)
{

 FUNC_0("platform_mp_setmaxid\n");
 if (VAR_1 != 0)
  return;

 VAR_1 = 4;
 VAR_0 = VAR_1 - 1;
 FUNC_0("mp_maxid=%d\n", VAR_0);
}
