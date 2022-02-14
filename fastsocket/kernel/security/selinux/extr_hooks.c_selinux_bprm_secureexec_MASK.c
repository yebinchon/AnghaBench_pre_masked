
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct task_security_struct {scalar_t__ sid; scalar_t__ osid; } ;
struct linux_binprm {int dummy; } ;
struct cred {struct task_security_struct* security; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ,int ,int *) ;
 scalar_t__ FUNC_1 (struct linux_binprm*) ;
 struct cred* FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct linux_binprm *VAR_2)
{
 const struct cred *VAR_3 = FUNC_2();
 const struct task_security_struct *VAR_4 = VAR_3->security;
 u32 VAR_5, VAR_6;
 int VAR_7 = 0;

 VAR_5 = VAR_4->sid;
 VAR_6 = VAR_4->osid;

 if (VAR_6 != VAR_5) {



  VAR_7 = FUNC_0(VAR_6, VAR_5,
     VAR_1,
     VAR_0, ((void*)0));
 }

 return (VAR_7 || FUNC_1(VAR_2));
}
