
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ initialized; int * m_owner; int m_lock; } ;
typedef TYPE_1__ kmutex_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;

void
FUNC_2(kmutex_t *VAR_2)
{
 FUNC_0(VAR_2->initialized == VAR_1);
 FUNC_0(VAR_2->m_owner == ((void*)0));
 (void) FUNC_1(&(VAR_2)->m_lock);
 VAR_2->m_owner = (void *)-1UL;
 VAR_2->initialized = VAR_0;
}
