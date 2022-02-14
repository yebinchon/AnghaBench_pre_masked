
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef int dnode_t ;
typedef int dmu_tx_t ;
typedef int dmu_object_type_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__,int ,int ,int ,int **) ;
 int FUNC_2 (int *,int ,int,int ,int,int,int *) ;
 int FUNC_3 (int *,int ) ;

int
FUNC_4(objset_t *VAR_6, uint64_t VAR_7, dmu_object_type_t VAR_8,
    int VAR_9, dmu_object_type_t VAR_10, int VAR_11, int VAR_12,
    dmu_tx_t *VAR_13)
{
 dnode_t *VAR_14;
 int VAR_15 = VAR_12 >> VAR_3;
 int VAR_16;

 if (VAR_15 == 0)
  VAR_15 = VAR_1;

 if (VAR_7 == VAR_0)
  return (FUNC_0(VAR_4));

 VAR_16 = FUNC_1(VAR_6, VAR_7, VAR_2, 0,
     VAR_5, &VAR_14);
 if (VAR_16)
  return (VAR_16);

 FUNC_2(VAR_14, VAR_8, VAR_9, VAR_10, VAR_11, VAR_15, VAR_13);

 FUNC_3(VAR_14, VAR_5);
 return (VAR_16);
}
