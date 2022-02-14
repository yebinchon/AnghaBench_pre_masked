
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ io_type; scalar_t__ io_error; int io_abd; int io_size; int io_offset; TYPE_3__* io_private; TYPE_2__* io_vd; int * io_spa; } ;
typedef TYPE_1__ zio_t ;
typedef int zio_link_t ;
struct TYPE_19__ {int vdev_cant_read; int vdev_cant_write; int vdev_probe_lock; TYPE_1__* vdev_probe_zio; } ;
typedef TYPE_2__ vdev_t ;
struct TYPE_20__ {int vps_readable; int vps_writeable; int vps_flags; } ;
typedef TYPE_3__ vdev_probe_stats_t ;
typedef int spa_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int ,int *,TYPE_2__*,int *,int ,int ) ;
 int FUNC_12 (int ) ;
 TYPE_1__* FUNC_13 (TYPE_1__*,int **) ;
 int FUNC_14 (TYPE_1__*,TYPE_2__*,int ,int ,int ,int ,void (*) (TYPE_1__*),TYPE_3__*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_15(zio_t *VAR_8)
{
 spa_t *VAR_9 = VAR_8->io_spa;
 vdev_t *VAR_10 = VAR_8->io_vd;
 vdev_probe_stats_t *VAR_11 = VAR_8->io_private;

 FUNC_0(VAR_10->vdev_probe_zio != ((void*)0));

 if (VAR_8->io_type == VAR_6) {
  if (VAR_8->io_error == 0)
   VAR_11->vps_readable = 1;
  if (VAR_8->io_error == 0 && FUNC_6(VAR_9)) {
   FUNC_12(FUNC_14(VAR_10->vdev_probe_zio, VAR_10,
       VAR_8->io_offset, VAR_8->io_size, VAR_8->io_abd,
       VAR_3, FUNC_15, VAR_11,
       VAR_4, VAR_11->vps_flags, VAR_0));
  } else {
   FUNC_2(VAR_8->io_abd);
  }
 } else if (VAR_8->io_type == VAR_7) {
  if (VAR_8->io_error == 0)
   VAR_11->vps_writeable = 1;
  FUNC_2(VAR_8->io_abd);
 } else if (VAR_8->io_type == VAR_5) {
  zio_t *VAR_12;

  VAR_10->vdev_cant_read |= !VAR_11->vps_readable;
  VAR_10->vdev_cant_write |= !VAR_11->vps_writeable;

  if (FUNC_9(VAR_10) &&
      (FUNC_10(VAR_10) || !FUNC_6(VAR_9))) {
   VAR_8->io_error = 0;
  } else {
   FUNC_0(VAR_8->io_error != 0);
   FUNC_8(VAR_10, "failed probe");
   FUNC_11(VAR_2,
       VAR_9, VAR_10, ((void*)0), 0, 0);
   VAR_8->io_error = FUNC_1(VAR_1);
  }

  FUNC_4(&VAR_10->vdev_probe_lock);
  FUNC_0(VAR_10->vdev_probe_zio == VAR_8);
  VAR_10->vdev_probe_zio = ((void*)0);
  FUNC_5(&VAR_10->vdev_probe_lock);

  zio_link_t *VAR_13 = ((void*)0);
  while ((VAR_12 = FUNC_13(VAR_8, &VAR_13)) != ((void*)0))
   if (!FUNC_7(VAR_10, VAR_12))
    VAR_12->io_error = FUNC_1(VAR_1);

  FUNC_3(VAR_11, sizeof (*VAR_11));
 }
}
