
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int dnode_t ;
typedef int dmu_buf_t ;
typedef int dmu_buf_impl_t ;
typedef int boolean_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,int ,int ,void*,int*,int ***,int ) ;

int
FUNC_4(dmu_buf_t *VAR_1, uint64_t VAR_2,
    uint64_t VAR_3, boolean_t VAR_4, void *VAR_5, int *VAR_6,
    dmu_buf_t ***VAR_7)
{
 dmu_buf_impl_t *VAR_8 = (dmu_buf_impl_t *)VAR_1;
 dnode_t *VAR_9;
 int VAR_10;

 FUNC_1(VAR_8);
 VAR_9 = FUNC_0(VAR_8);
 VAR_10 = FUNC_3(VAR_9, VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_6, VAR_7, VAR_0);
 FUNC_2(VAR_8);

 return (VAR_10);
}
