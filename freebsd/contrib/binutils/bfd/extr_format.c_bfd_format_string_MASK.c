
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_format ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

const char *
FUNC_0 (bfd_format VAR_2)
{
  if (((int) VAR_2 < (int) VAR_1)
      || ((int) VAR_2 >= (int) VAR_0))
    return "invalid";

  switch (VAR_2)
    {
    case 128:
      return "object";
    case 130:
      return "archive";
    case 129:
      return "core";
    default:
      return "unknown";
    }
}
