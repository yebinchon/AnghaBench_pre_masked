
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static int
FUNC_1 (int VAR_8, const char *VAR_9)
{
  if (!VAR_9)
    {
      return VAR_8 == VAR_7 || VAR_8 == VAR_1
        || VAR_8 == VAR_2 || VAR_8 == VAR_4
 || VAR_8 == VAR_5 || VAR_8 == VAR_6
 || VAR_8 == VAR_3 || VAR_8 == VAR_0;
    }
  else
    {
      return ((VAR_8 == VAR_7 && FUNC_0 (VAR_9, "rr"))
              || (VAR_8 == VAR_1 && FUNC_0 (VAR_9, "dbr"))
              || (VAR_8 == VAR_2 && FUNC_0 (VAR_9, "ibr"))
              || (VAR_8 == VAR_4 && FUNC_0 (VAR_9, "pkr"))
              || (VAR_8 == VAR_5 && FUNC_0 (VAR_9, "pmc"))
              || (VAR_8 == VAR_6 && FUNC_0 (VAR_9, "pmd"))
              || (VAR_8 == VAR_3 && FUNC_0 (VAR_9, "msr"))
              || (VAR_8 == VAR_0 && FUNC_0 (VAR_9, "cpuid")));
    }
}
