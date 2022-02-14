
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int clockid_t ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *,int *,int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(clockid_t VAR_2, const char *VAR_3) {
 pthread_t VAR_4;

 if (VAR_0)
  FUNC_1( "**** %s clock wait starting\n", VAR_3);
 FUNC_0(FUNC_2(&VAR_4, ((void*)0), VAR_1, &VAR_2), 0);
 FUNC_0(FUNC_3(VAR_4, ((void*)0)), 0);
 if (VAR_0)
  FUNC_1( "**** %s clock wait ended\n", VAR_3);
}
