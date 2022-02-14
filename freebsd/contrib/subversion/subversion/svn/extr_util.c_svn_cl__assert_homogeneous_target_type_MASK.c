
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int const*) ;
 TYPE_1__* FUNC_1 (int ,TYPE_1__*,int *) ;

svn_error_t *
FUNC_2(const apr_array_header_t *VAR_2)
{
  svn_error_t *VAR_3;

  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3 && VAR_3->apr_err == VAR_1)
    return FUNC_1(VAR_0, VAR_3, ((void*)0));
  return VAR_3;
}
