
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
struct TYPE_7__ {TYPE_1__* fs_path; int repos_url; } ;
typedef TYPE_3__ svn_ra_local__session_baton_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {scalar_t__ data; } ;


 int * VAR_0 ;
 char* FUNC_0 (int ,scalar_t__,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_ra_session_t *VAR_1,
                              const char **VAR_2,
                              apr_pool_t *VAR_3)
{
  svn_ra_local__session_baton_t *VAR_4 = VAR_1->priv;
  *VAR_2 = FUNC_0(VAR_4->repos_url,
                                     VAR_4->fs_path->data + 1,
                                     VAR_3);
  return VAR_0;
}
