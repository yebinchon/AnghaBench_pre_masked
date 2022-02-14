
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kern_ipc_perm {struct ipc_security_struct* security; } ;
struct ipc_security_struct {int sid; } ;



__attribute__((used)) static void FUNC_0(struct kern_ipc_perm *VAR_0, u32 *VAR_1)
{
 struct ipc_security_struct *VAR_2 = VAR_0->security;
 *VAR_1 = VAR_2->sid;
}
