
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* m_ceilings; } ;
struct pthread_mutex {TYPE_1__ m_lock; } ;
struct pthread {int * mq; } ;


 struct pthread_mutex* FUNC_0 (int *,int ) ;
 size_t FUNC_1 (struct pthread_mutex*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct pthread *VAR_1, struct pthread_mutex *VAR_2)
{
 struct pthread_mutex *VAR_3;

 VAR_3 = FUNC_0(&VAR_1->mq[FUNC_1(VAR_2)], VAR_0);
 if (VAR_3 != ((void*)0))
  VAR_2->m_lock.m_ceilings[1] = VAR_3->m_lock.m_ceilings[0];
 else
  VAR_2->m_lock.m_ceilings[1] = -1;
}
