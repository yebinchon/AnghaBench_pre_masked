
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_6__ {TYPE_3__* priv; } ;
typedef TYPE_2__ svn_branch__txn_t ;
struct TYPE_7__ {int txn; int dedit_baton; TYPE_1__* deditor; } ;
typedef TYPE_3__ svn_branch__txn_priv_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* abort_edit ) (int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_branch__txn_t *VAR_1,
                        apr_pool_t *VAR_2)
{
  svn_branch__txn_priv_t *VAR_3 = VAR_1->priv;

  FUNC_0(VAR_3->deditor->abort_edit(VAR_3->dedit_baton, VAR_2));

  FUNC_0(FUNC_2(VAR_1->priv->txn,
                                VAR_2));
  return VAR_0;
}
