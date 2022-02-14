
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int objset_t ;
typedef int dmu_buf_t ;
typedef int dmu_buf_impl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,void*) ;
 int FUNC_2 (int *,int ,int ,void*,int **) ;

int
FUNC_3(objset_t *VAR_3, uint64_t VAR_4, uint64_t VAR_5,
    void *VAR_6, dmu_buf_t **VAR_7, int VAR_8)
{
 int VAR_9;
 int VAR_10 = VAR_0;

 if (VAR_8 & VAR_2)
  VAR_10 |= VAR_1;

 VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_9 == 0) {
  dmu_buf_impl_t *VAR_11 = (dmu_buf_impl_t *)(*VAR_7);
  VAR_9 = FUNC_0(VAR_11, ((void*)0), VAR_10);
  if (VAR_9 != 0) {
   FUNC_1(VAR_11, VAR_6);
   *VAR_7 = ((void*)0);
  }
 }

 return (VAR_9);
}
