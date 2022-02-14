
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ v_state; int (* v_read ) (TYPE_1__*,int *,int ,int ,int ) ;int spa; int v_nparity; int v_nchildren; int v_ashift; struct TYPE_16__* v_top; } ;
typedef TYPE_1__ vdev_t ;
struct TYPE_17__ {int rm_cols; int rm_firstdatacol; scalar_t__ rm_missingdata; int rm_missingparity; TYPE_3__* rm_col; } ;
typedef TYPE_2__ raidz_map_t ;
struct TYPE_18__ {int rc_error; int rc_tried; int rc_skipped; int rc_size; int rc_offset; int rc_data; int rc_devidx; } ;
typedef TYPE_3__ raidz_col_t ;
typedef int off_t ;
typedef int blkptr_t ;
struct TYPE_19__ {int io_txg; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ,int const*,void*,size_t) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int *,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int ,int ,int ) ;
 TYPE_1__* FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,int ,int) ;
 int FUNC_7 (int ,TYPE_2__*,int const*,void*,int ,size_t,int,int) ;
 TYPE_2__* FUNC_8 (void*,int ,size_t,int ,int ,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int*,int) ;
 TYPE_4__* VAR_7 ;

__attribute__((used)) static int
FUNC_11(vdev_t *VAR_8, const blkptr_t *VAR_9, void *VAR_10,
    off_t VAR_11, size_t VAR_12)
{
 vdev_t *VAR_13 = VAR_8->v_top;
 vdev_t *VAR_14;
 raidz_map_t *VAR_15;
 raidz_col_t *VAR_16;
 int VAR_17, VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25[VAR_5];
 int VAR_26;

 VAR_16 = ((void*)0);
 VAR_18 = 0;

 VAR_15 = FUNC_8(VAR_10, VAR_11, VAR_12, VAR_13->v_ashift,
     VAR_8->v_nchildren, VAR_8->v_nparity);





 for (VAR_17 = VAR_15->rm_cols - 1; VAR_17 >= 0; VAR_17--) {
  VAR_16 = &VAR_15->rm_col[VAR_17];
  VAR_14 = FUNC_5(VAR_8, VAR_16->rc_devidx);
  if (VAR_14 == ((void*)0) || VAR_14->v_state != VAR_6) {
   if (VAR_17 >= VAR_15->rm_firstdatacol)
    VAR_15->rm_missingdata++;
   else
    VAR_15->rm_missingparity++;
   VAR_16->rc_error = VAR_3;
   VAR_16->rc_tried = 1;
   VAR_16->rc_skipped = 1;
   continue;
  }
  if (VAR_17 >= VAR_15->rm_firstdatacol || VAR_15->rm_missingdata > 0) {
   VAR_16->rc_error = VAR_14->v_read(VAR_14, ((void*)0), VAR_16->rc_data,
       VAR_16->rc_offset, VAR_16->rc_size);
   VAR_16->rc_tried = 1;
   VAR_16->rc_skipped = 0;
  }
 }

reconstruct:
 VAR_19 = 0;
 VAR_20 = 0;
 VAR_21 = 0;
 VAR_22 = 0;
 VAR_23 = 0;

 FUNC_0(VAR_15->rm_missingparity <= VAR_15->rm_firstdatacol);
 FUNC_0(VAR_15->rm_missingdata <= VAR_15->rm_cols - VAR_15->rm_firstdatacol);

 for (VAR_17 = 0; VAR_17 < VAR_15->rm_cols; VAR_17++) {
  VAR_16 = &VAR_15->rm_col[VAR_17];

  if (VAR_16->rc_error) {
   FUNC_0(VAR_16->rc_error != VAR_1);

   if (VAR_17 < VAR_15->rm_firstdatacol)
    VAR_20++;
   else
    VAR_22++;

   if (!VAR_16->rc_skipped)
    VAR_19++;

   VAR_23++;
  } else if (VAR_17 < VAR_15->rm_firstdatacol && !VAR_16->rc_tried) {
   VAR_21++;
  }
 }
 if (VAR_23 <= VAR_15->rm_firstdatacol - VAR_21) {
  if (VAR_22 == 0) {
   if (FUNC_1(VAR_8->spa, VAR_9, VAR_10, VAR_12) == 0) {
    if (VAR_20 + VAR_21 <
        VAR_15->rm_firstdatacol) {
     VAR_24 = FUNC_2(VAR_15);
     VAR_19 += VAR_24;
     FUNC_0(VAR_20 + VAR_24 <=
         VAR_15->rm_firstdatacol);
    }
    goto done;
   }
  } else {







   FUNC_0(VAR_21 == 0);
   FUNC_0(VAR_20 < VAR_15->rm_firstdatacol);




   VAR_24 = 0;
   for (VAR_17 = VAR_15->rm_firstdatacol; VAR_17 < VAR_15->rm_cols; VAR_17++) {
    VAR_16 = &VAR_15->rm_col[VAR_17];
    if (VAR_16->rc_error != 0) {
     FUNC_0(VAR_24 < VAR_5);
     VAR_25[VAR_24++] = VAR_17;
    }
   }

   FUNC_0(VAR_15->rm_firstdatacol >= VAR_24);

   VAR_26 = FUNC_10(VAR_15, VAR_25, VAR_24);

   if (FUNC_1(VAR_8->spa, VAR_9, VAR_10, VAR_12) == 0) {
    if (VAR_20 < VAR_15->rm_firstdatacol - VAR_24) {
     VAR_24 = FUNC_2(VAR_15);
     VAR_19 += VAR_24;
     FUNC_0(VAR_20 + VAR_24 <=
         VAR_15->rm_firstdatacol);
    }

    goto done;
   }
  }
 }
 VAR_19 = 1;
 VAR_15->rm_missingdata = 0;
 VAR_15->rm_missingparity = 0;

 VAR_24 = 0;
 for (VAR_17 = 0; VAR_17 < VAR_15->rm_cols; VAR_17++) {
  VAR_16 = &VAR_15->rm_col[VAR_17];

  if (VAR_16->rc_tried)
   continue;

  VAR_14 = FUNC_5(VAR_8, VAR_16->rc_devidx);
  FUNC_0(VAR_14 != ((void*)0));
  VAR_16->rc_error = VAR_14->v_read(VAR_14, ((void*)0),
      VAR_16->rc_data, VAR_16->rc_offset, VAR_16->rc_size);
  if (VAR_16->rc_error == 0)
   VAR_24++;
  VAR_16->rc_tried = 1;
  VAR_16->rc_skipped = 0;
 }




 if (VAR_24 > 0)
  goto reconstruct;
 if (VAR_23 > VAR_15->rm_firstdatacol) {
  VAR_18 = VAR_2;
 } else if (VAR_23 < VAR_15->rm_firstdatacol &&
     (VAR_26 = FUNC_7(VAR_8->spa, VAR_15, VAR_9, VAR_10, VAR_11, VAR_12,
      VAR_23, VAR_22)) != 0) {





  if (VAR_26 != (1 << VAR_15->rm_firstdatacol) - 1)
   (void) FUNC_2(VAR_15);
 } else {
  VAR_18 = VAR_1;
 }

done:
 FUNC_9(VAR_15);

 return (VAR_18);
}
