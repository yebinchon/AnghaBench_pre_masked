
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int io_flags; scalar_t__ io_type; scalar_t__ io_priority; scalar_t__ io_done; int io_timestamp; TYPE_1__* io_vd; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_13__ {int vq_lock; } ;
typedef TYPE_3__ vdev_queue_t ;
struct TYPE_11__ {TYPE_3__ vdev_queue; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*) ;

zio_t *
FUNC_7(zio_t *VAR_14)
{
 vdev_queue_t *VAR_15 = &VAR_14->io_vd->vdev_queue;
 zio_t *VAR_16;

 if (VAR_14->io_flags & VAR_1)
  return (VAR_14);





 if (VAR_14->io_type == VAR_11) {
  if (VAR_14->io_priority != VAR_7 &&
      VAR_14->io_priority != VAR_2 &&
      VAR_14->io_priority != VAR_6 &&
      VAR_14->io_priority != VAR_5 &&
      VAR_14->io_priority != VAR_4)
   VAR_14->io_priority = VAR_2;
 } else if (VAR_14->io_type == VAR_12) {
  if (VAR_14->io_priority != VAR_8 &&
      VAR_14->io_priority != VAR_3 &&
      VAR_14->io_priority != VAR_5 &&
      VAR_14->io_priority != VAR_4)
   VAR_14->io_priority = VAR_3;
 } else {
  FUNC_0(VAR_14->io_type == VAR_10);
  VAR_14->io_priority = VAR_9;
 }

 VAR_14->io_flags |= VAR_0 | VAR_1;

 FUNC_2(&VAR_15->vq_lock);
 VAR_14->io_timestamp = FUNC_1();
 FUNC_4(VAR_15, VAR_14);
 VAR_16 = FUNC_5(VAR_15);
 FUNC_3(&VAR_15->vq_lock);

 if (VAR_16 == ((void*)0))
  return (((void*)0));

 if (VAR_16->io_done == VAR_13) {
  FUNC_6(VAR_16);
  return (((void*)0));
 }

 return (VAR_16);
}
