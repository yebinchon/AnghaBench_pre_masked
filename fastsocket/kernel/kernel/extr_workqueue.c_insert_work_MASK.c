
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int entry; } ;
struct list_head {int dummy; } ;
struct cpu_workqueue_struct {int more_work; int thread; } ;


 int FUNC_0 (int *,struct list_head*) ;
 int FUNC_1 (struct work_struct*,struct cpu_workqueue_struct*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,struct work_struct*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct cpu_workqueue_struct *VAR_0,
   struct work_struct *VAR_1, struct list_head *VAR_2)
{
 FUNC_3(VAR_0->thread, VAR_1);

 FUNC_1(VAR_1, VAR_0);




 FUNC_2();
 FUNC_0(&VAR_1->entry, VAR_2);
 FUNC_4(&VAR_0->more_work);
}
