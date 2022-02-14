
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intr_event {int (* ie_assign_cpu ) (int ,int) ;int ie_cpu; int ie_lock; TYPE_2__* ie_thread; int ie_source; } ;
typedef int lwpid_t ;
struct TYPE_4__ {TYPE_1__* it_thread; } ;
struct TYPE_3__ {int td_tid; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int
FUNC_6(struct intr_event *VAR_5, int VAR_6, bool VAR_7, bool VAR_8)
{
 lwpid_t VAR_9;
 int VAR_10;


 if (VAR_6 != VAR_2 && FUNC_0(VAR_6))
  return (VAR_0);

 if (VAR_5->ie_assign_cpu == ((void*)0))
  return (VAR_1);

 VAR_10 = FUNC_4(VAR_4, VAR_3);
 if (VAR_10)
  return (VAR_10);





 if (VAR_8) {
  FUNC_2(&VAR_5->ie_lock);
  if (VAR_5->ie_thread != ((void*)0)) {
   VAR_9 = VAR_5->ie_thread->it_thread->td_tid;
   FUNC_3(&VAR_5->ie_lock);
   VAR_10 = FUNC_1(VAR_9, VAR_6);
   if (VAR_10)
    return (VAR_10);
  } else
   FUNC_3(&VAR_5->ie_lock);
 }
 if (VAR_7)
  VAR_10 = VAR_5->ie_assign_cpu(VAR_5->ie_source, VAR_6);
 if (VAR_10) {
  if (VAR_8) {
   FUNC_2(&VAR_5->ie_lock);
   if (VAR_5->ie_thread != ((void*)0)) {
    VAR_6 = VAR_5->ie_cpu;
    VAR_9 = VAR_5->ie_thread->it_thread->td_tid;
    FUNC_3(&VAR_5->ie_lock);
    (void)FUNC_1(VAR_9, VAR_6);
   } else
    FUNC_3(&VAR_5->ie_lock);
  }
  return (VAR_10);
 }

 if (VAR_7) {
  FUNC_2(&VAR_5->ie_lock);
  VAR_5->ie_cpu = VAR_6;
  FUNC_3(&VAR_5->ie_lock);
 }

 return (VAR_10);
}
