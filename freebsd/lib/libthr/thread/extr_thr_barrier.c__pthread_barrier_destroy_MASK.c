
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct pthread {int dummy; } ;
typedef TYPE_1__* pthread_barrier_t ;
struct TYPE_8__ {int b_destroying; scalar_t__ b_waiters; scalar_t__ b_refcount; int b_lock; int b_cv; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct pthread*,int *) ;
 int FUNC_1 (struct pthread*,int *) ;
 int FUNC_2 (TYPE_1__**) ;
 TYPE_1__* FUNC_3 (TYPE_1__**,int ) ;
 struct pthread* FUNC_4 () ;
 int FUNC_5 (int *,int *,int *,int ) ;
 int FUNC_6 (TYPE_1__*) ;

int
FUNC_7(pthread_barrier_t *VAR_3)
{
 pthread_barrier_t VAR_4;
 struct pthread *VAR_5;
 int VAR_6;

 if (VAR_3 == ((void*)0) || *VAR_3 == ((void*)0))
  return (VAR_1);

 if (*VAR_3 == VAR_2) {
  VAR_4 = FUNC_3(VAR_3, 0);
  if (VAR_4 == ((void*)0)) {
   *VAR_3 = ((void*)0);
   return (0);
  }
  VAR_6 = 1;
 } else {
  VAR_4 = *VAR_3;
  VAR_6 = 0;
 }
 VAR_5 = FUNC_4();
 FUNC_0(VAR_5, &VAR_4->b_lock);
 if (VAR_4->b_destroying) {
  FUNC_1(VAR_5, &VAR_4->b_lock);
  return (VAR_0);
 }
 VAR_4->b_destroying = 1;
 do {
  if (VAR_4->b_waiters > 0) {
   VAR_4->b_destroying = 0;
   FUNC_1(VAR_5, &VAR_4->b_lock);
   return (VAR_0);
  }
  if (VAR_4->b_refcount != 0) {
   FUNC_5(&VAR_4->b_cv, &VAR_4->b_lock, ((void*)0), 0);
   FUNC_0(VAR_5, &VAR_4->b_lock);
  } else
   break;
 } while (1);
 VAR_4->b_destroying = 0;
 FUNC_1(VAR_5, &VAR_4->b_lock);

 *VAR_3 = ((void*)0);
 if (VAR_6)
  FUNC_2(VAR_3);
 else
  FUNC_6(VAR_4);
 return (0);
}
