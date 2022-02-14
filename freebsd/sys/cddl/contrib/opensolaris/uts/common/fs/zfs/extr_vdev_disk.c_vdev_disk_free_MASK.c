
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* vdev_tsd; } ;
typedef TYPE_1__ vdev_t ;
struct TYPE_9__ {int vd_ldi_cbs; int lcb_id; } ;
typedef TYPE_2__ vdev_disk_t ;
typedef TYPE_2__ vdev_disk_ldi_cb_t ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(vdev_t *VAR_0)
{
 vdev_disk_t *VAR_1 = VAR_0->vdev_tsd;
 vdev_disk_ldi_cb_t *VAR_2;

 if (VAR_1 == ((void*)0))
  return;





 while ((VAR_2 = FUNC_3(&VAR_1->vd_ldi_cbs)) != ((void*)0)) {
  FUNC_4(&VAR_1->vd_ldi_cbs, VAR_2);
  (void) FUNC_1(VAR_2->lcb_id);
  FUNC_0(VAR_2, sizeof (vdev_disk_ldi_cb_t));
 }
 FUNC_2(&VAR_1->vd_ldi_cbs);
 FUNC_0(VAR_1, sizeof (vdev_disk_t));
 VAR_0->vdev_tsd = ((void*)0);
}
