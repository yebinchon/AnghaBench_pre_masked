
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_opt_revision_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

svn_error_t *
FUNC_0(svn_opt_revision_t *VAR_5,
                          svn_opt_revision_t *VAR_6,
                          svn_boolean_t VAR_7,
                          svn_boolean_t VAR_8,
                          apr_pool_t *VAR_9)
{
  if (VAR_5->kind == VAR_3)
    {
      if (VAR_7)
        {
          VAR_5->kind = VAR_2;
        }
      else
        {
          if (VAR_8)
            VAR_5->kind = VAR_4;
          else
            VAR_5->kind = VAR_1;
        }
    }

  if (VAR_6->kind == VAR_3)
    *VAR_6 = *VAR_5;

  return VAR_0;
}
