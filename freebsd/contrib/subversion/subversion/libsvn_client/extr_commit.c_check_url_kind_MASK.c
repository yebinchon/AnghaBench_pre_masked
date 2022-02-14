
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
struct check_url_kind_baton {int session; int pool; int repos_root_url; int ctx; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,int *,int ,int ,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int *,int *) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,char const*,int *) ;
 int FUNC_6 (int ,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_7(void *VAR_0,
               svn_node_kind_t *VAR_1,
               const char *VAR_2,
               svn_revnum_t VAR_3,
               apr_pool_t *VAR_4)
{
  struct check_url_kind_baton *VAR_5 = VAR_0;


  if (!VAR_5->session || !FUNC_6(VAR_5->repos_root_url, VAR_2))
    {
      FUNC_0(FUNC_1(&VAR_5->session, VAR_2, ((void*)0), VAR_5->ctx,
                                          VAR_5->pool, VAR_4));
      FUNC_0(FUNC_4(VAR_5->session, &VAR_5->repos_root_url,
                                     VAR_5->pool));
    }
  else
    FUNC_0(FUNC_5(VAR_5->session, VAR_2, VAR_4));

  return FUNC_2(
                FUNC_3(VAR_5->session, "", VAR_3,
                                  VAR_1, VAR_4));
}
