
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_desc {int thread; scalar_t__ curr_event; int work_done_sem; int ready_for_work; int sleep_sem; } ;
struct sched_thread_parms {struct perf_sched* sched; struct task_desc* task; } ;
struct perf_sched {unsigned long nr_tasks; struct task_desc** tasks; int work_done_wait_mutex; int start_work_mutex; } ;
typedef int pthread_attr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct sched_thread_parms* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *,int *,int ,struct sched_thread_parms*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_8(struct perf_sched *VAR_2)
{
 struct task_desc *VAR_3;
 pthread_attr_t VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(&VAR_4);
 FUNC_0(VAR_6);
 VAR_6 = FUNC_4(&VAR_4,
   (size_t) FUNC_2(16 * 1024, VAR_0));
 FUNC_0(VAR_6);
 VAR_6 = FUNC_6(&VAR_2->start_work_mutex);
 FUNC_0(VAR_6);
 VAR_6 = FUNC_6(&VAR_2->work_done_wait_mutex);
 FUNC_0(VAR_6);
 for (VAR_5 = 0; VAR_5 < VAR_2->nr_tasks; VAR_5++) {
  struct sched_thread_parms *VAR_7 = FUNC_1(sizeof(*VAR_7));
  FUNC_0(VAR_7 == ((void*)0));
  VAR_7->task = VAR_3 = VAR_2->tasks[VAR_5];
  VAR_7->sched = VAR_2;
  FUNC_7(&VAR_3->sleep_sem, 0, 0);
  FUNC_7(&VAR_3->ready_for_work, 0, 0);
  FUNC_7(&VAR_3->work_done_sem, 0, 0);
  VAR_3->curr_event = 0;
  VAR_6 = FUNC_5(&VAR_3->thread, &VAR_4, VAR_1, VAR_7);
  FUNC_0(VAR_6);
 }
}
