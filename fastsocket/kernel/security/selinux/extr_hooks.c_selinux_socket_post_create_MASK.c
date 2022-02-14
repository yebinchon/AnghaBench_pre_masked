
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct task_security_struct {void* sockcreate_sid; void* sid; } ;
struct socket {TYPE_1__* sk; } ;
struct sk_security_struct {int sclass; void* sid; } ;
struct inode_security_struct {int initialized; int sclass; void* sid; } ;
struct cred {struct task_security_struct* security; } ;
struct TYPE_4__ {struct inode_security_struct* i_security; } ;
struct TYPE_3__ {struct sk_security_struct* sk_security; } ;


 void* VAR_0 ;
 TYPE_2__* FUNC_0 (struct socket*) ;
 struct cred* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int,int,int) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_1, int VAR_2,
          int VAR_3, int VAR_4, int VAR_5)
{
 const struct cred *VAR_6 = FUNC_1();
 const struct task_security_struct *VAR_7 = VAR_6->security;
 struct inode_security_struct *VAR_8;
 struct sk_security_struct *VAR_9;
 u32 VAR_10, VAR_11;
 int VAR_12 = 0;

 VAR_10 = VAR_7->sid;
 VAR_11 = VAR_7->sockcreate_sid;

 VAR_8 = FUNC_0(VAR_1)->i_security;

 if (VAR_5)
  VAR_8->sid = VAR_0;
 else if (VAR_11)
  VAR_8->sid = VAR_11;
 else
  VAR_8->sid = VAR_10;

 VAR_8->sclass = FUNC_3(VAR_2, VAR_3, VAR_4);
 VAR_8->initialized = 1;

 if (VAR_1->sk) {
  VAR_9 = VAR_1->sk->sk_security;
  VAR_9->sid = VAR_8->sid;
  VAR_9->sclass = VAR_8->sclass;
  VAR_12 = FUNC_2(VAR_1->sk, VAR_2);
 }

 return VAR_12;
}
