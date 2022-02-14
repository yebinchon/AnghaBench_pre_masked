
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_mergeinfo_inheritance_t ;





const char *
FUNC_0(svn_mergeinfo_inheritance_t VAR_0)
{
  switch (VAR_0)
    {
    case 129:
      return "inherited";
    case 128:
      return "nearest-ancestor";
    default:
      return "explicit";
    }
}
