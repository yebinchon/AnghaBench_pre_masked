
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char**,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

int
FUNC_3(FILE *VAR_1)
{
 int VAR_2;
 char *VAR_3;

 VAR_2 = FUNC_0(&VAR_3, VAR_1);
 if (VAR_2 != VAR_0) {
  FUNC_1("semicolon expected.");
  FUNC_2(VAR_1);
  return (0);
 }
 return (1);
}
