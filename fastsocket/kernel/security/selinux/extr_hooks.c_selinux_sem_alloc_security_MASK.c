
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int key; struct ipc_security_struct* security; } ;
struct sem_array {TYPE_2__ sem_perm; } ;
struct ipc_security_struct {int sid; } ;
struct TYPE_4__ {int ipc_id; } ;
struct common_audit_data {TYPE_1__ u; } ;


 int FUNC_0 (struct common_audit_data*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ,struct common_audit_data*) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct sem_array *VAR_4)
{
 struct ipc_security_struct *VAR_5;
 struct common_audit_data VAR_6;
 u32 VAR_7 = FUNC_2();
 int VAR_8;

 VAR_8 = FUNC_3(VAR_3, &VAR_4->sem_perm, VAR_1);
 if (VAR_8)
  return VAR_8;

 VAR_5 = VAR_4->sem_perm.security;

 FUNC_0(&VAR_6, VAR_0);
 VAR_6.u.ipc_id = VAR_4->sem_perm.key;

 VAR_8 = FUNC_1(VAR_7, VAR_5->sid, VAR_1,
     VAR_2, &VAR_6);
 if (VAR_8) {
  FUNC_4(&VAR_4->sem_perm);
  return VAR_8;
 }
 return 0;
}
