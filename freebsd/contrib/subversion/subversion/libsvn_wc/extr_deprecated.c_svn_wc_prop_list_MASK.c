
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_wc_context_t ;
typedef int svn_wc_adm_access_t ;
struct TYPE_7__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (char const**,char const*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int ,int *) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int **,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_9(apr_hash_t **VAR_1,
                 const char *VAR_2,
                 svn_wc_adm_access_t *VAR_3,
                 apr_pool_t *VAR_4)
{
  svn_wc_context_t *VAR_5;
  const char *VAR_6;
  svn_error_t *VAR_7;

  FUNC_0(FUNC_2(&VAR_6, VAR_2, VAR_4));
  FUNC_0(FUNC_6(&VAR_5, ((void*)0) ,
                                         FUNC_5(VAR_3), VAR_4));

  VAR_7 = FUNC_8(VAR_1, VAR_5, VAR_6, VAR_4, VAR_4);
  if (VAR_7 && VAR_7->apr_err == VAR_0)
    {
      *VAR_1 = FUNC_1(VAR_4);
      FUNC_3(VAR_7);
      VAR_7 = ((void*)0);
    }

  return FUNC_4(VAR_7, FUNC_7(VAR_5));
}
