
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vdev_delayed_close; int vdev_spa; scalar_t__ vdev_reopening; TYPE_2__* vdev_tsd; } ;
typedef TYPE_1__ vdev_t ;
struct TYPE_6__ {scalar_t__ vd_ldi_offline; int * vd_lh; int * vd_devid; int * vd_minor; } ;
typedef TYPE_2__ vdev_disk_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(vdev_t *VAR_2)
{
 vdev_disk_t *VAR_3 = VAR_2->vdev_tsd;

 if (VAR_2->vdev_reopening || VAR_3 == ((void*)0))
  return;

 if (VAR_3->vd_minor != ((void*)0)) {
  FUNC_1(VAR_3->vd_minor);
  VAR_3->vd_minor = ((void*)0);
 }

 if (VAR_3->vd_devid != ((void*)0)) {
  FUNC_0(VAR_3->vd_devid);
  VAR_3->vd_devid = ((void*)0);
 }

 if (VAR_3->vd_lh != ((void*)0)) {
  (void) FUNC_2(VAR_3->vd_lh, FUNC_3(VAR_2->vdev_spa), VAR_1);
  VAR_3->vd_lh = ((void*)0);
 }

 VAR_2->vdev_delayed_close = VAR_0;





 if (VAR_3->vd_ldi_offline)
  return;

 FUNC_4(VAR_2);
}
