
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ) ;

char *
FUNC_2(char *VAR_1)
{
 static char *VAR_2 = ((void*)0);

 if (VAR_2 == ((void*)0)) {
  VAR_2 = (char *)FUNC_1(VAR_0);
  if (VAR_2 == ((void*)0))
   return (((void*)0));
 }
 return (FUNC_0(VAR_1, VAR_2));
}
