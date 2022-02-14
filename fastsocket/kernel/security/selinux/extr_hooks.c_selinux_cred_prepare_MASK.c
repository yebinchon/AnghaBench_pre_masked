
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_security_struct {int dummy; } ;
struct cred {struct task_security_struct* security; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct task_security_struct* FUNC_0 (struct task_security_struct const*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct cred *VAR_1, const struct cred *VAR_2,
    gfp_t VAR_3)
{
 const struct task_security_struct *VAR_4;
 struct task_security_struct *VAR_5;

 VAR_4 = VAR_2->security;

 VAR_5 = FUNC_0(VAR_4, sizeof(struct task_security_struct), VAR_3);
 if (!VAR_5)
  return -VAR_0;

 VAR_1->security = VAR_5;
 return 0;
}
