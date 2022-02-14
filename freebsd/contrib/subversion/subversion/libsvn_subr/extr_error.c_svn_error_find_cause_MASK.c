
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ apr_err; struct TYPE_5__* child; } ;
typedef TYPE_1__ svn_error_t ;
typedef scalar_t__ apr_status_t ;


 TYPE_1__* VAR_0 ;

svn_error_t *
FUNC_0(svn_error_t *VAR_1, apr_status_t VAR_2)
{
  svn_error_t *VAR_3;

  for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->child)
    if (VAR_3->apr_err == VAR_2)
      return VAR_3;

  return VAR_0;
}
