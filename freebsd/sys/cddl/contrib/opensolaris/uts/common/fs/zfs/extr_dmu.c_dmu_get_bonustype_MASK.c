
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dn_bonustype; } ;
typedef TYPE_1__ dnode_t ;
typedef int dmu_object_type_t ;
typedef int dmu_buf_t ;
typedef int dmu_buf_impl_t ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

dmu_object_type_t
FUNC_3(dmu_buf_t *VAR_0)
{
 dmu_buf_impl_t *VAR_1 = (dmu_buf_impl_t *)VAR_0;
 dnode_t *VAR_2;
 dmu_object_type_t VAR_3;

 FUNC_1(VAR_1);
 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = VAR_2->dn_bonustype;
 FUNC_2(VAR_1);

 return (VAR_3);
}
