
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_0)
{

 if (FUNC_5(VAR_0, "help") == 0)
  return (1);
 else if (FUNC_5(VAR_0, "list") == 0)
  return (FUNC_1());
 else if (FUNC_5(VAR_0, "status") == 0)
  return (FUNC_3());
 else if (FUNC_5(VAR_0, "load") == 0)
  return (FUNC_2());
 else if (FUNC_5(VAR_0, "unload") == 0)
  return (FUNC_4());
 else
  FUNC_0(!"Unknown standard command.");
 return (0);
}
