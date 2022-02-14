
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* zd_os; } ;
typedef TYPE_1__ ztest_ds_t ;
typedef int uint64_t ;
struct TYPE_5__ {int os_obj_lock; int os_obj_next_chunk; } ;
typedef TYPE_2__ objset_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

void
FUNC_4(ztest_ds_t *VAR_1, uint64_t VAR_2)
{
 objset_t *VAR_3 = VAR_1->zd_os;
 int VAR_4 = 1 << VAR_0;
 uint64_t VAR_5;





 FUNC_1(&VAR_3->os_obj_lock);
 VAR_5 = FUNC_3(VAR_3->os_obj_next_chunk);
 VAR_3->os_obj_next_chunk = FUNC_0(VAR_5, VAR_4);
 FUNC_2(&VAR_3->os_obj_lock);
}
