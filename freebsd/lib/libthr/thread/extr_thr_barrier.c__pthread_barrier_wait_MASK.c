
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct pthread {int dummy; } ;
typedef TYPE_1__* pthread_barrier_t ;
typedef scalar_t__ int64_t ;
struct TYPE_6__ {scalar_t__ b_waiters; scalar_t__ b_count; scalar_t__ b_cycle; scalar_t__ b_refcount; int b_lock; int b_cv; scalar_t__ b_destroying; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct pthread*,int *) ;
 int FUNC_1 (struct pthread*,int *) ;
 TYPE_1__* FUNC_2 (TYPE_1__**,int ) ;
 struct pthread* FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *,int ) ;

int
FUNC_6(pthread_barrier_t *VAR_3)
{
 struct pthread *VAR_4;
 pthread_barrier_t VAR_5;
 int64_t VAR_6;
 int VAR_7;

 if (VAR_3 == ((void*)0) || *VAR_3 == ((void*)0))
  return (VAR_0);

 if (*VAR_3 == VAR_2) {
  VAR_5 = FUNC_2(VAR_3, 0);
  if (VAR_5 == ((void*)0))
   return (VAR_0);
 } else {
  VAR_5 = *VAR_3;
 }
 VAR_4 = FUNC_3();
 FUNC_0(VAR_4, &VAR_5->b_lock);
 if (++VAR_5->b_waiters == VAR_5->b_count) {

  VAR_5->b_waiters = 0;
  VAR_5->b_cycle++;
  FUNC_4(&VAR_5->b_cv);
  FUNC_1(VAR_4, &VAR_5->b_lock);
  VAR_7 = VAR_1;
 } else {
  VAR_6 = VAR_5->b_cycle;
  VAR_5->b_refcount++;
  do {
   FUNC_5(&VAR_5->b_cv, &VAR_5->b_lock, ((void*)0), 0);
   FUNC_0(VAR_4, &VAR_5->b_lock);

  } while (VAR_6 == VAR_5->b_cycle);
  if (--VAR_5->b_refcount == 0 && VAR_5->b_destroying)
   FUNC_4(&VAR_5->b_cv);
  FUNC_1(VAR_4, &VAR_5->b_lock);
  VAR_7 = 0;
 }
 return (VAR_7);
}
