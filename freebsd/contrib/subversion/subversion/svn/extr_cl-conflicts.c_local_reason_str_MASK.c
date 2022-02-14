
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_operation_t ;
typedef int svn_wc_conflict_reason_t ;
typedef int svn_node_kind_t ;


 char const* FUNC_0 (char*) ;
 int VAR_0 ;

__attribute__((used)) static const char *
FUNC_1(svn_node_kind_t VAR_1, svn_wc_conflict_reason_t VAR_2,
                 svn_wc_operation_t VAR_3)
{
  switch (VAR_1)
    {
      case 140:
      case 138:
        switch (VAR_2)
          {
          case 134:
            return FUNC_0("local file edit");
          case 130:
            return FUNC_0("local file obstruction");
          case 135:
            return FUNC_0("local file delete");
          case 133:
            if (VAR_3 == VAR_0)
              return FUNC_0("local file missing or deleted or moved away");
            else
              return FUNC_0("local file missing");
          case 128:
            return FUNC_0("local file unversioned");
          case 136:
            return FUNC_0("local file add");
          case 129:
            return FUNC_0("local file replace");
          case 132:
            return FUNC_0("local file moved away");
          case 131:
            return FUNC_0("local file moved here");
          }
        break;
      case 141:
        switch (VAR_2)
          {
          case 134:
            return FUNC_0("local dir edit");
          case 130:
            return FUNC_0("local dir obstruction");
          case 135:
            return FUNC_0("local dir delete");
          case 133:
            if (VAR_3 == VAR_0)
              return FUNC_0("local dir missing or deleted or moved away");
            else
              return FUNC_0("local dir missing");
          case 128:
            return FUNC_0("local dir unversioned");
          case 136:
            return FUNC_0("local dir add");
          case 129:
            return FUNC_0("local dir replace");
          case 132:
            return FUNC_0("local dir moved away");
          case 131:
            return FUNC_0("local dir moved here");
          }
        break;
      case 139:
      case 137:
        switch (VAR_2)
          {
          case 134:
            return FUNC_0("local edit");
          case 130:
            return FUNC_0("local obstruction");
          case 135:
            return FUNC_0("local delete");
          case 133:
            if (VAR_3 == VAR_0)
              return FUNC_0("local missing or deleted or moved away");
            else
              return FUNC_0("local missing");
          case 128:
            return FUNC_0("local unversioned");
          case 136:
            return FUNC_0("local add");
          case 129:
            return FUNC_0("local replace");
          case 132:
            return FUNC_0("local moved away");
          case 131:
            return FUNC_0("local moved here");
          }
        break;
    }
  return ((void*)0);
}
