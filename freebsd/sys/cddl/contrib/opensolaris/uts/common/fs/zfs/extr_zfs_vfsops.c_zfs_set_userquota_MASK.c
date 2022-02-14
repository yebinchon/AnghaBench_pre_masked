
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ z_version; scalar_t__ z_userquota_obj; scalar_t__ z_groupquota_obj; int z_os; int z_lock; scalar_t__ z_fuid_dirty; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef size_t zfs_userquota_prop_t ;
typedef scalar_t__ uint64_t ;
typedef int dmu_tx_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *,scalar_t__,int ,int *) ;
 int FUNC_8 (TYPE_1__*,char const*,scalar_t__,char*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,scalar_t__,int *,int,int,scalar_t__*,int *) ;
 scalar_t__ FUNC_12 (int ,int ,int ,int ,int *) ;
 int FUNC_13 (int ,scalar_t__,char*,int *) ;
 int FUNC_14 (int ,scalar_t__,char*,int,int,scalar_t__*,int *) ;
 int FUNC_15 (TYPE_1__*,int *) ;
 int FUNC_16 (TYPE_1__*,int *) ;
 int ** VAR_12 ;

int
FUNC_17(zfsvfs_t *VAR_13, zfs_userquota_prop_t VAR_14,
    const char *VAR_15, uint64_t VAR_16, uint64_t VAR_17)
{
 char VAR_18[32];
 int VAR_19;
 dmu_tx_t *VAR_20;
 uint64_t *VAR_21;
 boolean_t VAR_22;

 if (VAR_14 != VAR_10 && VAR_14 != VAR_9)
  return (FUNC_1(VAR_4));

 if (VAR_13->z_version < VAR_11)
  return (FUNC_1(VAR_6));

 VAR_21 = (VAR_14 == VAR_10) ? &VAR_13->z_userquota_obj :
     &VAR_13->z_groupquota_obj;

 VAR_19 = FUNC_8(VAR_13, VAR_15, VAR_16, VAR_18, VAR_0);
 if (VAR_19)
  return (VAR_19);
 VAR_22 = VAR_13->z_fuid_dirty;

 VAR_20 = FUNC_6(VAR_13->z_os);
 FUNC_7(VAR_20, *VAR_21 ? *VAR_21 : VAR_1, VAR_0, ((void*)0));
 if (*VAR_21 == 0) {
  FUNC_7(VAR_20, VAR_7, VAR_0,
      VAR_12[VAR_14]);
 }
 if (VAR_22)
  FUNC_16(VAR_13, VAR_20);
 VAR_19 = FUNC_4(VAR_20, VAR_8);
 if (VAR_19) {
  FUNC_3(VAR_20);
  return (VAR_19);
 }

 FUNC_9(&VAR_13->z_lock);
 if (*VAR_21 == 0) {
  *VAR_21 = FUNC_12(VAR_13->z_os, VAR_3,
      VAR_2, 0, VAR_20);
  FUNC_2(0 == FUNC_11(VAR_13->z_os, VAR_7,
      VAR_12[VAR_14], 8, 1, VAR_21, VAR_20));
 }
 FUNC_10(&VAR_13->z_lock);

 if (VAR_17 == 0) {
  VAR_19 = FUNC_13(VAR_13->z_os, *VAR_21, VAR_18, VAR_20);
  if (VAR_19 == VAR_5)
   VAR_19 = 0;
 } else {
  VAR_19 = FUNC_14(VAR_13->z_os, *VAR_21, VAR_18, 8, 1, &VAR_17, VAR_20);
 }
 FUNC_0(VAR_19 == 0);
 if (VAR_22)
  FUNC_15(VAR_13, VAR_20);
 FUNC_5(VAR_20);
 return (VAR_19);
}
