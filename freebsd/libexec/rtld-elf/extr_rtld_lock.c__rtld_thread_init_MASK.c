
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct RtldLockInfo {int at_fork; int thread_clr_flag; int thread_set_flag; int (* lock_release ) (void*) ;int (* wlock_acquire ) (void*) ;int rlock_acquire; int (* lock_destroy ) (void*) ;void* (* lock_create ) () ;} ;
struct TYPE_4__ {int at_fork; int thread_clr_flag; int thread_set_flag; int (* lock_release ) (void*) ;int (* wlock_acquire ) (void*) ;int rlock_acquire; int (* lock_destroy ) (void*) ;void* (* lock_create ) () ;} ;
struct TYPE_3__ {void* handle; int mask; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 struct RtldLockInfo VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 void* FUNC_2 () ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;

void
FUNC_9(struct RtldLockInfo *VAR_4)
{
 int VAR_5, VAR_6;
 void *VAR_7[VAR_0];


 VAR_5 = FUNC_8(~0);

 if (VAR_4 == ((void*)0))
  VAR_4 = &VAR_1;


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  if ((VAR_7[VAR_6] = VAR_4->lock_create()) == ((void*)0))
   break;

 if (VAR_6 < VAR_0) {
  while (--VAR_6 >= 0)
   VAR_4->lock_destroy(VAR_7[VAR_6]);
  FUNC_0();
 }

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_3[VAR_6].handle == ((void*)0))
   continue;
  if (VAR_5 & VAR_3[VAR_6].mask)
   VAR_2.lock_release(VAR_3[VAR_6].handle);
  VAR_2.lock_destroy(VAR_3[VAR_6].handle);
 }

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_3[VAR_6].handle = VAR_7[VAR_6];
  if (VAR_5 & VAR_3[VAR_6].mask)
   VAR_4->wlock_acquire(VAR_3[VAR_6].handle);
 }

 VAR_2.lock_create = VAR_4->lock_create;
 VAR_2.lock_destroy = VAR_4->lock_destroy;
 VAR_2.rlock_acquire = VAR_4->rlock_acquire;
 VAR_2.wlock_acquire = VAR_4->wlock_acquire;
 VAR_2.lock_release = VAR_4->lock_release;
 VAR_2.thread_set_flag = VAR_4->thread_set_flag;
 VAR_2.thread_clr_flag = VAR_4->thread_clr_flag;
 VAR_2.at_fork = VAR_4->at_fork;


 FUNC_7(~0);
 FUNC_8(VAR_5);
 FUNC_1("_rtld_thread_init: done");
}
