
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_wc_adm_access_t ;
struct TYPE_6__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int **,int *,char const*,int ,int,int ,void*,int ) ;
 TYPE_1__* FUNC_3 (int **,int *,char const*,int *) ;

svn_error_t *
FUNC_4(svn_wc_adm_access_t **VAR_2,
                      svn_wc_adm_access_t *VAR_3,
                      const char *VAR_4,
                      svn_boolean_t VAR_5,
                      int VAR_6,
                      svn_cancel_func_t VAR_7,
                      void *VAR_8,
                      apr_pool_t *VAR_9)
{
  svn_error_t *VAR_10;

  VAR_10 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_9);




  if (VAR_10 && (VAR_10->apr_err == VAR_0))
    {
      FUNC_0(VAR_10);
      VAR_10 = FUNC_2(VAR_2, VAR_3,
                                   VAR_4, VAR_5, VAR_6,
                                   VAR_7, VAR_8,
                                   FUNC_1(VAR_3));







      if (VAR_10 && (VAR_10->apr_err == VAR_1))
        {
          FUNC_0(VAR_10);
          *VAR_2 = ((void*)0);
          VAR_10 = ((void*)0);
        }
    }

  return VAR_10;
}
