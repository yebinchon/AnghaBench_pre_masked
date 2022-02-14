
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 char* FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (char const*) ;

char *
FUNC_3 (char *__restrict__ VAR_0, const char *__restrict__ VAR_1,
              size_t VAR_2)
{
  size_t VAR_3 = FUNC_2 (VAR_1);
  if (VAR_3 >= VAR_2)
    FUNC_0 ();
  return FUNC_1 (VAR_0, VAR_1, VAR_3 + 1) + VAR_3;
}
