
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_operation_t ;
typedef int svn_wc_conflict_action_t ;
typedef int svn_node_kind_t ;


 char const* FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static const char *
FUNC_1(svn_node_kind_t VAR_3, svn_wc_conflict_action_t VAR_4,
                         svn_wc_operation_t VAR_5)
{
  switch (VAR_3)
    {
      case 135:
      case 133:
        if (VAR_5 == VAR_2)
          {
            switch (VAR_4)
              {
                case 129:
                  return FUNC_0("An update operation tried to edit a file.");
                case 131:
                  return FUNC_0("An update operation tried to add a file.");
                case 130:
                  return FUNC_0("An update operation tried to delete or move "
                           "a file.");
                case 128:
                  return FUNC_0("An update operation tried to replace a file.");
              }
          }
        else if (VAR_5 == VAR_1)
          {
            switch (VAR_4)
              {
                case 129:
                  return FUNC_0("A switch operation tried to edit a file.");
                case 131:
                  return FUNC_0("A switch operation tried to add a file.");
                case 130:
                  return FUNC_0("A switch operation tried to delete or move "
                           "a file.");
                case 128:
                  return FUNC_0("A switch operation tried to replace a file.");
              }
          }
        else if (VAR_5 == VAR_0)
          {
            switch (VAR_4)
              {
                case 129:
                  return FUNC_0("A merge operation tried to edit a file.");
                case 131:
                  return FUNC_0("A merge operation tried to add a file.");
                case 130:
                  return FUNC_0("A merge operation tried to delete or move "
                           "a file.");
                case 128:
                  return FUNC_0("A merge operation tried to replace a file.");
            }
          }
        break;
      case 136:
        if (VAR_5 == VAR_2)
          {
            switch (VAR_4)
              {
                case 129:
                  return FUNC_0("An update operation tried to change a directory.");
                case 131:
                  return FUNC_0("An update operation tried to add a directory.");
                case 130:
                  return FUNC_0("An update operation tried to delete or move "
                           "a directory.");
                case 128:
                  return FUNC_0("An update operation tried to replace a directory.");
              }
          }
        else if (VAR_5 == VAR_1)
          {
            switch (VAR_4)
              {
                case 129:
                  return FUNC_0("A switch operation tried to edit a directory.");
                case 131:
                  return FUNC_0("A switch operation tried to add a directory.");
                case 130:
                  return FUNC_0("A switch operation tried to delete or move "
                           "a directory.");
                case 128:
                  return FUNC_0("A switch operation tried to replace a directory.");
              }
          }
        else if (VAR_5 == VAR_0)
          {
            switch (VAR_4)
              {
                case 129:
                  return FUNC_0("A merge operation tried to edit a directory.");
                case 131:
                  return FUNC_0("A merge operation tried to add a directory.");
                case 130:
                  return FUNC_0("A merge operation tried to delete or move "
                           "a directory.");
                case 128:
                  return FUNC_0("A merge operation tried to replace a directory.");
            }
          }
        break;
      case 134:
      case 132:
        if (VAR_5 == VAR_2)
          {
            switch (VAR_4)
              {
                case 129:
                  return FUNC_0("An update operation tried to edit an item.");
                case 131:
                  return FUNC_0("An update operation tried to add an item.");
                case 130:
                  return FUNC_0("An update operation tried to delete or move "
                           "an item.");
                case 128:
                  return FUNC_0("An update operation tried to replace an item.");
              }
          }
        else if (VAR_5 == VAR_1)
          {
            switch (VAR_4)
              {
                case 129:
                  return FUNC_0("A switch operation tried to edit an item.");
                case 131:
                  return FUNC_0("A switch operation tried to add an item.");
                case 130:
                  return FUNC_0("A switch operation tried to delete or move "
                           "an item.");
                case 128:
                  return FUNC_0("A switch operation tried to replace an item.");
              }
          }
        else if (VAR_5 == VAR_0)
          {
            switch (VAR_4)
              {
                case 129:
                  return FUNC_0("A merge operation tried to edit an item.");
                case 131:
                  return FUNC_0("A merge operation tried to add an item.");
                case 130:
                  return FUNC_0("A merge operation tried to delete or move "
                           "an item.");
                case 128:
                  return FUNC_0("A merge operation tried to replace an item.");
              }
          }
        break;
    }

  return ((void*)0);
}
