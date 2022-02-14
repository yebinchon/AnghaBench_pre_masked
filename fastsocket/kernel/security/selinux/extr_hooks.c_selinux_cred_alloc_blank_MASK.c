
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_security_struct {int dummy; } ;
struct cred {struct task_security_struct* security; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct task_security_struct* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct cred *VAR_1, gfp_t VAR_2)
{
 struct task_security_struct *VAR_3;

 VAR_3 = FUNC_0(sizeof(struct task_security_struct), VAR_2);
 if (!VAR_3)
  return -VAR_0;

 VAR_1->security = VAR_3;
 return 0;
}
