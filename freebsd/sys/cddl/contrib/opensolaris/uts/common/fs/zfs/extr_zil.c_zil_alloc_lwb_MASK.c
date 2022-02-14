
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zl_lock; int zl_lwb_list; } ;
typedef TYPE_1__ zilog_t ;
typedef int zil_chain_t ;
typedef int uint64_t ;
struct TYPE_8__ {int lwb_nused; int lwb_waiters; int lwb_vdev_tree; int lwb_vdev_lock; void* lwb_sz; scalar_t__ lwb_issued_timestamp; int * lwb_tx; int * lwb_root_zio; int * lwb_write_zio; int lwb_max_txg; int lwb_buf; int lwb_state; int lwb_slog; int lwb_blk; TYPE_1__* lwb_zilog; } ;
typedef TYPE_2__ lwb_t ;
typedef int boolean_t ;
typedef int blkptr_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_3 ;
 int FUNC_11 (void*) ;

__attribute__((used)) static lwb_t *
FUNC_12(zilog_t *VAR_4, blkptr_t *VAR_5, boolean_t VAR_6, uint64_t VAR_7)
{
 lwb_t *VAR_8;

 VAR_8 = FUNC_6(VAR_3, VAR_0);
 VAR_8->lwb_zilog = VAR_4;
 VAR_8->lwb_blk = *VAR_5;
 VAR_8->lwb_slog = VAR_6;
 VAR_8->lwb_state = VAR_1;
 VAR_8->lwb_buf = FUNC_11(FUNC_2(VAR_5));
 VAR_8->lwb_max_txg = VAR_7;
 VAR_8->lwb_write_zio = ((void*)0);
 VAR_8->lwb_root_zio = ((void*)0);
 VAR_8->lwb_tx = ((void*)0);
 VAR_8->lwb_issued_timestamp = 0;
 if (FUNC_1(VAR_5) == VAR_2) {
  VAR_8->lwb_nused = sizeof (zil_chain_t);
  VAR_8->lwb_sz = FUNC_2(VAR_5);
 } else {
  VAR_8->lwb_nused = 0;
  VAR_8->lwb_sz = FUNC_2(VAR_5) - sizeof (zil_chain_t);
 }

 FUNC_9(&VAR_4->zl_lock);
 FUNC_7(&VAR_4->zl_lwb_list, VAR_8);
 FUNC_10(&VAR_4->zl_lock);

 FUNC_0(!FUNC_3(&VAR_8->lwb_vdev_lock));
 FUNC_0(FUNC_5(&VAR_8->lwb_vdev_tree));
 FUNC_4(FUNC_8(&VAR_8->lwb_waiters));

 return (VAR_8);
}
