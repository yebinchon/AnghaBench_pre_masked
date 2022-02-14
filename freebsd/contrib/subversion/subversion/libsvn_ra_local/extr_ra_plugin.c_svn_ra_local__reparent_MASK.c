
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* priv; } ;
typedef TYPE_1__ svn_ra_session_t ;
struct TYPE_5__ {int fs_path; int repos_url; } ;
typedef TYPE_2__ svn_ra_local__session_baton_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int *,int ,char const*,int ) ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (int ,int ) ;
 char* FUNC_4 (int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_ra_session_t *VAR_2,
                       const char *VAR_3,
                       apr_pool_t *VAR_4)
{
  svn_ra_local__session_baton_t *VAR_5 = VAR_2->priv;
  const char *VAR_6 = FUNC_4(VAR_5->repos_url, VAR_3, VAR_4);



  if (! VAR_6)
    return FUNC_1
      (VAR_0, ((void*)0),
       FUNC_0("URL '%s' is not a child of the session's repository root "
         "URL '%s'"), VAR_3, VAR_5->repos_url);



  FUNC_3(VAR_5->fs_path,
                    FUNC_2(VAR_6, VAR_4));

  return VAR_1;
}
