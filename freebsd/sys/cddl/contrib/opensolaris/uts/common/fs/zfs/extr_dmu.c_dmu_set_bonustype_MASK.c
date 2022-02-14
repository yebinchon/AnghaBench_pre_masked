
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * dn_bonus; } ;
typedef TYPE_1__ dnode_t ;
typedef int dmu_tx_t ;
typedef int dmu_object_type_t ;
typedef int dmu_buf_t ;
typedef int dmu_buf_impl_t ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ,int *) ;

int
FUNC_6(dmu_buf_t *VAR_1, dmu_object_type_t VAR_2, dmu_tx_t *VAR_3)
{
 dmu_buf_impl_t *VAR_4 = (dmu_buf_impl_t *)VAR_1;
 dnode_t *VAR_5;
 int VAR_6;

 FUNC_1(VAR_4);
 VAR_5 = FUNC_0(VAR_4);

 if (!FUNC_3(VAR_2)) {
  VAR_6 = FUNC_4(VAR_0);
 } else if (VAR_5->dn_bonus != VAR_4) {
  VAR_6 = FUNC_4(VAR_0);
 } else {
  FUNC_5(VAR_5, VAR_2, VAR_3);
  VAR_6 = 0;
 }

 FUNC_2(VAR_4);
 return (VAR_6);
}
