
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int objset_t ;
typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;
typedef int dmu_objset_type_t ;
typedef int boolean_t ;


 int FUNC_0 (int *,int ,int ,void*,int **) ;
 int FUNC_1 (int *,int ,void*,int **) ;

int
FUNC_2(dsl_pool_t *VAR_0, uint64_t VAR_1, dmu_objset_type_t VAR_2,
    boolean_t VAR_3, void *VAR_4, objset_t **VAR_5)
{
 dsl_dataset_t *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_4, &VAR_6);
 if (VAR_7 != 0)
  return (VAR_7);

 return (FUNC_0(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5));
}
