
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_9__ {TYPE_7__* tree; int subbranches; } ;
typedef TYPE_1__ svn_branch__subtree_t ;
struct TYPE_10__ {int txn; int bid; } ;
typedef TYPE_2__ svn_branch__state_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;
struct TYPE_11__ {int root_eid; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_2__*,TYPE_7__*,int *) ;
 char* FUNC_5 (int ,int,int *) ;
 int * FUNC_6 (int ,TYPE_2__**,char const*,int ,int *,int *,int *) ;
 int FUNC_7 (int *) ;

svn_error_t *
FUNC_8(svn_branch__state_t *VAR_1,
                                   svn_branch__subtree_t VAR_2,
                                   apr_pool_t *VAR_3)
{
  FUNC_0(FUNC_4(VAR_1, VAR_2.tree,
                                      VAR_3));


  {
    apr_hash_index_t *VAR_4;

    for (VAR_4 = FUNC_1(VAR_3, VAR_2.subbranches);
         VAR_4; VAR_4 = FUNC_2(VAR_4))
      {
        int VAR_5 = FUNC_7(VAR_4);
        svn_branch__subtree_t *VAR_6 = FUNC_3(VAR_4);
        const char *VAR_7;
        svn_branch__state_t *VAR_8;



        VAR_7 = FUNC_5(VAR_1->bid, VAR_5,
                                            VAR_3);
        FUNC_0(FUNC_6(VAR_1->txn, &VAR_8,
                                            VAR_7,
                                            VAR_6->tree->root_eid,
                                            ((void*)0) ,
                                            VAR_3, VAR_3));



        FUNC_0(FUNC_8(VAR_8, *VAR_6,
                                                   VAR_3));
      }
  }

  return VAR_0;
}
