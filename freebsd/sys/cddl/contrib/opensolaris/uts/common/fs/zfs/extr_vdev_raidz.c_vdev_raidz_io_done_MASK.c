
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ io_type; scalar_t__ io_error; int io_flags; int io_spa; int io_priority; int * io_bp; TYPE_4__* io_vsd; TYPE_3__* io_vd; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_22__ {int zbc_injected; scalar_t__ zbc_has_cksum; } ;
typedef TYPE_2__ zio_bad_cksum_t ;
struct TYPE_23__ {struct TYPE_23__** vdev_child; } ;
typedef TYPE_3__ vdev_t ;
struct TYPE_24__ {scalar_t__ rm_missingparity; scalar_t__ rm_firstdatacol; scalar_t__ rm_missingdata; scalar_t__ rm_cols; TYPE_5__* rm_col; int rm_ecksuminjected; } ;
typedef TYPE_4__ raidz_map_t ;
struct TYPE_25__ {scalar_t__ rc_error; size_t rc_devidx; int rc_size; int rc_abd; int rc_offset; scalar_t__ rc_tried; int rc_skipped; } ;
typedef TYPE_5__ raidz_col_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int * VAR_10 ;
 int FUNC_4 (TYPE_1__*,TYPE_4__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int * VAR_11 ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (TYPE_4__*,int*,int) ;
 void* FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int ,TYPE_3__*,TYPE_1__*,int ,int ,void*,TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__*,int *,TYPE_3__*,int ,int ,int ,scalar_t__,int ,int,int *,TYPE_5__*) ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_14(zio_t *VAR_12)
{
 vdev_t *VAR_13 = VAR_12->io_vd;
 vdev_t *VAR_14;
 raidz_map_t *VAR_15 = VAR_12->io_vsd;
 raidz_col_t *VAR_16;
 int VAR_17 = 0;
 int VAR_18 = 0;
 int VAR_19 = 0;
 int VAR_20 = 0;
 int VAR_21 = 0;
 int VAR_22, VAR_23;
 int VAR_24[VAR_1];
 int VAR_25;

 FUNC_0(VAR_12->io_bp != ((void*)0));

 FUNC_0(VAR_15->rm_missingparity <= VAR_15->rm_firstdatacol);
 FUNC_0(VAR_15->rm_missingdata <= VAR_15->rm_cols - VAR_15->rm_firstdatacol);

 for (VAR_23 = 0; VAR_23 < VAR_15->rm_cols; VAR_23++) {
  VAR_16 = &VAR_15->rm_col[VAR_23];

  if (VAR_16->rc_error) {
   FUNC_0(VAR_16->rc_error != VAR_0);

   if (VAR_23 < VAR_15->rm_firstdatacol)
    VAR_18++;
   else
    VAR_20++;

   if (!VAR_16->rc_skipped)
    VAR_17++;

   VAR_21++;
  } else if (VAR_23 < VAR_15->rm_firstdatacol && !VAR_16->rc_tried) {
   VAR_19++;
  }
 }

 if (VAR_12->io_type == VAR_9) {
  if (VAR_21 > VAR_15->rm_firstdatacol)
   VAR_12->io_error = FUNC_8(VAR_15);

  return;
 } else if (VAR_12->io_type == VAR_7) {
  return;
 }

 FUNC_0(VAR_12->io_type == VAR_8);
 if (VAR_21 <= VAR_15->rm_firstdatacol - VAR_19) {
  if (VAR_20 == 0) {
   if (FUNC_3(VAR_12) == 0) {
    if (VAR_18 + VAR_19 <
        VAR_15->rm_firstdatacol ||
        (VAR_12->io_flags & VAR_3)) {
     VAR_22 = FUNC_4(VAR_12, VAR_15);
     VAR_17 += VAR_22;
     FUNC_0(VAR_18 + VAR_22 <=
         VAR_15->rm_firstdatacol);
    }
    goto done;
   }
  } else {







   FUNC_0(VAR_19 == 0);
   FUNC_0(VAR_18 < VAR_15->rm_firstdatacol);




   VAR_22 = 0;
   for (VAR_23 = VAR_15->rm_firstdatacol; VAR_23 < VAR_15->rm_cols; VAR_23++) {
    VAR_16 = &VAR_15->rm_col[VAR_23];
    if (VAR_16->rc_error != 0) {
     FUNC_0(VAR_22 < VAR_1);
     VAR_24[VAR_22++] = VAR_23;
    }
   }

   FUNC_0(VAR_15->rm_firstdatacol >= VAR_22);

   VAR_25 = FUNC_7(VAR_15, VAR_24, VAR_22);

   if (FUNC_3(VAR_12) == 0) {
    FUNC_2(&VAR_10[VAR_25]);
    if (VAR_18 < VAR_15->rm_firstdatacol - VAR_22 ||
        (VAR_12->io_flags & VAR_3)) {
     VAR_22 = FUNC_4(VAR_12, VAR_15);
     VAR_17 += VAR_22;
     FUNC_0(VAR_18 + VAR_22 <=
         VAR_15->rm_firstdatacol);
    }

    goto done;
   }
  }
 }
 VAR_17 = 1;
 VAR_15->rm_missingdata = 0;
 VAR_15->rm_missingparity = 0;

 for (VAR_23 = 0; VAR_23 < VAR_15->rm_cols; VAR_23++) {
  if (VAR_15->rm_col[VAR_23].rc_tried)
   continue;

  FUNC_13(VAR_12);
  do {
   VAR_16 = &VAR_15->rm_col[VAR_23];
   if (VAR_16->rc_tried)
    continue;
   FUNC_11(FUNC_12(VAR_12, ((void*)0),
       VAR_13->vdev_child[VAR_16->rc_devidx],
       VAR_16->rc_offset, VAR_16->rc_abd, VAR_16->rc_size,
       VAR_12->io_type, VAR_12->io_priority, 0,
       VAR_11, VAR_16));
  } while (++VAR_23 < VAR_15->rm_cols);

  return;
 }
 if (VAR_21 > VAR_15->rm_firstdatacol) {
  VAR_12->io_error = FUNC_8(VAR_15);

 } else if (VAR_21 < VAR_15->rm_firstdatacol &&
     (VAR_25 = FUNC_6(VAR_12, VAR_21, VAR_20)) != 0) {





  if (VAR_25 != (1 << VAR_15->rm_firstdatacol) - 1)
   (void) FUNC_4(VAR_12, VAR_15);
 } else {
  VAR_12->io_error = FUNC_1(VAR_0);

  if (!(VAR_12->io_flags & VAR_5)) {
   for (VAR_23 = 0; VAR_23 < VAR_15->rm_cols; VAR_23++) {
    VAR_16 = &VAR_15->rm_col[VAR_23];
    if (VAR_16->rc_error == 0) {
     zio_bad_cksum_t VAR_26;
     VAR_26.zbc_has_cksum = 0;
     VAR_26.zbc_injected =
         VAR_15->rm_ecksuminjected;

     FUNC_9(
         VAR_12->io_spa,
         VAR_13->vdev_child[VAR_16->rc_devidx],
         VAR_12, VAR_16->rc_offset, VAR_16->rc_size,
         (void *)(uintptr_t)VAR_23, &VAR_26);
    }
   }
  }
 }

done:
 FUNC_10(VAR_12);

 if (VAR_12->io_error == 0 && FUNC_5(VAR_12->io_spa) &&
     (VAR_17 || (VAR_12->io_flags & VAR_3))) {



  for (VAR_23 = 0; VAR_23 < VAR_15->rm_cols; VAR_23++) {
   VAR_16 = &VAR_15->rm_col[VAR_23];
   VAR_14 = VAR_13->vdev_child[VAR_16->rc_devidx];

   if (VAR_16->rc_error == 0)
    continue;

   FUNC_11(FUNC_12(VAR_12, ((void*)0), VAR_14,
       VAR_16->rc_offset, VAR_16->rc_abd, VAR_16->rc_size,
       VAR_9, VAR_6,
       VAR_2 | (VAR_17 ?
       VAR_4 : 0), ((void*)0), ((void*)0)));
  }
 }
}
