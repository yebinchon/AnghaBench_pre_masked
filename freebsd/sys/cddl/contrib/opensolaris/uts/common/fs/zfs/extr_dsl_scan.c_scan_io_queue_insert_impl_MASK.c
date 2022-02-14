
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int sio_offset; int sio_asize; } ;
typedef TYPE_2__ scan_io_t ;
typedef int int64_t ;
struct TYPE_12__ {int scn_bytes_pending; } ;
typedef TYPE_3__ dsl_scan_t ;
struct TYPE_13__ {int q_exts_by_addr; int q_sios_by_addr; TYPE_1__* q_vd; TYPE_3__* q_scn; } ;
typedef TYPE_4__ dsl_scan_io_queue_t ;
typedef int avl_index_t ;
struct TYPE_10__ {int vdev_scan_io_queue_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,TYPE_2__*,int *) ;
 int FUNC_4 (int *,TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7(dsl_scan_io_queue_t *VAR_0, scan_io_t *VAR_1)
{
 avl_index_t VAR_2;
 int64_t VAR_3 = VAR_1->sio_asize;
 dsl_scan_t *VAR_4 = VAR_0->q_scn;

 FUNC_0(FUNC_1(&VAR_0->q_vd->vdev_scan_io_queue_lock));

 if (FUNC_3(&VAR_0->q_sios_by_addr, VAR_1, &VAR_2) != ((void*)0)) {

  FUNC_2(&VAR_4->scn_bytes_pending, -VAR_3);
  FUNC_5(VAR_1, sizeof (*VAR_1));
  return;
 }
 FUNC_4(&VAR_0->q_sios_by_addr, VAR_1, VAR_2);
 FUNC_6(VAR_0->q_exts_by_addr, VAR_1->sio_offset, VAR_3);
}
