
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zap_flags_t ;
typedef int uint64_t ;
typedef int objset_t ;
typedef int dmu_tx_t ;
typedef int dmu_object_type_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int ,int ,int,int,int *) ;
 scalar_t__ FUNC_3 (int *,int ,unsigned long long,int,int *) ;
 int FUNC_4 (int *,int ,int,int ,int *) ;

uint64_t
FUNC_5(objset_t *VAR_2, int VAR_3, zap_flags_t VAR_4,
    dmu_object_type_t VAR_5, int VAR_6, int VAR_7,
    dmu_object_type_t VAR_8, int VAR_9, int VAR_10, dmu_tx_t *VAR_11)
{
 uint64_t VAR_12 = FUNC_2(VAR_2, VAR_5, 0, VAR_8, VAR_9,
     VAR_10, VAR_11);

 FUNC_0(VAR_6 >= VAR_0 &&
     VAR_6 <= VAR_1 &&
     VAR_7 >= VAR_0 &&
     VAR_7 <= VAR_1);

 FUNC_1(FUNC_3(VAR_2, VAR_12,
     1ULL << VAR_6, VAR_7, VAR_11) == 0);

 FUNC_4(VAR_2, VAR_12, VAR_3, VAR_4, VAR_11);
 return (VAR_12);
}
