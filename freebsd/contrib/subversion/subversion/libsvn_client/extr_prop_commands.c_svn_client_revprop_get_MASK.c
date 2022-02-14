
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int ,int *,int *,int const*,int *) ;
 int FUNC_2 (int **,char const*,int *,TYPE_1__*,int *,int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int ,char const*,int **,int *) ;

svn_error_t *
FUNC_7(const char *VAR_0,
                       svn_string_t **VAR_1,
                       const char *VAR_2,
                       const svn_opt_revision_t *VAR_3,
                       svn_revnum_t *VAR_4,
                       svn_client_ctx_t *VAR_5,
                       apr_pool_t *VAR_6)
{
  svn_ra_session_t *VAR_7;
  apr_pool_t *VAR_8 = FUNC_4(VAR_6);
  svn_error_t *VAR_9;



  FUNC_0(FUNC_2(&VAR_7, VAR_2, ((void*)0),
                                      VAR_5, VAR_8, VAR_8));



  FUNC_0(FUNC_1(VAR_4, ((void*)0), VAR_5->wc_ctx, ((void*)0),
                                          VAR_7, VAR_3, VAR_8));


  VAR_9 = FUNC_6(VAR_7, *VAR_4, VAR_0, VAR_1, VAR_6);


  FUNC_5(VAR_8);
  return FUNC_3(VAR_9);
}
