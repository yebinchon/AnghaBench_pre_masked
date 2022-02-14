
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_9__ {TYPE_1__* priv; } ;
typedef TYPE_2__ svn_branch__txn_t ;
typedef int svn_branch__subtree_t ;
typedef int svn_branch__state_t ;
struct TYPE_10__ {int eid; } ;
typedef TYPE_3__ svn_branch__rev_bid_eid_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {int wrapped_txn; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,TYPE_3__*,int ,int *) ;
 int FUNC_2 (int *,int **,int ,int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int ,int **,char const*,int,TYPE_3__*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_branch__txn_t *VAR_1,
                              svn_branch__state_t **VAR_2,
                              const char *VAR_3,
                              int VAR_4,
                              svn_branch__rev_bid_eid_t *VAR_5,
                              apr_pool_t *VAR_6,
                              apr_pool_t *VAR_7)
{
  svn_branch__state_t *VAR_8;

  FUNC_0(FUNC_4(VAR_1->priv->wrapped_txn,
                                      &VAR_8,
                                      VAR_3, VAR_4, VAR_5,
                                      VAR_6,
                                      VAR_7));


  if (VAR_5)
    {
      svn_branch__state_t *VAR_9;
      svn_branch__subtree_t *VAR_10;



      FUNC_0(FUNC_1(&VAR_9, VAR_5,
                                   VAR_1->priv->wrapped_txn, VAR_7));
      FUNC_0(FUNC_2(VAR_9, &VAR_10,
                                      VAR_5->eid, VAR_7));
      FUNC_0(FUNC_3(VAR_8, *VAR_10,
                                                 VAR_7));
    }

  if (VAR_2)
    *VAR_2 = VAR_8;
  return VAR_0;
}
