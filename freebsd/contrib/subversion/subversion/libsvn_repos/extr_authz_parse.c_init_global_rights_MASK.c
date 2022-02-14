
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* user; int per_repos_rights; int any_repos_rights; int all_repos_rights; } ;
typedef TYPE_1__ authz_global_rights_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(authz_global_rights_t *VAR_0, const char *VAR_1,
                   apr_pool_t *VAR_2)
{
  VAR_0->user = VAR_1;
  FUNC_1(&VAR_0->all_repos_rights);
  FUNC_1(&VAR_0->any_repos_rights);
  VAR_0->per_repos_rights = FUNC_0(VAR_2);
}
