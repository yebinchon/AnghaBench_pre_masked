
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ initialized; int m_lock; int * m_owner; } ;
typedef TYPE_1__ kmutex_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *) ;

void
FUNC_4(kmutex_t *VAR_2)
{
 FUNC_0(VAR_2->initialized == VAR_0);
 FUNC_0(FUNC_2(VAR_2) == VAR_1);
 VAR_2->m_owner = ((void*)0);
 FUNC_1(FUNC_3(&VAR_2->m_lock) == 0);
}
