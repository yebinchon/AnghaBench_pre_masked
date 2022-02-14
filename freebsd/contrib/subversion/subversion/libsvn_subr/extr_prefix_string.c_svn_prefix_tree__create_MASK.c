
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* root; int * pool; } ;
typedef TYPE_3__ svn_prefix_tree__t ;
typedef int apr_pool_t ;
struct TYPE_5__ {float* data; } ;
struct TYPE_6__ {TYPE_1__ key; } ;


 void* FUNC_0 (int *,int) ;

svn_prefix_tree__t *
FUNC_1(apr_pool_t *VAR_0)
{
  svn_prefix_tree__t *VAR_1 = FUNC_0(VAR_0, sizeof(*VAR_1));
  VAR_1->pool = VAR_0;

  VAR_1->root = FUNC_0(VAR_0, sizeof(*VAR_1->root));
  VAR_1->root->key.data[7] = '\xff';

  return VAR_1;
}
