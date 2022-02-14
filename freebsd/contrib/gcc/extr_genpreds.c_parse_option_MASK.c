
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static bool
FUNC_1 (const char *VAR_2)
{
  if (!FUNC_0 (VAR_2, "-h"))
    {
      VAR_1 = 1;
      return 1;
    }
  else if (!FUNC_0 (VAR_2, "-c"))
    {
      VAR_0 = 1;
      return 1;
    }
  else
    return 0;
}
