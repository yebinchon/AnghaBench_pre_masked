
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_security_struct {scalar_t__ sockcreate_sid; scalar_t__ keycreate_sid; scalar_t__ create_sid; int sid; } ;
struct cred {struct task_security_struct* security; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int *) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct cred *VAR_2, u32 VAR_3)
{
 struct task_security_struct *VAR_4 = VAR_2->security;
 u32 VAR_5 = FUNC_1();
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_3,
      VAR_1,
      VAR_0,
      ((void*)0));
 if (VAR_6 == 0) {
  VAR_4->sid = VAR_3;
  VAR_4->create_sid = 0;
  VAR_4->keycreate_sid = 0;
  VAR_4->sockcreate_sid = 0;
 }
 return VAR_6;
}
