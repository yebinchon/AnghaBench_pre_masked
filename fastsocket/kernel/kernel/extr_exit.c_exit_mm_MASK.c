
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {TYPE_2__* signal; struct mm_struct* mm; struct mm_struct* active_mm; } ;
struct mm_struct {int oom_disable_count; int mmap_sem; int mm_count; struct core_state* core_state; } ;
struct core_thread {struct task_struct* task; int next; } ;
struct TYPE_3__ {int next; } ;
struct core_state {int startup; int nr_threads; TYPE_1__ dumper; } ;
struct TYPE_4__ {scalar_t__ oom_score_adj; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct task_struct*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct task_struct*) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mm_struct*,int ) ;
 int FUNC_9 (struct task_struct*,struct mm_struct*) ;
 int FUNC_10 (struct mm_struct*) ;
 int FUNC_11 (struct mm_struct*) ;
 int FUNC_12 () ;
 int FUNC_13 (struct task_struct*,int ) ;
 int FUNC_14 (struct task_struct*) ;
 int FUNC_15 (struct task_struct*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,struct core_thread*) ;

__attribute__((used)) static void FUNC_18(struct task_struct * VAR_4)
{
 struct mm_struct *VAR_5 = VAR_4->mm;
 struct core_state *VAR_6;

 FUNC_9(VAR_4, VAR_5);
 if (!VAR_5)
  return;







 FUNC_7(&VAR_5->mmap_sem);
 VAR_6 = VAR_5->core_state;
 if (VAR_6) {
  struct core_thread VAR_7;
  FUNC_16(&VAR_5->mmap_sem);

  VAR_7.task = VAR_4;
  VAR_7.next = FUNC_17(&VAR_6->dumper.next, &VAR_7);




  if (FUNC_3(&VAR_6->nr_threads))
   FUNC_6(&VAR_6->startup);

  for (;;) {
   FUNC_13(VAR_4, VAR_2);
   if (!VAR_7.task)
    break;
   FUNC_12();
  }
  FUNC_1(VAR_4, VAR_1);
  FUNC_7(&VAR_5->mmap_sem);
 }
 FUNC_4(&VAR_5->mm_count);
 FUNC_0(VAR_5 != VAR_4->active_mm);

 FUNC_14(VAR_4);
 VAR_4->mm = ((void*)0);
 FUNC_16(&VAR_5->mmap_sem);
 FUNC_8(VAR_5, VAR_3);

 FUNC_5(VAR_4);
 if (VAR_4->signal->oom_score_adj == VAR_0)
  FUNC_2(&VAR_5->oom_disable_count);
 FUNC_15(VAR_4);
 FUNC_10(VAR_5);
 FUNC_11(VAR_5);
}
