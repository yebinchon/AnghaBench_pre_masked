
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dn_num_slots; } ;
typedef TYPE_1__ dnode_t ;
typedef int dmu_buf_t ;
typedef int dmu_buf_impl_t ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

void
FUNC_3(dmu_buf_t *VAR_1, int *VAR_2)
{
 dmu_buf_impl_t *VAR_3 = (dmu_buf_impl_t *)VAR_1;
 dnode_t *VAR_4;

 FUNC_1(VAR_3);
 VAR_4 = FUNC_0(VAR_3);
 *VAR_2 = VAR_4->dn_num_slots << VAR_0;
 FUNC_2(VAR_3);
}
