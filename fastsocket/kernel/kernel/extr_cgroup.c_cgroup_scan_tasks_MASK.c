
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int member_1; int member_0; } ;
struct task_struct {struct timespec start_time; } ;
struct ptr_heap {int size; struct task_struct** ptrs; int * gt; } ;
struct cgroup_scanner {int (* process_task ) (struct task_struct*,struct cgroup_scanner*) ;int cg; int (* test_task ) (struct task_struct*,struct cgroup_scanner*) ;struct ptr_heap* heap; } ;
struct cgroup_iter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct cgroup_iter*) ;
 struct task_struct* FUNC_1 (int ,struct cgroup_iter*) ;
 int FUNC_2 (int ,struct cgroup_iter*) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct ptr_heap*) ;
 int FUNC_5 (struct ptr_heap*,int ,int ,int *) ;
 struct task_struct* FUNC_6 (struct ptr_heap*,struct task_struct*) ;
 int FUNC_7 (struct task_struct*) ;
 int VAR_2 ;
 int FUNC_8 (struct task_struct*,struct timespec*,struct task_struct*) ;
 int FUNC_9 (struct task_struct*,struct cgroup_scanner*) ;
 int FUNC_10 (struct task_struct*,struct cgroup_scanner*) ;

int FUNC_11(struct cgroup_scanner *VAR_3)
{
 int VAR_4, VAR_5;
 struct cgroup_iter VAR_6;
 struct task_struct *VAR_7, *VAR_8;

 struct task_struct *VAR_9 = ((void*)0);
 struct ptr_heap VAR_10;
 struct ptr_heap *VAR_11;
 struct timespec VAR_12 = { 0, 0 };

 if (VAR_3->heap) {

  VAR_11 = VAR_3->heap;
  VAR_11->gt = &VAR_2;
 } else {

  VAR_11 = &VAR_10;
  VAR_4 = FUNC_5(VAR_11, VAR_1, VAR_0, &VAR_2);
  if (VAR_4)

   return VAR_4;
 }

 again:
 VAR_11->size = 0;
 FUNC_2(VAR_3->cg, &VAR_6);
 while ((VAR_7 = FUNC_1(VAR_3->cg, &VAR_6))) {




  if (VAR_3->test_task && !VAR_3->test_task(VAR_7, VAR_3))
   continue;




  if (!FUNC_8(VAR_7, &VAR_12, VAR_9))
   continue;
  VAR_8 = FUNC_6(VAR_11, VAR_7);
  if (VAR_8 == ((void*)0)) {




   FUNC_3(VAR_7);
  } else if (VAR_8 != VAR_7) {




   FUNC_3(VAR_7);
   FUNC_7(VAR_8);
  }




 }
 FUNC_0(VAR_3->cg, &VAR_6);

 if (VAR_11->size) {
  for (VAR_5 = 0; VAR_5 < VAR_11->size; VAR_5++) {
   struct task_struct *VAR_13 = VAR_11->ptrs[VAR_5];
   if (VAR_5 == 0) {
    VAR_12 = VAR_13->start_time;
    VAR_9 = VAR_13;
   }

   VAR_3->process_task(VAR_13, VAR_3);
   FUNC_7(VAR_13);
  }







  goto again;
 }
 if (VAR_11 == &VAR_10)
  FUNC_4(&VAR_10);
 return 0;
}
