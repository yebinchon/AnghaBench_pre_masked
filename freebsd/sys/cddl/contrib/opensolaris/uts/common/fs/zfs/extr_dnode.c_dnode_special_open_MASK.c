
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
typedef int dnode_t ;
typedef int dnode_phys_t ;
struct TYPE_4__ {int dnh_zrlock; } ;
typedef TYPE_1__ dnode_handle_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *,int *,int ,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(objset_t *VAR_0, dnode_phys_t *VAR_1, uint64_t VAR_2,
    dnode_handle_t *VAR_3)
{
 dnode_t *VAR_4;

 FUNC_3(&VAR_3->dnh_zrlock);
 FUNC_4(&VAR_3->dnh_zrlock);

 VAR_4 = FUNC_1(VAR_0, VAR_1, ((void*)0), VAR_2, VAR_3);
 FUNC_0(VAR_4);

 FUNC_2(&VAR_3->dnh_zrlock);
}
