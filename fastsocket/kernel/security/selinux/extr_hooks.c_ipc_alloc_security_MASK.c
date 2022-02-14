
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct task_struct {int dummy; } ;
struct kern_ipc_perm {struct ipc_security_struct* security; } ;
struct ipc_security_struct {int sid; int sclass; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipc_security_struct* FUNC_0 (int,int ) ;
 int FUNC_1 (struct task_struct*) ;

__attribute__((used)) static int FUNC_2(struct task_struct *VAR_2,
         struct kern_ipc_perm *VAR_3,
         u16 VAR_4)
{
 struct ipc_security_struct *VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_0(sizeof(struct ipc_security_struct), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_2);
 VAR_5->sclass = VAR_4;
 VAR_5->sid = VAR_6;
 VAR_3->security = VAR_5;

 return 0;
}
