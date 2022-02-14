
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int cred_guard_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct task_struct*,int ) ;

__attribute__((used)) static int FUNC_3(struct task_struct *VAR_2)
{
 int VAR_3 = FUNC_0(&VAR_2->cred_guard_mutex);
 if (VAR_3)
  return VAR_3;
 if (!FUNC_2(VAR_2, VAR_1)) {
  FUNC_1(&VAR_2->cred_guard_mutex);
  return -VAR_0;
 }
 return 0;
}
