
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_nl {scalar_t__ nl_groups; scalar_t__ nl_pid; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct sock {int sk_state; } ;
struct netlink_sock {scalar_t__ dst_group; scalar_t__ dst_pid; int pid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct socket*) ;
 int FUNC_2 (struct socket*,int ) ;
 struct netlink_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_7, struct sockaddr *VAR_8,
      int VAR_9, int VAR_10)
{
 int VAR_11 = 0;
 struct sock *VAR_12 = VAR_7->sk;
 struct netlink_sock *VAR_13 = FUNC_3(VAR_12);
 struct sockaddr_nl *VAR_14 = (struct sockaddr_nl *)VAR_8;

 if (VAR_8->sa_family == VAR_1) {
  VAR_12->sk_state = VAR_5;
  VAR_13->dst_pid = 0;
  VAR_13->dst_group = 0;
  return 0;
 }
 if (VAR_8->sa_family != VAR_0)
  return -VAR_2;


 if (VAR_14->nl_groups && !FUNC_2(VAR_7, VAR_6))
  return -VAR_3;

 if (!VAR_13->pid)
  VAR_11 = FUNC_1(VAR_7);

 if (VAR_11 == 0) {
  VAR_12->sk_state = VAR_4;
  VAR_13->dst_pid = VAR_14->nl_pid;
  VAR_13->dst_group = FUNC_0(VAR_14->nl_groups);
 }

 return VAR_11;
}
