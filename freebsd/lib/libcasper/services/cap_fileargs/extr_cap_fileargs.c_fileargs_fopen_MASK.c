
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fileargs_t ;
typedef int FILE ;


 int * FUNC_0 (int,char const*) ;
 int FUNC_1 (int *,char const*) ;

FILE *
FUNC_2(fileargs_t *VAR_0, const char *VAR_1, const char *VAR_2)
{
 int VAR_3;

 if ((VAR_3 = FUNC_1(VAR_0, VAR_1)) < 0) {
  return (((void*)0));
 }

 return (FUNC_0(VAR_3, VAR_2));
}
