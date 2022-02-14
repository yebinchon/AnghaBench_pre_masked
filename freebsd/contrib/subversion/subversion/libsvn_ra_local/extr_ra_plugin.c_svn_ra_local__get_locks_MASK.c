
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
struct TYPE_7__ {int repos; TYPE_1__* fs_path; } ;
typedef TYPE_3__ svn_ra_local__session_baton_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_5__ {int data; } ;


 char* FUNC_0 (int ,char const*,int *) ;
 int * FUNC_1 (int **,int ,char const*,int ,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_ra_session_t *VAR_0,
                        apr_hash_t **VAR_1,
                        const char *VAR_2,
                        svn_depth_t VAR_3,
                        apr_pool_t *VAR_4)
{
  svn_ra_local__session_baton_t *VAR_5 = VAR_0->priv;
  const char *VAR_6 = FUNC_0(VAR_5->fs_path->data, VAR_2, VAR_4);



  return FUNC_1(VAR_1, VAR_5->repos, VAR_6, VAR_3,
                                 ((void*)0), ((void*)0), VAR_4);
}
