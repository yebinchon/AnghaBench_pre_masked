
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intr_event {int ie_lock; TYPE_2__* ie_thread; } ;
typedef int lwpid_t ;
typedef int cpuset_t ;
struct TYPE_4__ {TYPE_1__* it_thread; } ;
struct TYPE_3__ {int td_tid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct intr_event *VAR_1, cpuset_t *VAR_2)
{
 lwpid_t VAR_3;

 FUNC_1(&VAR_1->ie_lock);
 if (VAR_1->ie_thread != ((void*)0)) {
  VAR_3 = VAR_1->ie_thread->it_thread->td_tid;
  FUNC_2(&VAR_1->ie_lock);
  return (FUNC_0(VAR_3, VAR_2));
 } else {
  FUNC_2(&VAR_1->ie_lock);
 }
 return (VAR_0);
}
