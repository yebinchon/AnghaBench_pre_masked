
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_wc_context_t ;
typedef int svn_wc_adm_access_t ;
struct TYPE_6__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (char const**,char const*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,int ,int *) ;
 TYPE_1__* FUNC_5 (int *,int *,int *,int *,char const*,int *) ;

svn_error_t *
FUNC_6(svn_boolean_t *VAR_3,
                     svn_boolean_t *VAR_4,
                     svn_boolean_t *VAR_5,
                     const char *VAR_6,
                     svn_wc_adm_access_t *VAR_7,
                     apr_pool_t *VAR_8)
{
  const char *VAR_9;
  svn_wc_context_t *VAR_10;
  svn_error_t *VAR_11;

  FUNC_0(FUNC_1(&VAR_9, VAR_6, VAR_8));
  FUNC_0(FUNC_4(&VAR_10, ((void*)0) ,
                                         FUNC_3(VAR_7),
                                         VAR_8));

  VAR_11 = FUNC_5(VAR_3, VAR_4,
                             VAR_5, VAR_10, VAR_9, VAR_8);

  if (VAR_11 && VAR_11->apr_err == VAR_1)
    {
      FUNC_2(VAR_11);

      if (VAR_3)
        *VAR_3 = VAR_0;
      if (VAR_4)
        *VAR_4 = VAR_0;
      if (VAR_5)
        *VAR_5 = VAR_0;
    }
  else if (VAR_11)
    return VAR_11;

  return VAR_2;
}
