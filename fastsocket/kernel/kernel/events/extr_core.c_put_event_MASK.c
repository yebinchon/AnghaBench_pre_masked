
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int perf_event_mutex; } ;
struct perf_event {int owner_entry; int owner; int refcount; } ;


 struct task_struct* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct perf_event*) ;
 int FUNC_7 (struct task_struct*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(struct perf_event *VAR_0)
{
 struct task_struct *VAR_1;

 if (!FUNC_1(&VAR_0->refcount))
  return;

 FUNC_8();
 VAR_1 = FUNC_0(VAR_0->owner);






 FUNC_10();
 if (VAR_1) {





  FUNC_2(VAR_1);
 }
 FUNC_9();

 if (VAR_1) {
  FUNC_4(&VAR_1->perf_event_mutex);






  if (VAR_0->owner)
   FUNC_3(&VAR_0->owner_entry);
  FUNC_5(&VAR_1->perf_event_mutex);
  FUNC_7(VAR_1);
 }

 FUNC_6(VAR_0);
}
