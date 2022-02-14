
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sleepqueue_chain {int sc_lock; } ;
struct pthread {int dummy; } ;


 struct sleepqueue_chain* FUNC_0 (void*) ;
 int FUNC_1 (struct pthread*,int *) ;
 struct pthread* FUNC_2 () ;

void
FUNC_3(void *VAR_0)
{
 struct sleepqueue_chain *VAR_1;
 struct pthread *VAR_2 = FUNC_2();

 VAR_1 = FUNC_0(VAR_0);
 FUNC_1(VAR_2, &VAR_1->sc_lock);
}
