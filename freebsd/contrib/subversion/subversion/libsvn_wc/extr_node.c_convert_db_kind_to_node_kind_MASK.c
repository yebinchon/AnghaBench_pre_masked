
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_status_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;


 int * VAR_0 ;
 int VAR_1 ;




__attribute__((used)) static svn_error_t *
FUNC_0(svn_node_kind_t *VAR_2,
                             svn_node_kind_t VAR_3,
                             svn_wc__db_status_t VAR_4,
                             svn_boolean_t VAR_5)
{
  *VAR_2 = VAR_3;


  if (! VAR_5)
    switch (VAR_4)
      {
        case 129:
        case 128:
        case 130:
          *VAR_2 = VAR_1;

        default:
          break;
      }

  return VAR_0;
}
