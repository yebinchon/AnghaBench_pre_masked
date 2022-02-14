
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* valid_options; } ;
typedef TYPE_1__ svn_opt_subcommand_desc2_t ;
typedef int svn_boolean_t ;
typedef size_t apr_size_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

svn_boolean_t
FUNC_0(const svn_opt_subcommand_desc2_t *VAR_3,
                                 int VAR_4,
                                 const int *VAR_5)
{
  apr_size_t VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
    if (VAR_3->valid_options[VAR_6] == VAR_4)
      return VAR_2;

  if (VAR_5)
    for (VAR_6 = 0; VAR_5[VAR_6]; VAR_6++)
      if (VAR_5[VAR_6] == VAR_4)
        return VAR_2;

  return VAR_0;
}
