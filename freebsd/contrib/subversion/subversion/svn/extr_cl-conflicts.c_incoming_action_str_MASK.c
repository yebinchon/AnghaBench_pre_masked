
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_conflict_action_t ;
typedef int svn_node_kind_t ;


 char const* FUNC_0 (char*) ;
__attribute__((used)) static const char *
FUNC_1(svn_node_kind_t VAR_0, svn_wc_conflict_action_t VAR_1)
{
  switch (VAR_0)
    {
      case 135:
      case 133:
        switch (VAR_1)
          {
            case 129:
              return FUNC_0("incoming file edit");
            case 131:
              return FUNC_0("incoming file add");
            case 130:
              return FUNC_0("incoming file delete or move");
            case 128:
              return FUNC_0("incoming replace with file");
          }
        break;
      case 136:
        switch (VAR_1)
          {
            case 129:
              return FUNC_0("incoming dir edit");
            case 131:
              return FUNC_0("incoming dir add");
            case 130:
              return FUNC_0("incoming dir delete or move");
            case 128:
              return FUNC_0("incoming replace with dir");
          }
        break;
      case 134:
      case 132:
        switch (VAR_1)
          {
            case 129:
              return FUNC_0("incoming edit");
            case 131:
              return FUNC_0("incoming add");
            case 130:
              return FUNC_0("incoming delete or move");
            case 128:
              return FUNC_0("incoming replace");
          }
        break;
    }
  return ((void*)0);
}
