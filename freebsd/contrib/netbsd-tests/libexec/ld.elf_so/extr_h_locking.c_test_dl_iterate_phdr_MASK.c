
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int VAR_1 ;
 void* FUNC_2 (char*,int ) ;
 int * FUNC_3 (void*,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int *,int ,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static void
FUNC_6(void)
{
 pthread_t VAR_7;
 void *VAR_8;
 VAR_3 = 0;
 VAR_2 = 0;
 if ((VAR_8 = FUNC_2("libh_helper_dso2.so", VAR_0)) == ((void*)0)) {
  FUNC_4(VAR_4, "opening helper failed\n");
  FUNC_0(1);
 }
 VAR_6 = FUNC_3(VAR_8, "tls_callback");
 if (VAR_6 == ((void*)0)) {
  FUNC_4(VAR_4, "bad helper\n");
  FUNC_0(1);
 }
 FUNC_5(&VAR_7, ((void*)0), VAR_5, ((void*)0));
 if (FUNC_1(VAR_1, ((void*)0)))
  FUNC_0(1);
 FUNC_0(0);
}
