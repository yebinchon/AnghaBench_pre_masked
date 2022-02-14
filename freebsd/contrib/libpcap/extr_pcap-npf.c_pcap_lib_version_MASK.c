
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 () ;
 char* FUNC_1 (size_t) ;
 char const* VAR_0 ;
 int FUNC_2 (char*,size_t,int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;

const char *
FUNC_4(void)
{
 char *VAR_2;
 size_t VAR_3;
 char *VAR_4;

 if (VAR_0 == ((void*)0)) {







  VAR_2 = FUNC_0();
  VAR_3 =
      (sizeof VAR_1 - 2) +
      FUNC_3(VAR_2);
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4 == ((void*)0))
   return (((void*)0));
  FUNC_2(VAR_4,
      VAR_3,
      VAR_1,
      VAR_2);
  VAR_0 = VAR_4;
 }
 return (VAR_0);
}
