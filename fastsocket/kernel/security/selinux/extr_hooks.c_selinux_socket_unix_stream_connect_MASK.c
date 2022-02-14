
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {TYPE_3__* sk; } ;
struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {int sid; int peer_sid; } ;
struct inode_security_struct {int sid; int sclass; } ;
struct TYPE_5__ {TYPE_3__* sk; } ;
struct TYPE_6__ {TYPE_1__ net; } ;
struct common_audit_data {TYPE_2__ u; } ;
struct TYPE_8__ {struct inode_security_struct* i_security; } ;
struct TYPE_7__ {struct sk_security_struct* sk_security; } ;


 int FUNC_0 (struct common_audit_data*,int ) ;
 int VAR_0 ;
 TYPE_4__* FUNC_1 (struct socket*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ,struct common_audit_data*) ;
 int FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_2,
           struct socket *VAR_3,
           struct sock *VAR_4)
{
 struct sk_security_struct *VAR_5;
 struct inode_security_struct *VAR_6;
 struct inode_security_struct *VAR_7;
 struct common_audit_data VAR_8;
 int VAR_9;

 VAR_6 = FUNC_1(VAR_2)->i_security;
 VAR_7 = FUNC_1(VAR_3)->i_security;

 FUNC_0(&VAR_8, VAR_0);
 VAR_8.u.net.sk = VAR_3->sk;

 VAR_9 = FUNC_2(VAR_6->sid, VAR_7->sid,
      VAR_6->sclass,
      VAR_1, &VAR_8);
 if (VAR_9)
  return VAR_9;


 VAR_5 = VAR_2->sk->sk_security;
 VAR_5->peer_sid = VAR_7->sid;


 VAR_5 = VAR_4->sk_security;
 VAR_5->peer_sid = VAR_6->sid;
 VAR_9 = FUNC_3(VAR_7->sid, VAR_5->peer_sid, &VAR_5->sid);

 return VAR_9;
}
