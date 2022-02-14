
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;
typedef int apr_array_header_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int **,int *,int const*,int *) ;

svn_error_t *
FUNC_2(apr_array_header_t **VAR_2,
                              apr_getopt_t *VAR_3,
                              const apr_array_header_t *VAR_4,
                              apr_pool_t *VAR_5)
{
  svn_error_t *VAR_6 = FUNC_1(VAR_2, VAR_3,
                                                   VAR_4, VAR_5);

  if (VAR_6 && VAR_6->apr_err == VAR_0)
    {
      FUNC_0(VAR_6);
      return VAR_1;
    }

  return VAR_6;
}
