
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_schedule_t ;







__attribute__((used)) static const char *
FUNC_0(svn_wc_schedule_t VAR_0)
{
  switch (VAR_0)
    {
    case 129:
      return "normal";
    case 131:
      return "add";
    case 130:
      return "delete";
    case 128:
      return "replace";
    default:
      return "none";
    }
}
