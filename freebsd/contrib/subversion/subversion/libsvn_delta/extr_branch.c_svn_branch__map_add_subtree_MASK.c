
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_13__ {scalar_t__ root_eid; int e_map; } ;
typedef TYPE_1__ svn_element__tree_t ;
struct TYPE_14__ {scalar_t__ parent_eid; char* name; int payload; } ;
typedef TYPE_2__ svn_element__content_t ;
struct TYPE_15__ {int txn; } ;
typedef TYPE_3__ svn_branch__state_t ;
typedef int svn_branch__eid_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_3__*,int,TYPE_2__*,int *) ;
 int * FUNC_5 (int ,int*,int *) ;
 int FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (int,char const*,int ,int *) ;
 TYPE_1__* FUNC_8 (int ,int,int *) ;
 TYPE_2__* FUNC_9 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_branch__state_t *VAR_1,
                            int VAR_2,
                            svn_branch__eid_t VAR_3,
                            const char *VAR_4,
                            svn_element__tree_t *VAR_5,
                            apr_pool_t *VAR_6)
{
  apr_hash_index_t *VAR_7;
  svn_element__content_t *VAR_8;


  if (VAR_2 == -1)
    {
      FUNC_0(FUNC_5(VAR_1->txn, &VAR_2,
                                      VAR_6));
    }


  VAR_8 = FUNC_9(VAR_5, VAR_5->root_eid);
  VAR_8 = FUNC_7(VAR_3, VAR_4,
                                                 VAR_8->payload,
                                                 VAR_6);
  FUNC_0(FUNC_4(VAR_1, VAR_2, VAR_8,
                                   VAR_6));


  for (VAR_7 = FUNC_1(VAR_6, VAR_5->e_map);
       VAR_7; VAR_7 = FUNC_2(VAR_7))
    {
      int VAR_9 = FUNC_6(VAR_7);
      svn_element__content_t *VAR_10 = FUNC_3(VAR_7);

      if (VAR_10->parent_eid == VAR_5->root_eid)
        {
          svn_element__tree_t *VAR_11;



          VAR_11
            = FUNC_8(VAR_5->e_map, VAR_9,
                                       VAR_6);
          FUNC_0(FUNC_10(VAR_1, -1 ,
                                              VAR_2, VAR_10->name,
                                              VAR_11, VAR_6));
        }
    }

  return VAR_0;
}
