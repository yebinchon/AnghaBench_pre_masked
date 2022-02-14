
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_0 (int ,TYPE_1__*,char const*) ;

svn_error_t *
FUNC_1(svn_error_t *VAR_1, const char *VAR_2)
{
  if (VAR_1 == VAR_0)
    return VAR_0;

  return FUNC_0(VAR_1->apr_err,
                          VAR_1,
                          VAR_2);
}
