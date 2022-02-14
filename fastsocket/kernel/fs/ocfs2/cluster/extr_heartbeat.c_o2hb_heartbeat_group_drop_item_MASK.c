
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct o2hb_region {int hr_steady_iterations; struct task_struct* hr_task; } ;
struct config_item {int dummy; } ;
struct config_group {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct config_item*) ;
 int FUNC_3 (struct task_struct*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct o2hb_region* FUNC_6 (struct config_item*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct config_group *VAR_2,
        struct config_item *VAR_3)
{
 struct task_struct *VAR_4;
 struct o2hb_region *VAR_5 = FUNC_6(VAR_3);


 FUNC_4(&VAR_0);
 VAR_4 = VAR_5->hr_task;
 VAR_5->hr_task = ((void*)0);
 FUNC_5(&VAR_0);

 if (VAR_4)
  FUNC_3(VAR_4);





 if (FUNC_0(&VAR_5->hr_steady_iterations) != 0) {
  FUNC_1(&VAR_5->hr_steady_iterations, 0);
  FUNC_7(&VAR_1);
 }

 FUNC_2(VAR_3);
}
