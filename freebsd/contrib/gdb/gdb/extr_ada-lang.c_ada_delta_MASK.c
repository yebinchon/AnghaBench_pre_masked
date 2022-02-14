
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
typedef double DOUBLEST ;


 char* FUNC_0 (struct type*) ;
 int FUNC_1 (char const*,char*,long*,long*) ;

DOUBLEST
FUNC_2 (struct type *VAR_0)
{
  const char *VAR_1 = FUNC_0 (VAR_0);
  long VAR_2, VAR_3;

  if (FUNC_1 (VAR_1, "_%ld_%ld", &VAR_2, &VAR_3) < 2)
    return -1.0;
  else
    return (DOUBLEST) VAR_2 / (DOUBLEST) VAR_3;
}
