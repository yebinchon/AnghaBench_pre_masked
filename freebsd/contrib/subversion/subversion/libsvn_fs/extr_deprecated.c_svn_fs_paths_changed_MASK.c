
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_fs_root_t ;
struct TYPE_5__ {int prop_mod; int text_mod; int change_kind; int node_rev_id; } ;
typedef TYPE_1__ svn_fs_path_change_t ;
struct TYPE_6__ {int prop_mod; int text_mod; int change_kind; int node_rev_id; } ;
typedef TYPE_2__ svn_fs_path_change2_t ;
typedef int svn_error_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,void const*,int ,TYPE_1__*) ;
 int FUNC_5 (int *,void const**,int *,void**) ;
 TYPE_1__* FUNC_6 (int *,int) ;
 int FUNC_7 (int **,int *,int *) ;

svn_error_t *
FUNC_8(apr_hash_t **VAR_1, svn_fs_root_t *VAR_2,
                     apr_pool_t *VAR_3)
{
  apr_hash_t *VAR_4;
  apr_hash_index_t *VAR_5;

  FUNC_0(FUNC_7(&VAR_4, VAR_2, VAR_3));
  *VAR_1 = FUNC_2(VAR_3);
  for (VAR_5 = FUNC_1(VAR_3, VAR_4);
       VAR_5;
       VAR_5 = FUNC_3(VAR_5))
    {
      const void *VAR_6;
      apr_ssize_t VAR_7;
      void *VAR_8;
      svn_fs_path_change2_t *VAR_9;
      svn_fs_path_change_t *VAR_10;
      FUNC_5(VAR_5, &VAR_6, &VAR_7, &VAR_8);
      VAR_9 = VAR_8;
      VAR_10 = FUNC_6(VAR_3, sizeof(*VAR_10));
      VAR_10->node_rev_id = VAR_9->node_rev_id;
      VAR_10->change_kind = VAR_9->change_kind;
      VAR_10->text_mod = VAR_9->text_mod;
      VAR_10->prop_mod = VAR_9->prop_mod;
      FUNC_4(*VAR_1, VAR_6, VAR_7, VAR_10);
    }
  return VAR_0;
}
