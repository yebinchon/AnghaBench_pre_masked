
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct socket {struct sock* sk; } ;
struct sockaddr_nl {scalar_t__ nl_family; int nl_groups; scalar_t__ nl_pid; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct netlink_sock {scalar_t__ pid; int* groups; scalar_t__ subscriptions; } ;
struct net {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct socket*) ;
 int FUNC_2 (struct socket*,int ) ;
 int FUNC_3 (struct sock*,struct net*,scalar_t__) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,scalar_t__) ;
 struct netlink_sock* FUNC_9 (struct sock*) ;
 struct net* FUNC_10 (struct sock*) ;

__attribute__((used)) static int FUNC_11(struct socket *VAR_4, struct sockaddr *VAR_5,
   int VAR_6)
{
 struct sock *VAR_7 = VAR_4->sk;
 struct net *VAR_8 = FUNC_10(VAR_7);
 struct netlink_sock *VAR_9 = FUNC_9(VAR_7);
 struct sockaddr_nl *VAR_10 = (struct sockaddr_nl *)VAR_5;
 int VAR_11;

 if (VAR_10->nl_family != VAR_0)
  return -VAR_1;


 if (VAR_10->nl_groups) {
  if (!FUNC_2(VAR_4, VAR_3))
   return -VAR_2;
  VAR_11 = FUNC_4(VAR_7);
  if (VAR_11)
   return VAR_11;
 }

 if (VAR_9->pid) {
  if (VAR_10->nl_pid != VAR_9->pid)
   return -VAR_1;
 } else {
  VAR_11 = VAR_10->nl_pid ?
   FUNC_3(VAR_7, VAR_8, VAR_10->nl_pid) :
   FUNC_1(VAR_4);
  if (VAR_11)
   return VAR_11;
 }

 if (!VAR_10->nl_groups && (VAR_9->groups == ((void*)0) || !(u32)VAR_9->groups[0]))
  return 0;

 FUNC_5();
 FUNC_8(VAR_7, VAR_9->subscriptions +
      FUNC_0(VAR_10->nl_groups) -
      FUNC_0(VAR_9->groups[0]));
 VAR_9->groups[0] = (VAR_9->groups[0] & ~0xffffffffUL) | VAR_10->nl_groups;
 FUNC_7(VAR_7);
 FUNC_6();

 return 0;
}
