
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pthread_mutex {int m_flags; } ;
struct pthread {scalar_t__ nwaiter_defer; TYPE_1__* wake_addr; int ** defer_waiters; struct pthread_mutex* mutex_obj; } ;
struct broadcast_arg {scalar_t__ count; int ** waddrs; struct pthread* curthread; } ;
struct TYPE_2__ {int value; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pthread_mutex*) ;
 scalar_t__ FUNC_1 (struct pthread*) ;
 int FUNC_2 (int **,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct pthread *VAR_2, void *VAR_3)
{
 struct broadcast_arg *VAR_4 = VAR_3;
 struct pthread_mutex *VAR_5;
 struct pthread *VAR_6 = VAR_4->curthread;

 VAR_5 = VAR_2->mutex_obj;
 if (FUNC_0(VAR_5) == FUNC_1(VAR_6)) {
  if (VAR_6->nwaiter_defer >= VAR_0) {
   FUNC_2(VAR_6->defer_waiters,
       VAR_6->nwaiter_defer);
   VAR_6->nwaiter_defer = 0;
  }
  VAR_6->defer_waiters[VAR_6->nwaiter_defer++] =
      &VAR_2->wake_addr->value;
  VAR_5->m_flags |= VAR_1;
 } else {
  if (VAR_4->count >= VAR_0) {
   FUNC_2(VAR_4->waddrs, VAR_4->count);
   VAR_4->count = 0;
  }
  VAR_4->waddrs[VAR_4->count++] = &VAR_2->wake_addr->value;
 }
}
