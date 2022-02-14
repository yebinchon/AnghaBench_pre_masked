
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int,char*,int) ;

char *
FUNC_7(int VAR_5)
{
 char *VAR_6;

 if (FUNC_3() != 0)
  VAR_6 = VAR_0;
 else {
  if (FUNC_4(&VAR_1, VAR_3) != 0 ||
      !VAR_4)
   return (((void*)0));
  if ((VAR_6 = FUNC_2(VAR_2)) == ((void*)0)) {
   if ((VAR_6 = FUNC_1(sizeof VAR_0)) == ((void*)0))
    return (((void*)0));
   if (FUNC_5(VAR_2, VAR_6) != 0) {
    FUNC_0(VAR_6);
    return (((void*)0));
   }
  }
 }

 if (FUNC_6(VAR_5, VAR_6, sizeof VAR_0) != 0)
  return (((void*)0));
 return (VAR_6);
}
