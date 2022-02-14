
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int dnode_t ;
typedef int dmu_buf_t ;
typedef int dmu_buf_impl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,void*) ;
 int FUNC_2 (int *,int ,void*,int **) ;

int
FUNC_3(dnode_t *VAR_3, uint64_t VAR_4,
    void *VAR_5, dmu_buf_t **VAR_6, int VAR_7)
{
 int VAR_8;
 int VAR_9 = VAR_0;

 if (VAR_7 & VAR_2)
  VAR_9 |= VAR_1;

 VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8 == 0) {
  dmu_buf_impl_t *VAR_10 = (dmu_buf_impl_t *)(*VAR_6);
  VAR_8 = FUNC_0(VAR_10, ((void*)0), VAR_9);
  if (VAR_8 != 0) {
   FUNC_1(VAR_10, VAR_5);
   *VAR_6 = ((void*)0);
  }
 }

 return (VAR_8);
}
