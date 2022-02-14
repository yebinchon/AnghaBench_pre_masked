
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct intr_thread {int it_flags; struct thread* it_thread; } ;
struct intr_event {struct intr_thread* ie_thread; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*) ;
 struct intr_event* FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (struct thread*) ;

void
FUNC_5(int VAR_1)
{
 struct intr_event *VAR_2;
 struct intr_thread *VAR_3;
 struct thread *VAR_4;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == ((void*)0))
  return;
 if (VAR_2->ie_thread == ((void*)0))
  return;
 VAR_3 = VAR_2->ie_thread;
 VAR_4 = VAR_3->it_thread;





 FUNC_3(VAR_4);
 if (!FUNC_0(VAR_4)) {
  VAR_3->it_flags |= VAR_0;
  while (VAR_3->it_flags & VAR_0) {
   FUNC_4(VAR_4);
   FUNC_2("idrain", 1);
   FUNC_3(VAR_4);
  }
 }
 FUNC_4(VAR_4);
 return;
}
