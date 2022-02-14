
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct socket {int dummy; } ;
struct sock {struct socket* sk_socket; } ;
struct sk_buff {scalar_t__ len; } ;
struct nlmsghdr {int nlmsg_type; } ;
struct inode_security_struct {int sclass; } ;
struct TYPE_5__ {struct inode_security_struct* i_security; } ;
struct TYPE_4__ {int audit_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (struct socket*) ;
 int FUNC_2 (int ,int ,int ,char*,int ,int ) ;
 TYPE_1__* VAR_4 ;
 struct nlmsghdr* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 () ;
 int VAR_5 ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (TYPE_1__*,struct socket*,int ) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_6, struct sk_buff *VAR_7)
{
 int VAR_8 = 0;
 u32 VAR_9;
 struct nlmsghdr *VAR_10;
 struct socket *VAR_11 = VAR_6->sk_socket;
 struct inode_security_struct *VAR_12 = FUNC_1(VAR_11)->i_security;

 if (VAR_7->len < FUNC_0(0)) {
  VAR_8 = -VAR_1;
  goto out;
 }
 VAR_10 = FUNC_3(VAR_7);

 VAR_8 = FUNC_5(VAR_12->sclass, VAR_10->nlmsg_type, &VAR_9);
 if (VAR_8) {
  if (VAR_8 == -VAR_1) {
   FUNC_2(VAR_4->audit_context, VAR_3, VAR_0,
      "SELinux:  unrecognized netlink message"
      " type=%hu for sclass=%hu\n",
      VAR_10->nlmsg_type, VAR_12->sclass);
   if (!VAR_5 || FUNC_4())
    VAR_8 = 0;
  }


  if (VAR_8 == -VAR_2)
   VAR_8 = 0;
  goto out;
 }

 VAR_8 = FUNC_6(VAR_4, VAR_11, VAR_9);
out:
 return VAR_8;
}
