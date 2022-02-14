
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_ra_session_t ;
struct TYPE_8__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int apr_pool_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* FUNC_1 (int **,char const*,char const*,int *,int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_ra_session_t **VAR_2,
                      const char *VAR_3,
                      const char *VAR_4,
                      svn_client_ctx_t *VAR_5,
                      apr_pool_t *VAR_6)
{
  svn_error_t *VAR_7 = VAR_1;

  if (*VAR_2)
    {
      VAR_7 = FUNC_3(*VAR_2, VAR_3, VAR_6);
    }



  if (! *VAR_2 || (VAR_7 && VAR_7->apr_err == VAR_0))
    {
      FUNC_2(VAR_7);
      VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4,
                                        VAR_5, VAR_6, VAR_6);
    }
  FUNC_0(VAR_7);

  return VAR_1;
}
