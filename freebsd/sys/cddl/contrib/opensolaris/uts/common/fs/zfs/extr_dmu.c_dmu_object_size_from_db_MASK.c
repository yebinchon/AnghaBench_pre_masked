
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u_longlong_t ;
struct TYPE_3__ {scalar_t__ dn_num_slots; int dn_phys; int dn_datablksz; } ;
typedef TYPE_1__ dnode_t ;
typedef int dmu_buf_t ;
typedef int dmu_buf_impl_t ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_4(dmu_buf_t *VAR_2, uint32_t *VAR_3,
    u_longlong_t *VAR_4)
{
 dmu_buf_impl_t *VAR_5 = (dmu_buf_impl_t *)VAR_2;
 dnode_t *VAR_6;

 FUNC_1(VAR_5);
 VAR_6 = FUNC_0(VAR_5);

 *VAR_3 = VAR_6->dn_datablksz;

 *VAR_4 = ((FUNC_3(VAR_6->dn_phys) + VAR_1/2) >>
     VAR_0) + VAR_6->dn_num_slots;
 FUNC_2(VAR_5);
}
