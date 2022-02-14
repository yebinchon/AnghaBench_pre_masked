
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rw_count; int initialized; int * rw_owner; int rw_lock; } ;
typedef TYPE_1__ krwlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *) ;

void
FUNC_1(krwlock_t *VAR_2, char *VAR_3, int VAR_4, void *VAR_5)
{
 FUNC_0(&VAR_2->rw_lock, VAR_1, ((void*)0));
 VAR_2->rw_owner = ((void*)0);
 VAR_2->initialized = VAR_0;
 VAR_2->rw_count = 0;
}
