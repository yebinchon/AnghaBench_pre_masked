
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {int sk; } ;
struct inode_security_struct {int sclass; int sid; } ;
struct TYPE_4__ {int sk; } ;
struct TYPE_5__ {TYPE_1__ net; } ;
struct common_audit_data {TYPE_2__ u; } ;
struct TYPE_6__ {struct inode_security_struct* i_security; } ;


 int FUNC_0 (struct common_audit_data*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (struct socket*) ;
 int FUNC_2 (int ,int ,int ,int ,struct common_audit_data*) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_2,
     struct socket *VAR_3)
{
 struct inode_security_struct *VAR_4;
 struct inode_security_struct *VAR_5;
 struct common_audit_data VAR_6;
 int VAR_7;

 VAR_4 = FUNC_1(VAR_2)->i_security;
 VAR_5 = FUNC_1(VAR_3)->i_security;

 FUNC_0(&VAR_6, VAR_0);
 VAR_6.u.net.sk = VAR_3->sk;

 VAR_7 = FUNC_2(VAR_4->sid, VAR_5->sid,
      VAR_4->sclass, VAR_1, &VAR_6);
 if (VAR_7)
  return VAR_7;

 return 0;
}
