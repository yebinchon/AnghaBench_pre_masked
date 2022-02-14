
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(char *VAR_2)
{
 char *VAR_3;
 int VAR_4 = 0;

 VAR_0;
 if (FUNC_0(VAR_2) < 0) {
  VAR_1;
  return (-1);
 }
 VAR_3 = FUNC_1(((void*)0));
 if (VAR_3 == ((void*)0)) {
  FUNC_3("warning: failed to get name of current directory");
  VAR_4 = 1;
 }
 FUNC_2(VAR_3);
 VAR_1;
 return (VAR_4);
}
