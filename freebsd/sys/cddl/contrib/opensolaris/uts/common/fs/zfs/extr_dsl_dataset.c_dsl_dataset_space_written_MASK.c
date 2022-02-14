
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int dsl_pool_t ;
struct TYPE_10__ {scalar_t__ ds_object; int ds_deadlist; TYPE_1__* ds_dir; } ;
typedef TYPE_2__ dsl_dataset_t ;
struct TYPE_11__ {scalar_t__ ds_referenced_bytes; scalar_t__ ds_compressed_bytes; scalar_t__ ds_uncompressed_bytes; scalar_t__ ds_prev_snap_txg; scalar_t__ ds_creation_txg; scalar_t__ ds_prev_snap_obj; } ;
struct TYPE_9__ {int * dd_pool; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__,int ,TYPE_2__**) ;
 TYPE_6__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (int *,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (int *,int ,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_7 (int *) ;

int
FUNC_8(dsl_dataset_t *VAR_2, dsl_dataset_t *VAR_3,
    uint64_t *VAR_4, uint64_t *VAR_5, uint64_t *VAR_6)
{
 int VAR_7 = 0;
 uint64_t VAR_8;
 dsl_pool_t *VAR_9 = VAR_3->ds_dir->dd_pool;

 FUNC_0(FUNC_7(VAR_9));

 *VAR_4 = 0;
 *VAR_4 += FUNC_3(VAR_3)->ds_referenced_bytes;
 *VAR_4 -= FUNC_3(VAR_2)->ds_referenced_bytes;

 *VAR_5 = 0;
 *VAR_5 += FUNC_3(VAR_3)->ds_compressed_bytes;
 *VAR_5 -= FUNC_3(VAR_2)->ds_compressed_bytes;

 *VAR_6 = 0;
 *VAR_6 += FUNC_3(VAR_3)->ds_uncompressed_bytes;
 *VAR_6 -= FUNC_3(VAR_2)->ds_uncompressed_bytes;

 VAR_8 = VAR_3->ds_object;
 while (VAR_8 != VAR_2->ds_object) {
  dsl_dataset_t *VAR_10;
  uint64_t VAR_11, VAR_12, VAR_13;

  if (VAR_8 == VAR_3->ds_object) {
   VAR_10 = VAR_3;
  } else {
   VAR_7 = FUNC_2(VAR_9, VAR_8, VAR_1, &VAR_10);
   if (VAR_7 != 0)
    break;
  }

  if (FUNC_3(VAR_10)->ds_prev_snap_txg ==
      FUNC_3(VAR_2)->ds_creation_txg) {
   FUNC_5(&VAR_10->ds_deadlist,
       &VAR_11, &VAR_12, &VAR_13);
  } else {
   FUNC_6(&VAR_10->ds_deadlist,
       0, FUNC_3(VAR_2)->ds_creation_txg,
       &VAR_11, &VAR_12, &VAR_13);
  }
  *VAR_4 += VAR_11;
  *VAR_5 += VAR_12;
  *VAR_6 += VAR_13;






  VAR_8 = FUNC_3(VAR_10)->ds_prev_snap_obj;
  if (VAR_10 != VAR_3)
   FUNC_4(VAR_10, VAR_1);
  if (VAR_8 == 0) {
   VAR_7 = FUNC_1(VAR_0);
   break;
  }

 }
 return (VAR_7);
}
