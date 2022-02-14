
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct task_struct {int dummy; } ;
struct msg_security_struct {int sid; } ;
struct TYPE_4__ {int key; struct ipc_security_struct* security; } ;
struct msg_queue {TYPE_2__ q_perm; } ;
struct msg_msg {struct msg_security_struct* security; } ;
struct ipc_security_struct {int sid; } ;
struct TYPE_3__ {int ipc_id; } ;
struct common_audit_data {TYPE_1__ u; } ;


 int FUNC_0 (struct common_audit_data*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ,struct common_audit_data*) ;
 int FUNC_2 (struct task_struct*) ;

__attribute__((used)) static int FUNC_3(struct msg_queue *VAR_5, struct msg_msg *VAR_6,
        struct task_struct *VAR_7,
        long VAR_8, int VAR_9)
{
 struct ipc_security_struct *VAR_10;
 struct msg_security_struct *VAR_11;
 struct common_audit_data VAR_12;
 u32 VAR_13 = FUNC_2(VAR_7);
 int VAR_14;

 VAR_10 = VAR_5->q_perm.security;
 VAR_11 = VAR_6->security;

 FUNC_0(&VAR_12, VAR_0);
 VAR_12.u.ipc_id = VAR_5->q_perm.key;

 VAR_14 = FUNC_1(VAR_13, VAR_10->sid,
     VAR_4, VAR_1, &VAR_12);
 if (!VAR_14)
  VAR_14 = FUNC_1(VAR_13, VAR_11->sid,
      VAR_3, VAR_2, &VAR_12);
 return VAR_14;
}
