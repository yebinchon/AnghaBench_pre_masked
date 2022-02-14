
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_boolean ;


 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (const char *VAR_0, const char *VAR_1)
{
  while (*VAR_1 != 0 && FUNC_0 (*VAR_1) == FUNC_0 (*VAR_0))
    VAR_1++, VAR_0++;

  return ((*VAR_1 == 0 && *VAR_0 == 0)
   || (FUNC_2 (VAR_0, "000") == 0 && FUNC_1 (VAR_1, "k") == 0));
}
