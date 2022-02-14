
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint64_t ;
typedef int dsl_pool_t ;
struct TYPE_13__ {int ds_is_snapshot; TYPE_1__* ds_dir; } ;
typedef TYPE_2__ dsl_dataset_t ;
typedef int dmu_replay_record_t ;
typedef int boolean_t ;
struct TYPE_14__ {int ds_uncompressed_bytes; int ds_compressed_bytes; } ;
struct TYPE_12__ {int * dd_pool; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int,int,int ,int*) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int ) ;
 TYPE_5__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,int*,int*,int*) ;
 int FUNC_6 (int *) ;

int
FUNC_7(dsl_dataset_t *VAR_2, dsl_dataset_t *VAR_3,
    boolean_t VAR_4, uint64_t *VAR_5)
{
 dsl_pool_t *VAR_6 = VAR_2->ds_dir->dd_pool;
 int VAR_7;
 uint64_t VAR_8, VAR_9;

 FUNC_0(FUNC_6(VAR_6));


 if (!VAR_2->ds_is_snapshot)
  return (FUNC_1(VAR_0));


 if (VAR_3 != ((void*)0) && !VAR_3->ds_is_snapshot)
  return (FUNC_1(VAR_0));





 if (VAR_3 != ((void*)0) && !FUNC_3(VAR_2, VAR_3, 0))
  return (FUNC_1(VAR_1));


 if (VAR_3 == ((void*)0)) {
  VAR_8 = FUNC_4(VAR_2)->ds_uncompressed_bytes;
  VAR_9 = FUNC_4(VAR_2)->ds_compressed_bytes;
 } else {
  uint64_t VAR_10;
  VAR_7 = FUNC_5(VAR_3, VAR_2,
      &VAR_10, &VAR_9, &VAR_8);
  if (VAR_7 != 0)
   return (VAR_7);
 }

 VAR_7 = FUNC_2(VAR_2, VAR_8, VAR_9,
     VAR_4, VAR_5);



 *VAR_5 += 2 * sizeof (dmu_replay_record_t);
 return (VAR_7);
}
