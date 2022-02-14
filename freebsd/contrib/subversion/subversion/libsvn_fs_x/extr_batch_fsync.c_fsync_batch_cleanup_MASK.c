
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pool; } ;
typedef TYPE_1__ to_sync_t ;
struct TYPE_5__ {int files; } ;
typedef TYPE_2__ svn_fs_x__batch_fsync_t ;
typedef int apr_status_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static apr_status_t
FUNC_5(void *VAR_1)
{
  svn_fs_x__batch_fsync_t *VAR_2 = VAR_1;
  apr_hash_index_t *VAR_3;


  for (VAR_3 = FUNC_0(FUNC_2(VAR_2->files), VAR_2->files);
       VAR_3;
       VAR_3 = FUNC_1(VAR_3))
    {
      to_sync_t *VAR_4 = FUNC_3(VAR_3);
      FUNC_4(VAR_4->pool);
    }

  return VAR_0;
}
