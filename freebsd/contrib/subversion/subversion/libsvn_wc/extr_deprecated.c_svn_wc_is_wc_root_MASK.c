
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_wc_context_t ;
typedef int svn_wc_adm_access_t ;
struct TYPE_10__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char const*) ;
 TYPE_1__* FUNC_2 (char const**,char const*,int *) ;
 scalar_t__ FUNC_3 (char const*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int **,int *,int ,int *) ;
 int FUNC_9 (int *) ;
 TYPE_1__* FUNC_10 (int *,int *,char const*,int *) ;

svn_error_t *
FUNC_11(svn_boolean_t *VAR_4,
                  const char *VAR_5,
                  svn_wc_adm_access_t *VAR_6,
                  apr_pool_t *VAR_7)
{
  svn_wc_context_t *VAR_8;
  const char *VAR_9;
  svn_error_t *VAR_10;


  if (FUNC_6(VAR_5) || FUNC_3(VAR_5, FUNC_1(VAR_5)))
    {
      *VAR_4 = VAR_3;
      return VAR_2;
    }

  FUNC_0(FUNC_2(&VAR_9, VAR_5, VAR_7));
  FUNC_0(FUNC_8(&VAR_8, ((void*)0) ,
                                         FUNC_7(VAR_6),
                                         VAR_7));

  VAR_10 = FUNC_10(VAR_4, VAR_8, VAR_9, VAR_7);

  if (VAR_10
      && (VAR_10->apr_err == VAR_0
          || VAR_10->apr_err == VAR_1))
    {

      FUNC_4(VAR_10);
      *VAR_4 = VAR_3;
    }
  else
    FUNC_0(VAR_10);

  return FUNC_5(FUNC_9(VAR_8));
}
