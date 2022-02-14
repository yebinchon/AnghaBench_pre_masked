
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int objset_t ;
typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;
typedef int dmu_objset_type_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,void*,int **) ;
 int FUNC_1 (int *,char const*,void*,int **) ;
 int FUNC_2 (char const*,int ,int **) ;
 int FUNC_3 (int *,int ) ;

int
FUNC_4(const char *VAR_1, dmu_objset_type_t VAR_2,
    boolean_t VAR_3, void *VAR_4, objset_t **VAR_5)
{
 dsl_pool_t *VAR_6;
 dsl_dataset_t *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_1, VAR_0, &VAR_6);
 if (VAR_8 != 0)
  return (VAR_8);
 VAR_8 = FUNC_1(VAR_6, VAR_1, VAR_4, &VAR_7);
 if (VAR_8 != 0) {
  FUNC_3(VAR_6, VAR_0);
  return (VAR_8);
 }
 VAR_8 = FUNC_0(VAR_7, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_3(VAR_6, VAR_0);

 return (VAR_8);
}
