
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_nl {int nl_groups; int nl_pid; scalar_t__ nl_pad; int nl_family; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct netlink_sock {int * groups; int pid; int dst_group; int dst_pid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct netlink_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_1, struct sockaddr *VAR_2,
      int *VAR_3, int VAR_4)
{
 struct sock *VAR_5 = VAR_1->sk;
 struct netlink_sock *VAR_6 = FUNC_1(VAR_5);
 struct sockaddr_nl *VAR_7 = (struct sockaddr_nl *)VAR_2;

 VAR_7->nl_family = VAR_0;
 VAR_7->nl_pad = 0;
 *VAR_3 = sizeof(*VAR_7);

 if (VAR_4) {
  VAR_7->nl_pid = VAR_6->dst_pid;
  VAR_7->nl_groups = FUNC_0(VAR_6->dst_group);
 } else {
  VAR_7->nl_pid = VAR_6->pid;
  VAR_7->nl_groups = VAR_6->groups ? VAR_6->groups[0] : 0;
 }
 return 0;
}
