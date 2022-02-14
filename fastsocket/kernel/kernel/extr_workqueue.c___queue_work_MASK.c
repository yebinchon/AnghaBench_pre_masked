
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct cpu_workqueue_struct {int lock; int worklist; } ;


 int FUNC_0 (struct cpu_workqueue_struct*,struct work_struct*,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct cpu_workqueue_struct *VAR_0,
    struct work_struct *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->lock, VAR_2);
 FUNC_0(VAR_0, VAR_1, &VAR_0->worklist);
 FUNC_2(&VAR_0->lock, VAR_2);
}
