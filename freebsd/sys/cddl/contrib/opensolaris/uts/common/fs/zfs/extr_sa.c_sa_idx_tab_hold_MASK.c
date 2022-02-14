
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sa_lock; } ;
typedef TYPE_1__ sa_os_t ;
struct TYPE_7__ {int sa_refcount; } ;
typedef TYPE_2__ sa_idx_tab_t ;
struct TYPE_8__ {TYPE_1__* os_sa; } ;
typedef TYPE_3__ objset_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void
FUNC_3(objset_t *VAR_0, sa_idx_tab_t *VAR_1)
{
 sa_os_t *VAR_2 = VAR_0->os_sa;

 FUNC_0(FUNC_1(&VAR_2->sa_lock));
 (void) FUNC_2(&VAR_1->sa_refcount, ((void*)0));
}
