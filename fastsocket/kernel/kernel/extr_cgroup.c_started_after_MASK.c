
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int start_time; } ;


 int FUNC_0 (struct task_struct*,int *,struct task_struct*) ;

__attribute__((used)) static inline int FUNC_1(void *VAR_0, void *VAR_1)
{
 struct task_struct *VAR_2 = VAR_0;
 struct task_struct *VAR_3 = VAR_1;
 return FUNC_0(VAR_2, &VAR_3->start_time, VAR_3);
}
