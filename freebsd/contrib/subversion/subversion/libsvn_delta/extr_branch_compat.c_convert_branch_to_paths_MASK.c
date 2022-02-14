
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_14__ {int e_map; } ;
typedef TYPE_3__ svn_element__tree_t ;
struct TYPE_15__ {TYPE_1__* payload; } ;
typedef TYPE_4__ svn_element__content_t ;
struct TYPE_16__ {TYPE_2__* txn; } ;
typedef TYPE_5__ svn_branch__state_t ;
typedef int svn_branch__el_rev_id_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
struct TYPE_13__ {int rev; } ;
struct TYPE_12__ {scalar_t__ is_subbranch_root; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *) ;
 TYPE_4__* FUNC_4 (int *) ;
 char* FUNC_5 (TYPE_5__*,int,int *) ;
 int * FUNC_6 (TYPE_5__*,int,int ,int *) ;
 int FUNC_7 (TYPE_5__*,TYPE_3__**,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char const*) ;
 int FUNC_10 (int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(apr_hash_t *VAR_1,
                        svn_branch__state_t *VAR_2,
                        apr_pool_t *VAR_3,
                        apr_pool_t *VAR_4)
{
  apr_hash_index_t *VAR_5;
  svn_element__tree_t *VAR_6;



  FUNC_0(FUNC_7(VAR_2, &VAR_6, VAR_4));
  for (VAR_5 = FUNC_2(VAR_4, VAR_6->e_map);
       VAR_5; VAR_5 = FUNC_3(VAR_5))
    {
      int VAR_7 = FUNC_8(VAR_5);
      svn_element__content_t *VAR_8 = FUNC_4(VAR_5);
      const char *VAR_9
        = FUNC_5(VAR_2, VAR_7, VAR_3);
      svn_branch__el_rev_id_t *VAR_10;



      if (VAR_8->payload->is_subbranch_root)
        continue;



      FUNC_1(! FUNC_9(VAR_1, VAR_9));


      VAR_10 = FUNC_6(VAR_2, VAR_7, VAR_2->txn->rev,
                                        VAR_3);
      FUNC_10(VAR_1, VAR_9, VAR_10);


    }
  return VAR_0;
}
