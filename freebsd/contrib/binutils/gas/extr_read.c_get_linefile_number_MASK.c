
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 char* VAR_0 ;

__attribute__((used)) static int
FUNC_2 (int *VAR_1)
{
  FUNC_0 ();

  if (*VAR_0 < '0' || *VAR_0 > '9')
    return 0;

  *VAR_1 = FUNC_1 ();

  return 1;
}
