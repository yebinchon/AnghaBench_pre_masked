
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
struct check_url_kind_baton {int session; int should_reparent; int repos_root_url; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ,int *,int *) ;
 int FUNC_2 (int ,char const*,int *) ;
 int FUNC_3 (int ,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_3,
               svn_node_kind_t *VAR_4,
               const char *VAR_5,
               svn_revnum_t VAR_6,
               apr_pool_t *VAR_7)
{
  struct check_url_kind_baton *VAR_8 = VAR_3;


  if (!FUNC_3(VAR_8->repos_root_url, VAR_5))
    *VAR_4 = VAR_2;
  else
    {
      VAR_8->should_reparent = VAR_1;

      FUNC_0(FUNC_2(VAR_8->session, VAR_5, VAR_7));

      FUNC_0(FUNC_1(VAR_8->session, "", VAR_6,
                                VAR_4, VAR_7));
    }

  return VAR_0;
}
