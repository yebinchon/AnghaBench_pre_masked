
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int atf_tc_t ;


 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,int *,int ,int *) ;
 int FUNC_9 (int ,int *) ;
 int VAR_1 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 () ;
 int FUNC_13 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_14(const atf_tc_t *VAR_5, const char *VAR_6)
{
 pthread_t VAR_7, VAR_8;

 if (FUNC_2(VAR_5))
  FUNC_7("directories not supported by file system");

 if (FUNC_1(VAR_5))
  FUNC_7("rename not supported by file system");


 if (FUNC_0(VAR_5))
  FUNC_6(-1, "PR kern/43626");

 FUNC_4(FUNC_10(VAR_0));
 FUNC_3(VAR_4 = FUNC_12());

 FUNC_3(FUNC_11(VAR_6));
 FUNC_8(&VAR_7, ((void*)0), VAR_2, ((void*)0));
 FUNC_8(&VAR_8, ((void*)0), VAR_3, ((void*)0));

 FUNC_13(5);
 VAR_1 = 1;

 FUNC_9(VAR_7, ((void*)0));
 FUNC_9(VAR_8, ((void*)0));
 FUNC_3(FUNC_11("/"));





 if (FUNC_0(VAR_5))
  FUNC_5();
}
