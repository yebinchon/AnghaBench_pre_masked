
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct libworker {TYPE_2__* env; } ;
struct TYPE_4__ {int * msg_cache; TYPE_1__* rrset_cache; } ;
struct TYPE_3__ {int table; } ;


 int FUNC_0 (int *) ;

void FUNC_1(void* VAR_0)
{
 struct libworker* VAR_1 = (struct libworker*)VAR_0;
 FUNC_0(&VAR_1->env->rrset_cache->table);
        FUNC_0(VAR_1->env->msg_cache);
}
