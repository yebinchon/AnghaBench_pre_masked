
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dnode_t ;
typedef int dmu_buf_t ;
typedef int dmu_buf_impl_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,void*,int **) ;

int
FUNC_4(dmu_buf_t *VAR_1, void *VAR_2, dmu_buf_t **VAR_3)
{
 dmu_buf_impl_t *VAR_4 = (dmu_buf_impl_t *)VAR_1;
 dnode_t *VAR_5;
 int VAR_6;

 FUNC_1(VAR_4);
 VAR_5 = FUNC_0(VAR_4);
 VAR_6 = FUNC_3(VAR_5, VAR_0, VAR_2, VAR_3);
 FUNC_2(VAR_4);

 return (VAR_6);
}
