
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef int zio_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int longlong_t ;
struct TYPE_18__ {int dn_datablkshift; scalar_t__ dn_datablksz; int dn_struct_rwlock; int dn_zfetch; TYPE_2__* dn_objset; scalar_t__ dn_object; } ;
typedef TYPE_4__ dnode_t ;
typedef int dmu_buf_t ;
struct TYPE_19__ {scalar_t__ db_state; int db_mtx; int db_changed; int db; } ;
typedef TYPE_5__ dmu_buf_impl_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_17__ {int ru_oublock; } ;
struct TYPE_16__ {int os_spa; TYPE_1__* os_dsl_dataset; } ;
struct TYPE_15__ {scalar_t__ ds_object; } ;
struct TYPE_14__ {TYPE_3__ td_ru; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (scalar_t__,unsigned long long) ;
 int FUNC_4 (scalar_t__,unsigned long long) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_11__* VAR_16 ;
 int FUNC_8 (int *,int *) ;
 TYPE_5__* FUNC_9 (TYPE_4__*,scalar_t__,void*) ;
 int FUNC_10 (TYPE_5__*,int *,int) ;
 scalar_t__ FUNC_11 (TYPE_4__*,int ,scalar_t__) ;
 int FUNC_12 (int **,scalar_t__,void*) ;
 int FUNC_13 (int *,scalar_t__,scalar_t__,int) ;
 int ** FUNC_14 (int,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_17 ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *) ;
 scalar_t__ VAR_18 ;
 int FUNC_20 (char*,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_21 (int *) ;
 int * FUNC_22 (int ,int *,int *,int ) ;
 int FUNC_23 (int *) ;

int
FUNC_24(dnode_t *VAR_19, uint64_t VAR_20, uint64_t VAR_21,
    boolean_t VAR_22, void *VAR_23, int *VAR_24, dmu_buf_t ***VAR_25, uint32_t VAR_26)
{
 dmu_buf_t **VAR_27;
 uint64_t VAR_28, VAR_29, VAR_30;
 uint32_t VAR_31;
 int VAR_32;
 zio_t *VAR_33;

 FUNC_0(VAR_21 <= VAR_7);






 VAR_31 = VAR_2 | VAR_4 | VAR_3 |
     VAR_5;

 FUNC_18(&VAR_19->dn_struct_rwlock, VAR_13);
 if (VAR_19->dn_datablkshift) {
  int VAR_34 = VAR_19->dn_datablkshift;
  VAR_29 = (FUNC_4(VAR_20 + VAR_21, 1ULL << VAR_34) -
      FUNC_3(VAR_20, 1ULL << VAR_34)) >> VAR_34;
 } else {
  if (VAR_20 + VAR_21 > VAR_19->dn_datablksz) {
   FUNC_20("zfs: accessing past end of object "
       "%llx/%llx (size=%u access=%llu+%llu)",
       (longlong_t)VAR_19->dn_objset->
       os_dsl_dataset->ds_object,
       (longlong_t)VAR_19->dn_object, VAR_19->dn_datablksz,
       (longlong_t)VAR_20, (longlong_t)VAR_21);
   FUNC_19(&VAR_19->dn_struct_rwlock);
   return (FUNC_7(VAR_9));
  }
  VAR_29 = 1;
 }
 VAR_27 = FUNC_14(sizeof (dmu_buf_t *) * VAR_29, VAR_10);
 VAR_33 = FUNC_22(VAR_19->dn_objset->os_spa, ((void*)0), ((void*)0), VAR_14);
 VAR_28 = FUNC_11(VAR_19, 0, VAR_20);
 for (VAR_30 = 0; VAR_30 < VAR_29; VAR_30++) {
  dmu_buf_impl_t *VAR_35 = FUNC_9(VAR_19, VAR_28 + VAR_30, VAR_23);
  if (VAR_35 == ((void*)0)) {
   FUNC_19(&VAR_19->dn_struct_rwlock);
   FUNC_12(VAR_27, VAR_29, VAR_23);
   FUNC_21(VAR_33);
   return (FUNC_7(VAR_9));
  }


  if (VAR_22)
   (void) FUNC_10(VAR_35, VAR_33, VAR_31);




  VAR_27[VAR_30] = &VAR_35->db;
 }

 if ((VAR_26 & VAR_8) == 0 &&
     FUNC_2(VAR_19) && VAR_21 <= VAR_18) {
  FUNC_13(&VAR_19->dn_zfetch, VAR_28, VAR_29,
      VAR_22 && FUNC_1(VAR_19));
 }
 FUNC_19(&VAR_19->dn_struct_rwlock);


 VAR_32 = FUNC_23(VAR_33);
 if (VAR_32) {
  FUNC_12(VAR_27, VAR_29, VAR_23);
  return (VAR_32);
 }


 if (VAR_22) {
  for (VAR_30 = 0; VAR_30 < VAR_29; VAR_30++) {
   dmu_buf_impl_t *VAR_36 = (dmu_buf_impl_t *)VAR_27[VAR_30];
   FUNC_15(&VAR_36->db_mtx);
   while (VAR_36->db_state == VAR_1 ||
       VAR_36->db_state == VAR_0)
    FUNC_8(&VAR_36->db_changed, &VAR_36->db_mtx);
   if (VAR_36->db_state == VAR_6)
    VAR_32 = FUNC_7(VAR_9);
   FUNC_16(&VAR_36->db_mtx);
   if (VAR_32) {
    FUNC_12(VAR_27, VAR_29, VAR_23);
    return (VAR_32);
   }
  }
 }

 *VAR_24 = VAR_29;
 *VAR_25 = VAR_27;
 return (0);
}
