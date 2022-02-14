
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_security_struct {int dummy; } ;
struct cred {struct task_security_struct* security; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int FUNC_1 (struct task_security_struct*) ;

__attribute__((used)) static void FUNC_2(struct cred *VAR_1)
{
 struct task_security_struct *VAR_2 = VAR_1->security;

 FUNC_0((unsigned long) VAR_1->security < VAR_0);
 VAR_1->security = (void *) 0x7UL;
 FUNC_1(VAR_2);
}
