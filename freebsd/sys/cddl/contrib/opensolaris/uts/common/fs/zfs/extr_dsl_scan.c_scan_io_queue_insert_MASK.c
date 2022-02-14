
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zbookmark_phys_t ;
struct TYPE_11__ {int sio_flags; int sio_asize; int sio_zb; } ;
typedef TYPE_2__ scan_io_t ;
struct TYPE_12__ {int scn_bytes_pending; } ;
typedef TYPE_3__ dsl_scan_t ;
struct TYPE_13__ {TYPE_1__* q_vd; TYPE_3__* q_scn; } ;
typedef TYPE_4__ dsl_scan_io_queue_t ;
typedef int blkptr_t ;
struct TYPE_10__ {int vdev_scan_io_queue_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int const*,TYPE_2__*,int) ;
 TYPE_2__* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_4__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_8(dsl_scan_io_queue_t *VAR_1, const blkptr_t *VAR_2, int VAR_3,
    int VAR_4, const zbookmark_phys_t *VAR_5)
{
 dsl_scan_t *VAR_6 = VAR_1->q_scn;
 scan_io_t *VAR_7 = FUNC_6(sizeof (*VAR_7), VAR_0);

 FUNC_1(FUNC_2(VAR_2));
 FUNC_0(FUNC_3(&VAR_1->q_vd->vdev_scan_io_queue_lock));

 FUNC_5(VAR_2, VAR_7, VAR_3);
 VAR_7->sio_flags = VAR_4;
 VAR_7->sio_zb = *VAR_5;






 FUNC_4(&VAR_6->scn_bytes_pending, VAR_7->sio_asize);

 FUNC_7(VAR_1, VAR_7);
}
