
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zv_flags; int * zv_objset; int * zv_dn; int * zv_zilog; } ;
typedef TYPE_1__ zvol_state_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;

void
FUNC_8(zvol_state_t *VAR_2)
{
 FUNC_7(VAR_2->zv_zilog);
 VAR_2->zv_zilog = ((void*)0);

 FUNC_4(VAR_2->zv_dn, VAR_1);
 VAR_2->zv_dn = ((void*)0);




 if (FUNC_5(FUNC_1(VAR_2->zv_objset)) &&
     !(VAR_2->zv_flags & VAR_0))
  FUNC_6(FUNC_3(VAR_2->zv_objset), 0);
 FUNC_2(VAR_2->zv_objset);

 FUNC_0(VAR_2->zv_objset, VAR_1);
 VAR_2->zv_objset = ((void*)0);
}
