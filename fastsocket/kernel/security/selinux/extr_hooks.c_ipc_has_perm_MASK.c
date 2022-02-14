
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kern_ipc_perm {int key; struct ipc_security_struct* security; } ;
struct ipc_security_struct {int sclass; int sid; } ;
struct TYPE_2__ {int ipc_id; } ;
struct common_audit_data {TYPE_1__ u; } ;


 int FUNC_0 (struct common_audit_data*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ,struct common_audit_data*) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct kern_ipc_perm *VAR_1,
   u32 VAR_2)
{
 struct ipc_security_struct *VAR_3;
 struct common_audit_data VAR_4;
 u32 VAR_5 = FUNC_2();

 VAR_3 = VAR_1->security;

 FUNC_0(&VAR_4, VAR_0);
 VAR_4.u.ipc_id = VAR_1->key;

 return FUNC_1(VAR_5, VAR_3->sid, VAR_3->sclass, VAR_2, &VAR_4);
}
