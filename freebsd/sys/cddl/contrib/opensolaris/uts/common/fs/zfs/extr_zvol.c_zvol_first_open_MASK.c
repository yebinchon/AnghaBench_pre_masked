
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zv_flags; int zv_name; int zv_zilog; int zv_dn; int zv_volblocksize; int * zv_objset; } ;
typedef TYPE_1__ zvol_state_t ;
typedef scalar_t__ uint64_t ;
typedef int objset_t ;
struct TYPE_7__ {int doi_data_block_size; } ;
typedef TYPE_2__ dmu_object_info_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,TYPE_2__*) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ,int ,int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ,int *) ;
 scalar_t__ FUNC_8 (int ,char*,scalar_t__*,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ,char*,int,int,scalar_t__*) ;
 int FUNC_11 (int *,int ) ;
 int VAR_5 ;
 int FUNC_12 (TYPE_1__*,scalar_t__) ;
 int VAR_6 ;

int
FUNC_13(zvol_state_t *VAR_7)
{
 dmu_object_info_t VAR_8;
 objset_t *VAR_9;
 uint64_t VAR_10;
 int VAR_11;
 uint64_t VAR_12;


 VAR_11 = FUNC_5(VAR_7->zv_name, VAR_1, VAR_0,
     VAR_6, &VAR_9);
 if (VAR_11)
  return (VAR_11);

 VAR_7->zv_objset = VAR_9;
 VAR_11 = FUNC_10(VAR_9, VAR_4, "size", 8, 1, &VAR_10);
 if (VAR_11) {
  FUNC_0(VAR_11 == 0);
  FUNC_3(VAR_9, VAR_6);
  return (VAR_11);
 }


 VAR_11 = FUNC_2(VAR_9, VAR_2, &VAR_8);
 if (VAR_11) {
  FUNC_0(VAR_11 == 0);
  FUNC_3(VAR_9, VAR_6);
  return (VAR_11);
 }
 VAR_7->zv_volblocksize = VAR_8.doi_data_block_size;

 VAR_11 = FUNC_7(VAR_9, VAR_2, VAR_6, &VAR_7->zv_dn);
 if (VAR_11) {
  FUNC_3(VAR_9, VAR_6);
  return (VAR_11);
 }

 FUNC_12(VAR_7, VAR_10);
 VAR_7->zv_zilog = FUNC_11(VAR_9, VAR_5);

 FUNC_1(FUNC_8(VAR_7->zv_name, "readonly", &VAR_12,
     ((void*)0)) == 0);
 if (VAR_12 || FUNC_4(VAR_9) ||
     !FUNC_9(FUNC_6(VAR_9)))
  VAR_7->zv_flags |= VAR_3;
 else
  VAR_7->zv_flags &= ~VAR_3;
 return (VAR_11);
}
