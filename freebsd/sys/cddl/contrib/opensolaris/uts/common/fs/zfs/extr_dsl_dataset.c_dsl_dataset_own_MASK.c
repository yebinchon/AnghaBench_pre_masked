
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,void*,int **) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 (int *,void*) ;

int
FUNC_4(dsl_pool_t *VAR_1, const char *VAR_2,
    void *VAR_3, dsl_dataset_t **VAR_4)
{
 int VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);
 if (!FUNC_3(*VAR_4, VAR_3)) {
  FUNC_2(*VAR_4, VAR_3);
  return (FUNC_0(VAR_0));
 }
 return (0);
}
