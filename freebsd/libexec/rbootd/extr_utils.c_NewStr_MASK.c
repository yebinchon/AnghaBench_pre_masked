
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,char*) ;

char *
FUNC_4(char *VAR_1)
{
 char *VAR_2;

 if ((VAR_2 = (char *)FUNC_0((unsigned) (FUNC_2(VAR_1)+1))) == ((void*)0)) {
  FUNC_3(VAR_0, "NewStr: out of memory (%s)", VAR_1);
  return(((void*)0));
 }

 (void) FUNC_1(VAR_2, VAR_1);
 return(VAR_2);
}
