
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int zio_t ;
struct TYPE_14__ {scalar_t__ vdev_isl2cache; TYPE_1__* vdev_ops; TYPE_4__* vdev_trimmap; } ;
typedef TYPE_2__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_15__ {scalar_t__ ts_end; scalar_t__ ts_start; } ;
typedef TYPE_3__ trim_seg_t ;
struct TYPE_16__ {int tm_pending; int tm_lock; int tm_inflight_frees; int tm_queued_frees; } ;
typedef TYPE_4__ trim_map_t ;
typedef int spa_t ;
typedef int int64_t ;
typedef int hrtime_t ;
struct TYPE_13__ {int vdev_op_leaf; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (int *,TYPE_3__*) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 TYPE_3__* FUNC_12 (TYPE_4__*,scalar_t__,scalar_t__,int,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *,int *,TYPE_2__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_15(spa_t *VAR_5, zio_t *VAR_6, vdev_t *VAR_7)
{
 trim_map_t *VAR_8 = VAR_7->vdev_trimmap;
 trim_seg_t *VAR_9;
 uint64_t VAR_10, VAR_11, VAR_12, VAR_13;
 int64_t VAR_14, VAR_15;
 hrtime_t VAR_16;

 FUNC_0(VAR_7->vdev_ops->vdev_op_leaf);

 if (VAR_8 == ((void*)0))
  return;

 VAR_16 = FUNC_7() - (hrtime_t)VAR_2 * VAR_0;
 if (VAR_7->vdev_isl2cache) {
  VAR_13 = VAR_1;
  VAR_12 = VAR_1;
 } else {
  VAR_13 = FUNC_1(FUNC_11(VAR_5), FUNC_10(VAR_5));
  if (VAR_13 > VAR_3)
   VAR_12 = VAR_13 - VAR_3;
  else
   VAR_12 = 0;
 }

 FUNC_8(&VAR_8->tm_lock);
 VAR_14 = 0;
 if (VAR_8->tm_pending > VAR_4)
  VAR_14 = (VAR_8->tm_pending - VAR_4) / 4;
 VAR_15 = FUNC_2(VAR_14 + VAR_8->tm_pending / VAR_2 + 1, 64);

 while (VAR_15 > 0 &&
     (VAR_9 = FUNC_12(VAR_8, VAR_12, VAR_13, VAR_16, VAR_14 > 0))
     != ((void*)0)) {
  FUNC_3(VAR_8, VAR_9);
  FUNC_6(&VAR_8->tm_queued_frees, VAR_9);
  FUNC_5(&VAR_8->tm_inflight_frees, VAR_9);
  VAR_10 = VAR_9->ts_end - VAR_9->ts_start;
  VAR_11 = VAR_9->ts_start;





  FUNC_9(&VAR_8->tm_lock);

  FUNC_13(FUNC_14(VAR_6, VAR_5, VAR_7, VAR_11, VAR_10));

  VAR_15 -= FUNC_4(VAR_10);
  VAR_14 -= FUNC_4(VAR_10);
  FUNC_8(&VAR_8->tm_lock);
 }
 FUNC_9(&VAR_8->tm_lock);
}
