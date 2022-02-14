
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int os_time_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (size_t,size_t) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int,int,int,int,int,int,int *) ;
 void* FUNC_4 (int *,size_t,size_t) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int,int) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,...) ;

__attribute__((used)) static int FUNC_9(void)
{
 int VAR_2 = 0;
 void *VAR_3;
 os_time_t VAR_4;

 FUNC_8(VAR_1, "os tests");

 VAR_3 = FUNC_0((size_t) -1, (size_t) -1);
 if (VAR_3) {
  VAR_2++;
  FUNC_2(VAR_3);
 }
 VAR_3 = FUNC_0((size_t) 2, (size_t) -1);
 if (VAR_3) {
  VAR_2++;
  FUNC_2(VAR_3);
 }
 VAR_3 = FUNC_0((size_t) -1, (size_t) 2);
 if (VAR_3) {
  VAR_2++;
  FUNC_2(VAR_3);
 }

 VAR_3 = FUNC_4(((void*)0), (size_t) -1, (size_t) -1);
 if (VAR_3) {
  VAR_2++;
  FUNC_2(VAR_3);
 }

 FUNC_6(1, 1);

 if (FUNC_3(1969, 1, 1, 1, 1, 1, &VAR_4) == 0 ||
     FUNC_3(1971, 0, 1, 1, 1, 1, &VAR_4) == 0 ||
     FUNC_3(1971, 13, 1, 1, 1, 1, &VAR_4) == 0 ||
     FUNC_3(1971, 1, 0, 1, 1, 1, &VAR_4) == 0 ||
     FUNC_3(1971, 1, 32, 1, 1, 1, &VAR_4) == 0 ||
     FUNC_3(1971, 1, 1, -1, 1, 1, &VAR_4) == 0 ||
     FUNC_3(1971, 1, 1, 24, 1, 1, &VAR_4) == 0 ||
     FUNC_3(1971, 1, 1, 1, -1, 1, &VAR_4) == 0 ||
     FUNC_3(1971, 1, 1, 1, 60, 1, &VAR_4) == 0 ||
     FUNC_3(1971, 1, 1, 1, 1, -1, &VAR_4) == 0 ||
     FUNC_3(1971, 1, 1, 1, 1, 61, &VAR_4) == 0 ||
     FUNC_3(1971, 1, 1, 1, 1, 1, &VAR_4) != 0 ||
     FUNC_3(2020, 1, 2, 3, 4, 5, &VAR_4) != 0 ||
     FUNC_3(2015, 12, 31, 23, 59, 59, &VAR_4) != 0)
  VAR_2++;

 if (FUNC_5("hwsim_test_env", "test value", 0) != 0 ||
     FUNC_5("hwsim_test_env", "test value 2", 1) != 0 ||
     FUNC_7("hwsim_test_env") != 0)
  VAR_2++;

 if (FUNC_1("/this-file-does-not-exists-hwsim") != 0)
  VAR_2++;

 if (VAR_2) {
  FUNC_8(VAR_0, "%d os test(s) failed", VAR_2);
  return -1;
 }

 return 0;
}
