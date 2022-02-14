
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* FUNC_0 (char*) ;

const char *
FUNC_1(int VAR_0)
{
  switch (VAR_0)
    {
      case 4: return "<=1.3";
      case 8: return "1.4";
      case 9: return "1.5";
      case 10: return "1.6";
      case 128: return "1.7";
    }
  return FUNC_0("(unreleased development version)");
}
