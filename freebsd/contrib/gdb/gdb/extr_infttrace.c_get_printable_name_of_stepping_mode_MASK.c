
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stepping_mode_t ;






__attribute__((used)) static char *
FUNC_0 (stepping_mode_t VAR_0)
{
  switch (VAR_0)
    {
    case 129:
      return "DO_DEFAULT";
    case 128:
      return "DO_STEP";
    case 130:
      return "DO_CONTINUE";
    default:
      return "?unknown mode?";
    }
}
