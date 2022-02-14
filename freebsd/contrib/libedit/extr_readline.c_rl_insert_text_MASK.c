
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*) ;
 int * VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char const*) ;

int
FUNC_3(const char *VAR_2)
{
 if (!VAR_2 || *VAR_2 == 0)
  return 0;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
  FUNC_1();

 if (FUNC_0(VAR_0, VAR_2) < 0)
  return 0;
 return (int)FUNC_2(VAR_2);
}
