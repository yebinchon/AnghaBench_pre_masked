
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_5__ {TYPE_1__* priv; } ;
typedef TYPE_2__ svn_branch__txn_t ;
typedef int svn_branch__eid_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {int first_eid; } ;


 int * VAR_0 ;

__attribute__((used)) static svn_error_t *
FUNC_0(svn_branch__txn_t *VAR_1,
                   svn_branch__eid_t *VAR_2,
                   apr_pool_t *VAR_3)
{
  int VAR_4 = (VAR_1->priv->first_eid < 0) ? VAR_1->priv->first_eid - 1 : -2;

  VAR_1->priv->first_eid = VAR_4;
  if (VAR_2)
    *VAR_2 = VAR_4;
  return VAR_0;
}
