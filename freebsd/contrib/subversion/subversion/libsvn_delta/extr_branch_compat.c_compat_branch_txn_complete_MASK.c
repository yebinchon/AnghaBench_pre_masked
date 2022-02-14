
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_7__ {TYPE_3__* priv; } ;
typedef TYPE_2__ svn_branch__txn_t ;
struct TYPE_8__ {int txn; int dedit_baton; TYPE_1__* deditor; } ;
typedef TYPE_3__ svn_branch__txn_priv_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {int (* abort_edit ) (int ,int *) ;int (* close_edit ) (int ,int *) ;} ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_branch__txn_t *VAR_0,
                           apr_pool_t *VAR_1)
{
  svn_branch__txn_priv_t *VAR_2 = VAR_0->priv;
  svn_error_t *VAR_3;


  FUNC_0(FUNC_6(VAR_0->priv->txn, VAR_1));
  FUNC_0(FUNC_5(VAR_0->priv->txn, VAR_1));

  VAR_3 = FUNC_1(VAR_2, VAR_1);

  if (!VAR_3)
     {
       VAR_3 = FUNC_8(VAR_3, VAR_2->deditor->close_edit(
                                                            VAR_2->dedit_baton,
                                                            VAR_1));
     }

  if (VAR_3)
    FUNC_7(VAR_2->deditor->abort_edit(VAR_2->dedit_baton, VAR_1));

  FUNC_0(FUNC_4(VAR_0->priv->txn, VAR_1));

  return VAR_3;
}
