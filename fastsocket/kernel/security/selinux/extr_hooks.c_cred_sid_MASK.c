
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_security_struct {int sid; } ;
struct cred {struct task_security_struct* security; } ;



__attribute__((used)) static inline u32 FUNC_0(const struct cred *VAR_0)
{
 const struct task_security_struct *VAR_1;

 VAR_1 = VAR_0->security;
 return VAR_1->sid;
}
