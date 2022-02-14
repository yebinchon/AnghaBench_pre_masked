
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int q_zio_cv; int q_sios_by_addr; int q_exts_by_addr; scalar_t__ sio_asize; int sio_offset; TYPE_1__* q_vd; TYPE_3__* q_scn; } ;
typedef TYPE_2__ scan_io_t ;
typedef int int64_t ;
struct TYPE_11__ {int scn_bytes_pending; } ;
typedef TYPE_3__ dsl_scan_t ;
typedef TYPE_2__ dsl_scan_io_queue_t ;
struct TYPE_9__ {int vdev_scan_io_queue_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int *,void**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *,TYPE_2__*) ;

void
FUNC_10(dsl_scan_io_queue_t *VAR_0)
{
 dsl_scan_t *VAR_1 = VAR_0->q_scn;
 scan_io_t *VAR_2;
 void *VAR_3 = ((void*)0);
 int64_t VAR_4 = 0;

 FUNC_0(FUNC_1(&VAR_0->q_vd->vdev_scan_io_queue_lock));

 while ((VAR_2 = FUNC_4(&VAR_0->q_sios_by_addr, &VAR_3)) !=
     ((void*)0)) {
  FUNC_0(FUNC_7(VAR_0->q_exts_by_addr,
      VAR_2->sio_offset, VAR_2->sio_asize));
  VAR_4 += VAR_2->sio_asize;
  FUNC_6(VAR_2, sizeof (*VAR_2));
 }

 FUNC_2(&VAR_1->scn_bytes_pending, -VAR_4);
 FUNC_9(VAR_0->q_exts_by_addr, ((void*)0), VAR_0);
 FUNC_8(VAR_0->q_exts_by_addr);
 FUNC_3(&VAR_0->q_sios_by_addr);
 FUNC_5(&VAR_0->q_zio_cv);

 FUNC_6(VAR_0, sizeof (*VAR_0));
}
