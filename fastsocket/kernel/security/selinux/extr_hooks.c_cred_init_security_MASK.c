
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_security_struct {int sid; int osid; } ;
struct cred {struct task_security_struct* security; } ;
struct TYPE_2__ {scalar_t__ real_cred; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct task_security_struct* FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct cred *VAR_3 = (struct cred *) VAR_2->real_cred;
 struct task_security_struct *VAR_4;

 VAR_4 = FUNC_0(sizeof(struct task_security_struct), VAR_0);
 if (!VAR_4)
  FUNC_1("SELinux:  Failed to initialize initial task.\n");

 VAR_4->osid = VAR_4->sid = VAR_1;
 VAR_3->security = VAR_4;
}
