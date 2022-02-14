
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_5__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_cache__t ;
struct TYPE_12__ {int second; int revision; } ;
typedef TYPE_3__ pair_cache_key_t ;
struct TYPE_13__ {TYPE_1__* data_rep; int id; } ;
typedef TYPE_4__ node_revision_t ;
struct TYPE_14__ {int * dir_cache; int * txn_dir_cache; } ;
typedef TYPE_5__ fs_fs_data_t ;
typedef int apr_pool_t ;
struct TYPE_15__ {void* data; } ;
struct TYPE_10__ {int item_index; int revision; int txn_id; } ;


 scalar_t__ FUNC_0 (int *) ;
 TYPE_6__* FUNC_1 (int ,int *) ;

__attribute__((used)) static svn_cache__t *
FUNC_2(svn_fs_t *VAR_0,
                 const void **VAR_1,
                 pair_cache_key_t *VAR_2,
                 node_revision_t *VAR_3,
                 apr_pool_t *VAR_4)
{
  fs_fs_data_t *VAR_5 = VAR_0->fsap_data;
  if (!VAR_3->data_rep)
    {


      *VAR_1 = ((void*)0);
      return VAR_5->dir_cache;
    }

  if (FUNC_0(&VAR_3->data_rep->txn_id))
    {

      *VAR_1 = FUNC_1(VAR_3->id, VAR_4)->data;

      return VAR_5->txn_dir_cache;
    }
  else
    {

      VAR_2->revision = VAR_3->data_rep->revision;
      VAR_2->second = VAR_3->data_rep->item_index;
      *VAR_1 = VAR_2;

      return VAR_5->dir_cache;
    }
}
