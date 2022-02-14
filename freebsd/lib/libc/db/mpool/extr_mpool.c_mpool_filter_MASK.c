
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void (* pgin ) (void*,VAR_0,void*) ;void (* pgout ) (void*,VAR_1,void*) ;void* pgcookie; } ;
typedef TYPE_1__ MPOOL ;



void
FUNC_0(MPOOL *VAR_2, void (*VAR_3) (void *, VAR_4, void *),
    void (*VAR_5) (void *, VAR_6, void *), void *VAR_7)
{
 VAR_2->pgin = VAR_3;
 VAR_2->pgout = VAR_5;
 VAR_2->pgcookie = VAR_7;
}
