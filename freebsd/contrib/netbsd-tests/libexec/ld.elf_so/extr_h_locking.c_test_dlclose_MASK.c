
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,int *,int ,int ) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_5(void)
{
 pthread_t VAR_4, VAR_5;
 VAR_3 = 0;
 VAR_2 = 1;
 FUNC_2("%d\n", VAR_0);
 FUNC_3(&VAR_4, ((void*)0), VAR_1,
     FUNC_0("libh_helper_dso2.so"));
 FUNC_4(1);
 FUNC_2("%d\n", VAR_0);
 if (VAR_0 != 2)
  FUNC_1(1);
 FUNC_3(&VAR_5, ((void*)0), VAR_1,
     FUNC_0("libutil.so"));
 FUNC_4(1);
 FUNC_2("%d\n", VAR_0);
 if (VAR_0 != 2)
  FUNC_1(1);
 FUNC_1(0);
}
