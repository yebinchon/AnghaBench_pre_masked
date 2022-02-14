
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pool; int repository_capabilities; int * hooks_env_path; void* lock_path; void* hook_path; void* conf_path; void* db_path; int path; } ;
typedef TYPE_1__ svn_repos_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char const*) ;
 void* FUNC_3 (char const*,int ,int *) ;

__attribute__((used)) static svn_repos_t *
FUNC_4(const char *VAR_4, apr_pool_t *VAR_5)
{
  svn_repos_t *VAR_6 = FUNC_1(VAR_5, sizeof(*VAR_6));

  VAR_6->path = FUNC_2(VAR_5, VAR_4);
  VAR_6->db_path = FUNC_3(VAR_4, VAR_1, VAR_5);
  VAR_6->conf_path = FUNC_3(VAR_4, VAR_0, VAR_5);
  VAR_6->hook_path = FUNC_3(VAR_4, VAR_2, VAR_5);
  VAR_6->lock_path = FUNC_3(VAR_4, VAR_3, VAR_5);
  VAR_6->hooks_env_path = ((void*)0);
  VAR_6->repository_capabilities = FUNC_0(VAR_5);
  VAR_6->pool = VAR_5;

  return VAR_6;
}
