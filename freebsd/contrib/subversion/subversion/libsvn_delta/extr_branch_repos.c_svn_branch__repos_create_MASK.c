
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pool; int rev_roots; } ;
typedef TYPE_1__ svn_branch__repos_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *,int ,int) ;
 TYPE_1__* FUNC_1 (int *,int) ;

svn_branch__repos_t *
FUNC_2(apr_pool_t *VAR_0)
{
  svn_branch__repos_t *VAR_1 = FUNC_1(VAR_0, sizeof(*VAR_1));

  VAR_1->rev_roots = FUNC_0(VAR_0, 0, sizeof(void *));
  VAR_1->pool = VAR_0;
  return VAR_1;
}
