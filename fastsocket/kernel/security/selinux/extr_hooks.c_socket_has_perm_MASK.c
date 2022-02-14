
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct task_struct {int dummy; } ;
struct socket {int sk; } ;
struct inode_security_struct {scalar_t__ sid; int sclass; } ;
struct TYPE_5__ {int sk; } ;
struct TYPE_4__ {TYPE_2__ net; } ;
struct common_audit_data {TYPE_1__ u; } ;
struct TYPE_6__ {struct inode_security_struct* i_security; } ;


 int FUNC_0 (struct common_audit_data*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_1 (struct socket*) ;
 int FUNC_2 (int ,scalar_t__,int ,int ,struct common_audit_data*) ;
 int FUNC_3 (struct task_struct*) ;

__attribute__((used)) static int FUNC_4(struct task_struct *VAR_2, struct socket *VAR_3,
      u32 VAR_4)
{
 struct inode_security_struct *VAR_5;
 struct common_audit_data VAR_6;
 u32 VAR_7;
 int VAR_8 = 0;

 VAR_5 = FUNC_1(VAR_3)->i_security;

 if (VAR_5->sid == VAR_1)
  goto out;
 VAR_7 = FUNC_3(VAR_2);

 FUNC_0(&VAR_6, VAR_0);
 VAR_6.u.net.sk = VAR_3->sk;
 VAR_8 = FUNC_2(VAR_7, VAR_5->sid, VAR_5->sclass, VAR_4, &VAR_6);

out:
 return VAR_8;
}
