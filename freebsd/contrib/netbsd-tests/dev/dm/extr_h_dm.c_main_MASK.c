
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*) ;

int
FUNC_3(int VAR_0, char **VAR_1) {
 int VAR_2;

 VAR_2 = 0;

 VAR_2 = FUNC_1();
 if (VAR_2 != 0)
  FUNC_2(1, "dm_test_versions failed");

 VAR_2 = FUNC_0();
 if (VAR_2 != 0)
  FUNC_2(1, "dm_test_targets failed");

 return VAR_2;
}
