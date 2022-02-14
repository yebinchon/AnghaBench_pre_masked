
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_security_struct {int dummy; } ;
struct msg_msg {struct msg_security_struct* security; } ;


 int FUNC_0 (struct msg_security_struct*) ;

__attribute__((used)) static void FUNC_1(struct msg_msg *VAR_0)
{
 struct msg_security_struct *VAR_1 = VAR_0->security;

 VAR_0->security = ((void*)0);
 FUNC_0(VAR_1);
}
