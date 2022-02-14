
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_depth_t ;
const char *
FUNC_0(svn_depth_t VAR_0)
{
  switch (VAR_0)
    {
    case 132:
      return "exclude";
    case 128:
      return "unknown";
    case 133:
      return "empty";
    case 131:
      return "files";
    case 130:
      return "immediates";
    case 129:
      return "infinity";
    default:
      return "INVALID-DEPTH";
    }
}
