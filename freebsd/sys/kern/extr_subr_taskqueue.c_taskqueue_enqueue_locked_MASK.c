
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taskqueue {int tq_flags; int tq_context; int (* tq_enqueue ) (int ) ;int tq_queue; struct task* tq_hint; } ;
struct task {int ta_pending; scalar_t__ ta_priority; int * ta_func; } ;


 int FUNC_0 (int ,char*) ;
 struct task* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct task*,struct task*,int ) ;
 int FUNC_3 (int *,struct task*,int ) ;
 int FUNC_4 (int *,struct task*,int ) ;
 struct task* FUNC_5 (int *,struct task*,int ) ;
 struct task* FUNC_6 (struct task*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (struct taskqueue*) ;
 int VAR_2 ;
 int FUNC_8 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_9(struct taskqueue *VAR_4, struct task *VAR_5)
{
 struct task *VAR_6;
 struct task *VAR_7;

 FUNC_0(VAR_5->ta_func != ((void*)0), ("enqueueing task with NULL func"));



 if (VAR_5->ta_pending) {
  if (VAR_5->ta_pending < VAR_2)
   VAR_5->ta_pending++;
  FUNC_7(VAR_4);
  return (0);
 }







 VAR_7 = FUNC_5(&VAR_4->tq_queue, VAR_5, VAR_3);
 if (!VAR_7 || VAR_7->ta_priority >= VAR_5->ta_priority) {
  FUNC_4(&VAR_4->tq_queue, VAR_5, VAR_3);
 } else {
  VAR_7 = VAR_4->tq_hint;
  if (VAR_7 && VAR_7->ta_priority >= VAR_5->ta_priority) {
   VAR_6 = FUNC_6(VAR_7, VAR_3);
  } else {
   VAR_7 = ((void*)0);
   VAR_6 = FUNC_1(&VAR_4->tq_queue);
  }
  for (; VAR_6; VAR_7 = VAR_6, VAR_6 = FUNC_6(VAR_6, VAR_3))
   if (VAR_6->ta_priority < VAR_5->ta_priority)
    break;

  if (VAR_7) {
   FUNC_2(&VAR_4->tq_queue, VAR_7, VAR_5, VAR_3);
   VAR_4->tq_hint = VAR_5;
  } else
   FUNC_3(&VAR_4->tq_queue, VAR_5, VAR_3);
 }

 VAR_5->ta_pending = 1;
 if ((VAR_4->tq_flags & VAR_1) != 0)
  FUNC_7(VAR_4);
 if ((VAR_4->tq_flags & VAR_0) == 0)
  VAR_4->tq_enqueue(VAR_4->tq_context);
 if ((VAR_4->tq_flags & VAR_1) == 0)
  FUNC_7(VAR_4);


 return (0);
}
