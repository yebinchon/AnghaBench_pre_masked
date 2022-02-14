
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pthread_mutex {int m_count; int m_flags; } ;
struct pthread {scalar_t__ nwaiter_defer; int defer_waiters; } ;


 int VAR_0 ;
 struct pthread* FUNC_0 () ;
 int FUNC_1 (struct pthread*,struct pthread_mutex*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct pthread*,struct pthread_mutex*) ;

int
FUNC_4(struct pthread_mutex *VAR_1, int *VAR_2)
{
 struct pthread *VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = FUNC_0();
 if ((VAR_5 = FUNC_1(VAR_3, VAR_1)) != 0)
  return (VAR_5);




 *VAR_2 = VAR_1->m_count;
 VAR_1->m_count = 0;
 FUNC_3(VAR_3, VAR_1);


        if ((VAR_1->m_flags & VAR_0) != 0) {
  VAR_4 = 1;
  VAR_1->m_flags &= ~VAR_0;
 } else
  VAR_4 = 0;

 if (VAR_4) {
  FUNC_2(VAR_3->defer_waiters,
      VAR_3->nwaiter_defer);
  VAR_3->nwaiter_defer = 0;
 }
 return (0);
}
