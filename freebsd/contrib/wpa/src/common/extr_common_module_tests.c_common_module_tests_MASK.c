
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(void)
{
 int VAR_1 = 0;

 FUNC_4(VAR_0, "common module tests");

 if (FUNC_1() < 0 ||
     FUNC_0() < 0 ||
     FUNC_3() < 0 ||
     FUNC_2() < 0)
  VAR_1 = -1;

 return VAR_1;
}
