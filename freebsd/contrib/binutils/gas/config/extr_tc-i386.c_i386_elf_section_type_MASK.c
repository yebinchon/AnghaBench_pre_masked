
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char*,int) ;

int
FUNC_1 (const char *VAR_3, size_t VAR_4)
{
  if (VAR_2 == VAR_0
      && VAR_4 == sizeof ("unwind") - 1
      && FUNC_0 (VAR_3, "unwind", 6) == 0)
    return VAR_1;

  return -1;
}
