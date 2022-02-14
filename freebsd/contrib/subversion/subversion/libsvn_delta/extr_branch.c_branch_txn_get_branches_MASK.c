
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv; } ;
typedef TYPE_2__ svn_branch__txn_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;
struct TYPE_4__ {int branches; } ;


 int * FUNC_0 (int *,int ) ;

__attribute__((used)) static apr_array_header_t *
FUNC_1(const svn_branch__txn_t *VAR_0,
                        apr_pool_t *VAR_1)
{
  return FUNC_0(VAR_1, VAR_0->priv->branches);
}
