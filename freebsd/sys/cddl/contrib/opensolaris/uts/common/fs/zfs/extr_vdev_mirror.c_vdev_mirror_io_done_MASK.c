
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ io_type; int io_flags; int io_size; int io_abd; int io_bp; int io_txg; int io_spa; void* io_error; int io_priority; int * io_vd; TYPE_2__* io_vsd; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_13__ {int mm_children; TYPE_3__* mm_child; scalar_t__ mm_resilvering; } ;
typedef TYPE_2__ mirror_map_t ;
struct TYPE_14__ {scalar_t__ mc_error; int mc_offset; TYPE_6__* mc_vd; scalar_t__ mc_tried; int mc_skipped; } ;
typedef TYPE_3__ mirror_child_t ;
struct TYPE_15__ {int * vdev_ops; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_6__*,int ,int ,int) ;
 int VAR_10 ;
 int * VAR_11 ;
 int FUNC_4 (TYPE_1__*) ;
 void* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int ,TYPE_6__*,int ,int ,int ,scalar_t__,int ,int,int *,TYPE_3__*) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_9(zio_t *VAR_12)
{
 mirror_map_t *VAR_13 = VAR_12->io_vsd;
 mirror_child_t *VAR_14;
 int VAR_15;
 int VAR_16 = 0;
 int VAR_17 = 0;

 if (VAR_13 == ((void*)0))
  return;

 for (VAR_15 = 0; VAR_15 < VAR_13->mm_children; VAR_15++) {
  VAR_14 = &VAR_13->mm_child[VAR_15];

  if (VAR_14->mc_error) {
   if (!VAR_14->mc_skipped)
    VAR_17++;
  } else if (VAR_14->mc_tried) {
   VAR_16++;
  }
 }

 if (VAR_12->io_type == VAR_9) {
  if (VAR_16 != VAR_13->mm_children) {
   if (VAR_16 == 0 || VAR_12->io_vd == ((void*)0))
    VAR_12->io_error = FUNC_5(VAR_13);
  }
  return;
 } else if (VAR_12->io_type == VAR_7) {
  return;
 }

 FUNC_0(VAR_12->io_type == VAR_8);





 if (VAR_16 == 0 && (VAR_15 = FUNC_4(VAR_12)) != -1) {
  FUNC_0(VAR_15 >= 0 && VAR_15 < VAR_13->mm_children);
  VAR_14 = &VAR_13->mm_child[VAR_15];
  FUNC_8(VAR_12);
  FUNC_6(FUNC_7(VAR_12, VAR_12->io_bp,
      VAR_14->mc_vd, VAR_14->mc_offset, VAR_12->io_abd, VAR_12->io_size,
      VAR_8, VAR_12->io_priority, 0,
      VAR_11, VAR_14));
  return;
 }


 if (VAR_16 == 0) {
  VAR_12->io_error = FUNC_5(VAR_13);
  FUNC_0(VAR_12->io_error != 0);
 }

 if (VAR_16 && FUNC_2(VAR_12->io_spa) &&
     (VAR_17 ||
     (VAR_12->io_flags & VAR_3) ||
     ((VAR_12->io_flags & VAR_4) && VAR_13->mm_resilvering))) {



  for (VAR_15 = 0; VAR_15 < VAR_13->mm_children; VAR_15++) {







   VAR_14 = &VAR_13->mm_child[VAR_15];

   if (VAR_14->mc_error == 0) {
    if (VAR_14->mc_tried)
     continue;
    if (!(VAR_12->io_flags & VAR_4) &&
        VAR_14->mc_vd->vdev_ops != &VAR_10 &&
        !FUNC_3(VAR_14->mc_vd, VAR_0,
        VAR_12->io_txg, 1))
     continue;
    VAR_14->mc_error = FUNC_1(VAR_1);
   }

   FUNC_6(FUNC_7(VAR_12, VAR_12->io_bp,
       VAR_14->mc_vd, VAR_14->mc_offset,
       VAR_12->io_abd, VAR_12->io_size,
       VAR_9, VAR_6,
       VAR_2 | (VAR_17 ?
       VAR_5 : 0), ((void*)0), ((void*)0)));
  }
 }
}
