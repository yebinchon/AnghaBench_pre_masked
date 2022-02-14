
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;

int
FUNC_3(void)
{

 if (FUNC_0(VAR_2) != 0) {
  FUNC_2(VAR_0, "fclose() failed: %s", FUNC_1(VAR_1));
  return 1;
 }
 return 0;
}
