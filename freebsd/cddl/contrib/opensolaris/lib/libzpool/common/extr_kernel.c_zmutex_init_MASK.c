
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m_lock; int initialized; int * m_owner; } ;
typedef TYPE_1__ kmutex_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int *) ;

void
FUNC_1(kmutex_t *VAR_2)
{
 VAR_2->m_owner = ((void*)0);
 VAR_2->initialized = VAR_0;
 (void) FUNC_0(&VAR_2->m_lock, VAR_1, ((void*)0));
}
