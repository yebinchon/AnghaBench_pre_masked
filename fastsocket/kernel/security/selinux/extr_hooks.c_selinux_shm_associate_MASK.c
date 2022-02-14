
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int key; struct ipc_security_struct* security; } ;
struct shmid_kernel {TYPE_2__ shm_perm; } ;
struct ipc_security_struct {int sid; } ;
struct TYPE_3__ {int ipc_id; } ;
struct common_audit_data {TYPE_1__ u; } ;


 int FUNC_0 (struct common_audit_data*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ,struct common_audit_data*) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct shmid_kernel *VAR_3, int VAR_4)
{
 struct ipc_security_struct *VAR_5;
 struct common_audit_data VAR_6;
 u32 VAR_7 = FUNC_2();

 VAR_5 = VAR_3->shm_perm.security;

 FUNC_0(&VAR_6, VAR_0);
 VAR_6.u.ipc_id = VAR_3->shm_perm.key;

 return FUNC_1(VAR_7, VAR_5->sid, VAR_1,
       VAR_2, &VAR_6);
}
