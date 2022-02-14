
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* depths; void* externals_new; void* externals_old; int * pool; } ;
typedef TYPE_1__ svn_wc_traversal_info_t ;
typedef int apr_pool_t ;


 void* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,int) ;

svn_wc_traversal_info_t *
FUNC_2(apr_pool_t *VAR_0)
{
  svn_wc_traversal_info_t *VAR_1 = FUNC_1(VAR_0, sizeof(*VAR_1));

  VAR_1->pool = VAR_0;
  VAR_1->externals_old = FUNC_0(VAR_0);
  VAR_1->externals_new = FUNC_0(VAR_0);
  VAR_1->depths = FUNC_0(VAR_0);

  return VAR_1;
}
