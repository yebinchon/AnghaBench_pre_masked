
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ zs_guid; } ;
typedef TYPE_1__ ztest_shared_t ;
struct TYPE_17__ {scalar_t__ od_object; scalar_t__ od_blocksize; } ;
typedef TYPE_2__ ztest_od_t ;
struct TYPE_18__ {int zd_name; int * zd_os; } ;
typedef TYPE_3__ ztest_ds_t ;
typedef scalar_t__ uint64_t ;
typedef int spa_t ;
typedef int od ;
typedef int objset_t ;
typedef enum zio_checksum { ____Placeholder_zio_checksum } zio_checksum ;
typedef int dmu_tx_t ;
struct TYPE_19__ {scalar_t__ dds_guid; } ;
typedef TYPE_4__ dmu_objset_stats_t ;
struct TYPE_20__ {scalar_t__ db_offset; scalar_t__ db_size; int db_data; } ;
typedef TYPE_5__ dmu_buf_t ;
struct TYPE_21__ {int * db_blkptr; } ;
typedef TYPE_6__ dmu_buf_impl_t ;
typedef int blkptr_t ;
typedef int abd_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,scalar_t__,scalar_t__,int ,TYPE_5__**,int ) ;
 int FUNC_8 (TYPE_5__*,int ) ;
 int FUNC_9 (TYPE_5__*,int *) ;
 int FUNC_10 (int *,TYPE_4__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *) ;
 int FUNC_14 (int *,scalar_t__,int ,int) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,char*,int *,long long,long long,int) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ,scalar_t__) ;
 int FUNC_23 (int *,int *,int ,int *,int *,scalar_t__,int *,int *,int ,int,int *) ;
 int FUNC_24 (int ) ;
 scalar_t__ FUNC_25 (int ,int ,int,int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_26 (TYPE_3__*,TYPE_2__*,int,int ) ;
 int FUNC_27 (TYPE_2__*,scalar_t__,int ,int ,int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_28 (int ,scalar_t__,unsigned long long) ;
 int FUNC_29 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_30 () ;
 TYPE_1__* VAR_14 ;
 int * VAR_15 ;
 scalar_t__ FUNC_31 (int *,int ,int ) ;

void
FUNC_32(ztest_ds_t *VAR_16, uint64_t VAR_17)
{
 ztest_shared_t *VAR_18 = VAR_14;
 spa_t *VAR_19 = VAR_15;
 objset_t *VAR_20 = VAR_16->zd_os;
 ztest_od_t VAR_21[1];
 uint64_t VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 enum zio_checksum VAR_27 = FUNC_20(VAR_19);
 dmu_buf_t *VAR_28;
 dmu_tx_t *VAR_29;
 abd_t *VAR_30;
 blkptr_t VAR_31;
 int VAR_32 = 2 * VAR_9;

 VAR_23 = FUNC_30();
 VAR_23 = FUNC_2(VAR_23, 2048);

 FUNC_27(&VAR_21[0], VAR_17, VAR_4, 0, VAR_2, VAR_23,
     0, 0);

 if (FUNC_26(VAR_16, VAR_21, sizeof (VAR_21), VAR_0) != 0)
  return;





 FUNC_18(&VAR_13, VAR_5);

 if (FUNC_25(VAR_16->zd_name, VAR_8, VAR_27,
     VAR_0) != 0 ||
     FUNC_25(VAR_16->zd_name, VAR_7, 1,
     VAR_0) != 0) {
  FUNC_19(&VAR_13);
  return;
 }

 dmu_objset_stats_t VAR_33;
 FUNC_15(FUNC_11(VAR_20), VAR_4);
 FUNC_10(VAR_20, &VAR_33);
 FUNC_16(FUNC_11(VAR_20), VAR_4);

 VAR_22 = VAR_21[0].od_object;
 VAR_23 = VAR_21[0].od_blocksize;
 VAR_25 = VAR_18->zs_guid ^ VAR_33.dds_guid;

 FUNC_0(VAR_22 != 0);

 VAR_29 = FUNC_13(VAR_20);
 FUNC_14(VAR_29, VAR_22, 0, VAR_32 * VAR_23);
 VAR_24 = FUNC_31(VAR_29, VAR_6, VAR_4);
 if (VAR_24 == 0) {
  FUNC_19(&VAR_13);
  return;
 }




 for (int VAR_34 = 0; VAR_34 < VAR_32; VAR_34++) {
  uint64_t VAR_35 = VAR_34 * VAR_23;
  int VAR_36 = FUNC_7(VAR_20, VAR_22, VAR_35, VAR_4, &VAR_28,
      VAR_3);
  if (VAR_36 != 0) {
   FUNC_17(VAR_0, "dmu_buf_hold(%p, %llu, %llu) = %u",
       VAR_20, (long long)VAR_22, (long long) VAR_35, VAR_36);
  }
  FUNC_0(VAR_28->db_offset == VAR_35);
  FUNC_0(VAR_28->db_size == VAR_23);
  FUNC_0(FUNC_28(VAR_28->db_data, VAR_28->db_size, VAR_25) ||
      FUNC_28(VAR_28->db_data, VAR_28->db_size, 0ULL));
  FUNC_9(VAR_28, VAR_29);
  FUNC_29(VAR_28->db_data, VAR_28->db_size, VAR_25);
  FUNC_8(VAR_28, VAR_4);
 }

 FUNC_12(VAR_29);
 FUNC_22(FUNC_21(VAR_19), VAR_24);




 FUNC_3(FUNC_7(VAR_20, VAR_22, 0, VAR_4, &VAR_28,
     VAR_3));
 VAR_31 = *((dmu_buf_impl_t *)VAR_28)->db_blkptr;
 FUNC_8(VAR_28, VAR_4);




 VAR_26 = FUNC_1(&VAR_31);
 VAR_30 = FUNC_4(VAR_26, VAR_1);
 FUNC_29(FUNC_6(VAR_30), VAR_26, ~VAR_25);

 (void) FUNC_24(FUNC_23(((void*)0), VAR_19, 0, &VAR_31,
     VAR_30, VAR_26, ((void*)0), ((void*)0), VAR_12,
     VAR_10 | VAR_11, ((void*)0)));

 FUNC_5(VAR_30);

 FUNC_19(&VAR_13);
}
