
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_getopt_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int **,int *,int const*,int *,int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int ,char*) ;

svn_error_t *
FUNC_4(apr_array_header_t **VAR_4,
                                            apr_getopt_t *VAR_5,
                                            const apr_array_header_t *VAR_6,
                                            svn_client_ctx_t *VAR_7,
                                            svn_boolean_t VAR_8,
                                            apr_pool_t *VAR_9)
{
  svn_error_t *VAR_10 = FUNC_0(VAR_4,
                                                      VAR_5,
                                                      VAR_6,
                                                      VAR_7,
                                                      VAR_8,
                                                      VAR_9);
  if (VAR_10)
    {
      if (VAR_10->apr_err == VAR_1)
        {
          FUNC_3(VAR_10, VAR_3, VAR_0, "svn: Skipping argument: ");
          FUNC_1(VAR_10);
        }
      else
        return FUNC_2(VAR_10);
    }
  return VAR_2;
}
