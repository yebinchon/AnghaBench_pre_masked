
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*,size_t) ;

char *
FUNC_3(char *VAR_0, size_t VAR_1)
{
 char *VAR_2;

 if ((VAR_2 = FUNC_0(VAR_1 + 1)) == ((void*)0))
  FUNC_1();

 (void) FUNC_2(VAR_2, VAR_0, VAR_1);
 VAR_2[VAR_1] = '\0';

 return (VAR_2);
}
