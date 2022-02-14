
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zpool_status_t ;
struct TYPE_5__ {int fi_guid; } ;
typedef TYPE_1__ zfeature_info_t ;
struct TYPE_6__ {scalar_t__ vs_state; scalar_t__ vs_aux; } ;
typedef TYPE_2__ vdev_stat_t ;
typedef int uint_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_7__ {scalar_t__ pss_func; scalar_t__ pss_state; } ;
typedef TYPE_3__ pool_scan_stat_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int *,int ) ;
 unsigned long FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ,int **) ;
 scalar_t__ FUNC_6 (int *,int ,scalar_t__*) ;
 scalar_t__ FUNC_7 (int *,int ,scalar_t__**,int *) ;
 TYPE_1__* VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int FUNC_8 (int) ;

__attribute__((used)) static zpool_status_t
FUNC_9(nvlist_t *VAR_59, boolean_t VAR_60)
{
 nvlist_t *VAR_61;
 vdev_stat_t *VAR_62;
 pool_scan_stat_t *VAR_63 = ((void*)0);
 uint_t VAR_64, VAR_65;
 uint64_t VAR_66;
 uint64_t VAR_67;
 uint64_t VAR_68;
 uint64_t VAR_69;
 uint64_t VAR_70 = 0;

 FUNC_8(FUNC_6(VAR_59, VAR_26,
     &VAR_67) == 0);
 FUNC_8(FUNC_5(VAR_59, VAR_25,
     &VAR_61) == 0);
 FUNC_8(FUNC_7(VAR_61, VAR_24,
     (uint64_t **)&VAR_62, &VAR_64) == 0);
 FUNC_8(FUNC_6(VAR_59, VAR_21,
     &VAR_68) == 0);




 (void) FUNC_7(VAR_61, VAR_22,
     (uint64_t **)&VAR_63, &VAR_65);
 if (VAR_63 != ((void*)0) && VAR_63->pss_func == VAR_3 &&
     VAR_63->pss_state == VAR_2)
  return (VAR_46);




 (void) FUNC_6(VAR_59, VAR_19, &VAR_70);
 if (VAR_70 != 0 && (unsigned long)VAR_70 != FUNC_3() &&
     VAR_68 == VAR_4)
  return (VAR_37);




 if (VAR_62->vs_state == VAR_13 &&
     VAR_62->vs_aux == VAR_12)
  return (VAR_49);




 if (VAR_62->vs_state == VAR_13 &&
     VAR_62->vs_aux == VAR_11) {
  nvlist_t *VAR_71;

  FUNC_8(FUNC_5(VAR_59, VAR_20,
      &VAR_71) == 0);
  if (FUNC_4(VAR_71, VAR_15))
   return (VAR_48);
  return (VAR_47);
 }




 if (VAR_62->vs_state == VAR_13 &&
     VAR_62->vs_aux == VAR_8)
  return (VAR_27);




 if (FUNC_6(VAR_59, VAR_23,
     &VAR_69) == 0) {
  if (VAR_69 == VAR_14)
   return (VAR_38);
  return (VAR_39);
 }




 if (VAR_62->vs_state == VAR_13 &&
     VAR_62->vs_aux == VAR_9) {
  return (VAR_28);
 }




 if (VAR_62->vs_state == VAR_13 &&
     FUNC_1(VAR_61, VAR_54, VAR_1))
  return (VAR_34);

 if (VAR_62->vs_state == VAR_13 &&
     FUNC_1(VAR_61, VAR_55, VAR_1))
  return (VAR_40);

 if (VAR_62->vs_state == VAR_13 &&
     FUNC_1(VAR_61, VAR_52, VAR_1))
  return (VAR_30);




 if (VAR_62->vs_state == VAR_13 &&
     VAR_62->vs_aux == VAR_10)
  return (VAR_32);




 if (!VAR_60) {
  if (FUNC_6(VAR_59, VAR_17,
      &VAR_66) == 0 && VAR_66 != 0)
   return (VAR_29);
 }




 if (FUNC_1(VAR_61, VAR_54, VAR_1))
  return (VAR_35);
 if (FUNC_1(VAR_61, VAR_55, VAR_1))
  return (VAR_41);
 if (FUNC_1(VAR_61, VAR_52, VAR_1))
  return (VAR_31);




 if (!VAR_60 && FUNC_1(VAR_61, VAR_53, VAR_1))
  return (VAR_33);




 if (FUNC_1(VAR_61, VAR_57, VAR_1))
  return (VAR_43);




 if (FUNC_1(VAR_61, VAR_58, VAR_1))
  return (VAR_45);




 if (FUNC_1(VAR_61, VAR_56, VAR_0))
  return (VAR_42);




 if (FUNC_0(VAR_67) && VAR_67 != VAR_6)
  return (VAR_50);




 if (VAR_67 >= VAR_7) {
  int VAR_72;
  nvlist_t *VAR_73;

  if (VAR_60) {
   VAR_73 = FUNC_2(VAR_59,
       VAR_20);
   VAR_73 = FUNC_2(VAR_73,
       VAR_16);
  } else {
   VAR_73 = FUNC_2(VAR_59,
       VAR_18);
  }

  for (VAR_72 = 0; VAR_72 < VAR_5; VAR_72++) {
   zfeature_info_t *VAR_74 = &VAR_51[VAR_72];
   if (!FUNC_4(VAR_73, VAR_74->fi_guid))
    return (VAR_36);
  }
 }

 return (VAR_44);
}
