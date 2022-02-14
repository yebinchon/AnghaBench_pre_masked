
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * m_owner; int m_lock; } ;
typedef TYPE_1__ kmutex_t ;
typedef int kcondvar_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int * VAR_1 ;
 int * FUNC_3 (TYPE_1__*) ;

void
FUNC_4(kcondvar_t *VAR_2, kmutex_t *VAR_3)
{
 FUNC_0(FUNC_3(VAR_3) == VAR_1);
 VAR_3->m_owner = ((void*)0);
 int VAR_4 = FUNC_2(VAR_2, &VAR_3->m_lock);
 FUNC_1(VAR_4 == 0 || VAR_4 == VAR_0);
 VAR_3->m_owner = VAR_1;
}
