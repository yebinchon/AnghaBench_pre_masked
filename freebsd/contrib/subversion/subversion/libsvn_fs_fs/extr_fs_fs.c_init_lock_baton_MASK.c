
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void* is_global_lock; int lock_pool; TYPE_4__* fs; int lock_path; int mutex; } ;
typedef TYPE_1__ with_lock_baton_t ;
typedef int lock_id_t ;
struct TYPE_9__ {int fs_pack_lock; int txn_current_lock; int fs_write_lock; } ;
typedef TYPE_2__ fs_fs_shared_data_t ;
struct TYPE_10__ {TYPE_2__* shared; } ;
typedef TYPE_3__ fs_fs_data_t ;
struct TYPE_11__ {TYPE_3__* fsap_data; } ;


 void* VAR_0 ;
 void* VAR_1 ;

 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;



__attribute__((used)) static void
FUNC_3(with_lock_baton_t *VAR_2,
                lock_id_t VAR_3)
{
  fs_fs_data_t *VAR_4 = VAR_2->fs->fsap_data;
  fs_fs_shared_data_t *VAR_5 = VAR_4->shared;

  switch (VAR_3)
    {
    case 128:
      VAR_2->mutex = VAR_5->fs_write_lock;
      VAR_2->lock_path = FUNC_0(VAR_2->fs, VAR_2->lock_pool);
      VAR_2->is_global_lock = VAR_1;
      break;

    case 129:
      VAR_2->mutex = VAR_5->txn_current_lock;
      VAR_2->lock_path = FUNC_2(VAR_2->fs,
                                                          VAR_2->lock_pool);
      VAR_2->is_global_lock = VAR_0;
      break;

    case 130:
      VAR_2->mutex = VAR_5->fs_pack_lock;
      VAR_2->lock_path = FUNC_1(VAR_2->fs,
                                                   VAR_2->lock_pool);
      VAR_2->is_global_lock = VAR_0;
      break;
    }
}
