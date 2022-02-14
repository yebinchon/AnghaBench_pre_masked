
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int entry; } ;
struct cpu_workqueue_struct {int lock; } ;


 int VAR_0 ;
 struct cpu_workqueue_struct* FUNC_0 (struct work_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct work_struct*) ;

__attribute__((used)) static int FUNC_8(struct work_struct *VAR_1)
{
 struct cpu_workqueue_struct *VAR_2;
 int VAR_3 = -1;

 if (!FUNC_6(VAR_0, FUNC_7(VAR_1)))
  return 0;






 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2)
  return VAR_3;

 FUNC_4(&VAR_2->lock);
 if (!FUNC_2(&VAR_1->entry)) {





  FUNC_3();
  if (VAR_2 == FUNC_0(VAR_1)) {
   FUNC_1(&VAR_1->entry);
   VAR_3 = 1;
  }
 }
 FUNC_5(&VAR_2->lock);

 return VAR_3;
}
