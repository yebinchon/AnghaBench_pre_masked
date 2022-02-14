
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dmu_buf_t ;
typedef int dmu_buf_impl_t ;


 int FUNC_0 (int *,void*) ;
 int FUNC_1 (int **,int) ;

void
FUNC_2(dmu_buf_t **VAR_0, int VAR_1, void *VAR_2)
{
 int VAR_3;
 dmu_buf_impl_t **VAR_4 = (dmu_buf_impl_t **)VAR_0;

 if (VAR_1 == 0)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_4[VAR_3])
   FUNC_0(VAR_4[VAR_3], VAR_2);
 }

 FUNC_1(VAR_4, sizeof (dmu_buf_t *) * VAR_1);
}
