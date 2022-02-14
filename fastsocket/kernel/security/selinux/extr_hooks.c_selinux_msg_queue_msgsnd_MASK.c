
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct msg_security_struct {scalar_t__ sid; } ;
struct TYPE_4__ {int key; struct ipc_security_struct* security; } ;
struct msg_queue {TYPE_2__ q_perm; } ;
struct msg_msg {struct msg_security_struct* security; } ;
struct ipc_security_struct {scalar_t__ sid; } ;
struct TYPE_3__ {int ipc_id; } ;
struct common_audit_data {TYPE_1__ u; } ;


 int FUNC_0 (struct common_audit_data*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__,scalar_t__,int ,int ,struct common_audit_data*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__,scalar_t__,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(struct msg_queue *VAR_7, struct msg_msg *VAR_8, int VAR_9)
{
 struct ipc_security_struct *VAR_10;
 struct msg_security_struct *VAR_11;
 struct common_audit_data VAR_12;
 u32 VAR_13 = FUNC_2();
 int VAR_14;

 VAR_10 = VAR_7->q_perm.security;
 VAR_11 = VAR_8->security;




 if (VAR_11->sid == VAR_6) {




  VAR_14 = FUNC_3(VAR_13, VAR_10->sid, VAR_4,
          &VAR_11->sid);
  if (VAR_14)
   return VAR_14;
 }

 FUNC_0(&VAR_12, VAR_0);
 VAR_12.u.ipc_id = VAR_7->q_perm.key;


 VAR_14 = FUNC_1(VAR_13, VAR_10->sid, VAR_5,
     VAR_2, &VAR_12);
 if (!VAR_14)

  VAR_14 = FUNC_1(VAR_13, VAR_11->sid, VAR_4,
      VAR_3, &VAR_12);
 if (!VAR_14)

  VAR_14 = FUNC_1(VAR_11->sid, VAR_10->sid, VAR_5,
      VAR_1, &VAR_12);

 return VAR_14;
}
