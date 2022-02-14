
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int rev; int fs; scalar_t__ is_txn_root; } ;
typedef TYPE_1__ svn_fs_root_t ;
struct TYPE_9__ {int * vtable; TYPE_3__* fsap_data; } ;
typedef TYPE_2__ svn_fs_path_change_iterator_t ;
typedef int svn_error_t ;
struct TYPE_10__ {int context; int changes; void* scratch_pool; int hi; } ;
typedef TYPE_3__ fs_txn_changes_iterator_data_t ;
typedef TYPE_3__ fs_revision_changes_iterator_data_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *) ;
 void* FUNC_2 (int *,int) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ,int ,int *) ;
 int FUNC_5 (int *,int ,int *,int *) ;
 int FUNC_6 (int **,int ,int ,int *) ;
 void* FUNC_7 (int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_fs_path_change_iterator_t **VAR_3,
                  svn_fs_root_t *VAR_4,
                  apr_pool_t *VAR_5,
                  apr_pool_t *VAR_6)
{
  svn_fs_path_change_iterator_t *VAR_7 = FUNC_2(VAR_5,
                                                      sizeof(*VAR_7));
  if (VAR_4->is_txn_root)
    {
      fs_txn_changes_iterator_data_t *VAR_8 = FUNC_2(VAR_5,
                                                         sizeof(*VAR_8));
      apr_hash_t *VAR_9;
      FUNC_0(FUNC_6(&VAR_9, VAR_4->fs,
                                           FUNC_3(VAR_4), VAR_5));

      VAR_8->hi = FUNC_1(VAR_5, VAR_9);
      VAR_7->fsap_data = VAR_8;
      VAR_7->vtable = &VAR_2;
    }
  else
    {


      apr_pool_t *VAR_10 = FUNC_7(VAR_5);


      fs_revision_changes_iterator_data_t *VAR_11 = FUNC_2(VAR_5,
                                                              sizeof(*VAR_11));




      VAR_11->scratch_pool = FUNC_7(VAR_5);


      FUNC_0(FUNC_4(&VAR_11->context,
                                                VAR_4->fs, VAR_4->rev,
                                                VAR_5));
      FUNC_0(FUNC_5(&VAR_11->changes, VAR_11->context,
                                     VAR_10, VAR_6));


      VAR_7->fsap_data = VAR_11;
      VAR_7->vtable = &VAR_1;
    }

  *VAR_3 = VAR_7;

  return VAR_0;
}
