
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread_mutex {int m_lock; } ;
struct pthread {uintptr_t inact_mtx; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct pthread_mutex*) ;
 int FUNC_3 (struct pthread*) ;

int
FUNC_4(struct pthread *VAR_0, struct pthread_mutex *VAR_1)
{





 if (!FUNC_2(VAR_1))
  return (0);

 FUNC_3(VAR_0);
 VAR_0->inact_mtx = (uintptr_t)&VAR_1->m_lock;
 return (1);
}
