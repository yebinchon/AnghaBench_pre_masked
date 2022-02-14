
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_node_kind_t ;
const char *
FUNC_0(svn_node_kind_t VAR_0)
{
  switch (VAR_0)
    {
    case 130:
      return "none";
    case 131:
      return "file";
    case 132:
      return "dir";
    case 129:
      return "symlink";
    case 128:
    default:
      return "unknown";
    }
}
