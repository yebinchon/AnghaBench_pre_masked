
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static int
FUNC_1 (const char *VAR_0)
{
  return (((VAR_0)[0] == '_'
    && (((VAR_0)[1] == 'V' && (VAR_0)[2] == 'T')
        || ((VAR_0)[1] == 'v' && (VAR_0)[2] == 't'))
    && FUNC_0 ((VAR_0)[3])) ||
   ((VAR_0)[0] == '_' && (VAR_0)[1] == '_'
    && (VAR_0)[2] == 'v' && (VAR_0)[3] == 't' && (VAR_0)[4] == '_'));
}
