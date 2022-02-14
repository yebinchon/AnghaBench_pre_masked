
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3 (const char *VAR_0)
{




  while (*VAR_0 == '_')
    ++VAR_0;

  if (! FUNC_0 (VAR_0, "GLOBAL_"))
    return -1;

  VAR_0 += sizeof "GLOBAL_" - 1;

  if (VAR_0[0] != VAR_0[2])
    return -1;
  if (VAR_0[1] != 'I' && VAR_0[1] != 'D')
    return -1;
  if (! FUNC_1 (VAR_0[3]))
    return -1;

  return FUNC_2 (VAR_0 + 3);
}
