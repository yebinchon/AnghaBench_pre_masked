
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_opt_revision_t ;
struct TYPE_7__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_commit_info_t ;
typedef int svn_client_ctx_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int **,char const*,int const*,char const*,int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (char const*,int *) ;
 char const* FUNC_4 (char const*,char const*,int *) ;

svn_error_t *
FUNC_5(svn_commit_info_t **VAR_2,
                 const char *VAR_3,
                 const svn_opt_revision_t *VAR_4,
                 const char *VAR_5,
                 svn_client_ctx_t *VAR_6,
                 apr_pool_t *VAR_7)
{
  svn_error_t *VAR_8;

  VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4,
                         VAR_5, VAR_6, VAR_7);




  if (VAR_8 && (VAR_8->apr_err == VAR_0
              || VAR_8->apr_err == VAR_1))
    {
      const char *VAR_9 = FUNC_3(VAR_3, VAR_7);

      FUNC_1(VAR_8);

      return FUNC_0(VAR_2, VAR_3, VAR_4,
                              FUNC_4(VAR_5, VAR_9, VAR_7),
                              VAR_6, VAR_7);
    }

  return FUNC_2(VAR_8);
}
