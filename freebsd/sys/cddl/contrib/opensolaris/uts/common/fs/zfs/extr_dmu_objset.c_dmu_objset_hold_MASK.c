
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int objset_t ;
typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;


 int FUNC_0 (int *,int **) ;
 int FUNC_1 (int *,char const*,void*,int **) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 (char const*,void*,int **) ;
 int FUNC_4 (int *,void*) ;

int
FUNC_5(const char *VAR_0, void *VAR_1, objset_t **VAR_2)
{
 dsl_pool_t *VAR_3;
 dsl_dataset_t *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_0, VAR_1, &VAR_3);
 if (VAR_5 != 0)
  return (VAR_5);
 VAR_5 = FUNC_1(VAR_3, VAR_0, VAR_1, &VAR_4);
 if (VAR_5 != 0) {
  FUNC_4(VAR_3, VAR_1);
  return (VAR_5);
 }

 VAR_5 = FUNC_0(VAR_4, VAR_2);
 if (VAR_5 != 0) {
  FUNC_2(VAR_4, VAR_1);
  FUNC_4(VAR_3, VAR_1);
 }

 return (VAR_5);
}
