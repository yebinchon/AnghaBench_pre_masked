
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dn_struct_rwlock; int dn_mtx; } ;
typedef TYPE_1__ dnode_t ;
typedef int dmu_object_info_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

void
FUNC_5(dnode_t *VAR_1, dmu_object_info_t *VAR_2)
{
 FUNC_3(&VAR_1->dn_struct_rwlock, VAR_0);
 FUNC_1(&VAR_1->dn_mtx);

 FUNC_0(VAR_1, VAR_2);

 FUNC_2(&VAR_1->dn_mtx);
 FUNC_4(&VAR_1->dn_struct_rwlock);
}
