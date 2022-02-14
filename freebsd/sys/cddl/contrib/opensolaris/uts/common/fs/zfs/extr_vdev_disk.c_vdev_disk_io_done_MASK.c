
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ io_error; int io_spa; TYPE_2__* io_vd; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_7__ {void* vdev_delayed_close; void* vdev_remove_wanted; TYPE_3__* vdev_tsd; } ;
typedef TYPE_2__ vdev_t ;
struct TYPE_8__ {int vd_lh; } ;
typedef TYPE_3__ vdev_disk_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ,intptr_t,int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(zio_t *VAR_8)
{
 vdev_t *VAR_9 = VAR_8->io_vd;







 if (VAR_8->io_error == VAR_4 && !VAR_9->vdev_remove_wanted) {
  vdev_disk_t *VAR_10 = VAR_9->vdev_tsd;
  int VAR_11 = VAR_3;

  if (FUNC_0(VAR_10->vd_lh, VAR_1, (intptr_t)&VAR_11,
      VAR_5, VAR_7, ((void*)0)) == 0 && VAR_11 != VAR_2) {






   FUNC_2(VAR_8->io_spa, VAR_9);
   VAR_9->vdev_remove_wanted = VAR_0;
   FUNC_1(VAR_8->io_spa, VAR_6);
  } else if (!VAR_9->vdev_delayed_close) {
   VAR_9->vdev_delayed_close = VAR_0;
  }
 }
}
