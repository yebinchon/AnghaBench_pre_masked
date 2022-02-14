
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucontext_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ) ;

ucontext_t *
FUNC_4(void)
{
 char *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_3(FUNC_1());
 if (VAR_1 == ((void*)0))
  return (((void*)0));
 if (FUNC_0(VAR_1) == -1) {
  VAR_2 = VAR_0;
  FUNC_2(VAR_1);
  VAR_0 = VAR_2;
  return (((void*)0));
 }
 return ((ucontext_t *)VAR_1);
}
