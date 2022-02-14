
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wq_barrier {int work; int done; } ;
struct list_head {int dummy; } ;
struct cpu_workqueue_struct {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cpu_workqueue_struct*,int *,struct list_head*) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct cpu_workqueue_struct *VAR_2,
   struct wq_barrier *VAR_3, struct list_head *VAR_4)
{
 FUNC_0(&VAR_3->work, VAR_1);
 FUNC_1(VAR_0, FUNC_4(&VAR_3->work));

 FUNC_2(&VAR_3->done);

 FUNC_3(VAR_2, &VAR_3->work, VAR_4);
}
