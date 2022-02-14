
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct cred {int cap_effective; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;

int FUNC_1(struct task_struct *VAR_1, const struct cred *VAR_2, int VAR_3,
  int VAR_4)
{
 return FUNC_0(VAR_2->cap_effective, VAR_3) ? 0 : -VAR_0;
}
