
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_security_struct {int dummy; } ;
struct cred {struct task_security_struct* security; } ;



__attribute__((used)) static void FUNC_0(struct cred *VAR_0, const struct cred *VAR_1)
{
 const struct task_security_struct *VAR_2 = VAR_1->security;
 struct task_security_struct *VAR_3 = VAR_0->security;

 *VAR_3 = *VAR_2;
}
