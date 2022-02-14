
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int atf_tc_t ;


 scalar_t__ FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int *,int ,int*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9(const atf_tc_t *VAR_3, const char *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 pthread_t VAR_8, VAR_9;

 if (FUNC_0(VAR_3))
  FUNC_2("directories not supported by file system");

 VAR_6 = FUNC_7(".", VAR_0, 0666);
 if (VAR_6 == -1)
  FUNC_1("open failed");
 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5 == -1)
  FUNC_1("chdir failed");

 VAR_7 = 0;

 VAR_5 = FUNC_3(&VAR_8, ((void*)0), VAR_1, &VAR_7);
 if (VAR_5 != 0)
  FUNC_1("pthread_create1 failed");
 VAR_5 = FUNC_3(&VAR_9, ((void*)0), VAR_2, &VAR_7);
 if (VAR_5 != 0)
  FUNC_1("pthread_create2 failed");

 FUNC_8(10);

 VAR_7 = 1;

 VAR_5 = FUNC_4(VAR_9, ((void*)0));
 if (VAR_5 != 0)
  FUNC_1("pthread_join2 failed");
 VAR_5 = FUNC_4(VAR_8, ((void*)0));
 if (VAR_5 != 0)
  FUNC_1("pthread_join1 failed");

 VAR_5 = FUNC_6(VAR_6);
 if (VAR_5 == -1)
  FUNC_1("fchdir failed");
}
