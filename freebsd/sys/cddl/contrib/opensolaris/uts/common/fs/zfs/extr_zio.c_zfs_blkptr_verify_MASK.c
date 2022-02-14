
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {size_t vdev_asize; int * vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_20__ {TYPE_1__* spa_root_vdev; int spa_trust_config; } ;
typedef TYPE_3__ spa_t ;
typedef int longlong_t ;
struct TYPE_21__ {int * blk_dva; } ;
typedef TYPE_4__ blkptr_t ;
struct TYPE_18__ {size_t vdev_children; TYPE_2__** vdev_child; } ;


 scalar_t__ FUNC_0 (TYPE_4__ const*) ;
 scalar_t__ FUNC_1 (TYPE_4__ const*) ;
 scalar_t__ FUNC_2 (TYPE_4__ const*) ;
 scalar_t__ FUNC_3 (TYPE_4__ const*) ;
 int FUNC_4 (TYPE_4__ const*) ;
 scalar_t__ FUNC_5 (TYPE_4__ const*) ;
 scalar_t__ FUNC_6 (TYPE_4__ const*) ;
 scalar_t__ FUNC_7 (TYPE_4__ const*) ;
 scalar_t__ FUNC_8 (TYPE_4__ const*) ;
 int FUNC_9 (scalar_t__) ;
 size_t FUNC_10 (int *) ;
 size_t FUNC_11 (int *) ;
 size_t FUNC_12 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t FUNC_13 (TYPE_2__*,int ) ;
 int FUNC_14 (char*,TYPE_4__ const*,int,...) ;

void
FUNC_15(spa_t *VAR_9, const blkptr_t *VAR_10)
{
 if (!FUNC_9(FUNC_6(VAR_10))) {
  FUNC_14("blkptr at %p has invalid TYPE %llu",
      VAR_10, (longlong_t)FUNC_6(VAR_10));
 }
 if (FUNC_1(VAR_10) >= VAR_3 ||
     FUNC_1(VAR_10) <= VAR_4) {
  FUNC_14("blkptr at %p has invalid CHECKSUM %llu",
      VAR_10, (longlong_t)FUNC_1(VAR_10));
 }
 if (FUNC_2(VAR_10) >= VAR_5 ||
     FUNC_2(VAR_10) <= VAR_6) {
  FUNC_14("blkptr at %p has invalid COMPRESS %llu",
      VAR_10, (longlong_t)FUNC_2(VAR_10));
 }
 if (FUNC_3(VAR_10) > VAR_2) {
  FUNC_14("blkptr at %p has invalid LSIZE %llu",
      VAR_10, (longlong_t)FUNC_3(VAR_10));
 }
 if (FUNC_5(VAR_10) > VAR_2) {
  FUNC_14("blkptr at %p has invalid PSIZE %llu",
      VAR_10, (longlong_t)FUNC_5(VAR_10));
 }

 if (FUNC_7(VAR_10)) {
  if (FUNC_0(VAR_10) > VAR_0) {
   FUNC_14("blkptr at %p has invalid ETYPE %llu",
       VAR_10, (longlong_t)FUNC_0(VAR_10));
  }
 }





 if (!VAR_9->spa_trust_config)
  return;
 for (int VAR_11 = 0; VAR_11 < FUNC_4(VAR_10); VAR_11++) {
  uint64_t VAR_12 = FUNC_12(&VAR_10->blk_dva[VAR_11]);
  if (VAR_12 >= VAR_9->spa_root_vdev->vdev_children) {
   FUNC_14("blkptr at %p DVA %u has invalid "
       "VDEV %llu",
       VAR_10, VAR_11, (longlong_t)VAR_12);
   continue;
  }
  vdev_t *VAR_13 = VAR_9->spa_root_vdev->vdev_child[VAR_12];
  if (VAR_13 == ((void*)0)) {
   FUNC_14("blkptr at %p DVA %u has invalid "
       "VDEV %llu",
       VAR_10, VAR_11, (longlong_t)VAR_12);
   continue;
  }
  if (VAR_13->vdev_ops == &VAR_7) {
   FUNC_14("blkptr at %p DVA %u has hole "
       "VDEV %llu",
       VAR_10, VAR_11, (longlong_t)VAR_12);
   continue;
  }
  if (VAR_13->vdev_ops == &VAR_8) {





   continue;
  }
  uint64_t VAR_14 = FUNC_11(&VAR_10->blk_dva[VAR_11]);
  uint64_t VAR_15 = FUNC_10(&VAR_10->blk_dva[VAR_11]);
  if (FUNC_8(VAR_10))
   VAR_15 = FUNC_13(VAR_13, VAR_1);
  if (VAR_14 + VAR_15 > VAR_13->vdev_asize) {
   FUNC_14("blkptr at %p DVA %u has invalid "
       "OFFSET %llu",
       VAR_10, VAR_11, (longlong_t)VAR_14);
  }
 }
}
