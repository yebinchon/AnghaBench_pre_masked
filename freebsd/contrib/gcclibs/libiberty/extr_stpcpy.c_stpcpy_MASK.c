
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char const*,size_t const) ;
 size_t FUNC_1 (char const*) ;

char *
FUNC_2 (char *VAR_0, const char *VAR_1)
{
  const size_t VAR_2 = FUNC_1 (VAR_1);
  return (char *) FUNC_0 (VAR_0, VAR_1, VAR_2 + 1) + VAR_2;
}
