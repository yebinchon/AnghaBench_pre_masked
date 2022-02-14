
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int cpu_wq; } ;
struct cpu_workqueue_struct {int dummy; } ;


 int FUNC_0 (struct workqueue_struct*) ;
 struct cpu_workqueue_struct* FUNC_1 (int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static
struct cpu_workqueue_struct *FUNC_3(struct workqueue_struct *VAR_1, int VAR_2)
{
 if (FUNC_2(FUNC_0(VAR_1)))
  VAR_2 = VAR_0;
 return FUNC_1(VAR_1->cpu_wq, VAR_2);
}
