
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_data_ready; } ;
struct netlink_sock {void (* netlink_rcv ) (struct sk_buff*) ;int flags; } ;
struct net {int dummy; } ;
struct mutex {int dummy; } ;
struct module {int dummy; } ;
struct listeners_rcu_head {int dummy; } ;
struct TYPE_2__ {int registered; unsigned int groups; unsigned long* listeners; struct module* module; struct mutex* cb_mutex; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *,struct socket*,struct mutex*,int) ;
 int VAR_5 ;
 int FUNC_3 (unsigned long*) ;
 unsigned long* FUNC_4 (scalar_t__,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (struct sock*,struct net*,int ) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 TYPE_1__* VAR_7 ;
 struct netlink_sock* FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*,struct net*) ;
 scalar_t__ FUNC_11 (int ,int ,int,struct socket**) ;
 int FUNC_12 (struct socket*) ;

struct sock *
FUNC_13(struct net *VAR_8, int VAR_9, unsigned int VAR_10,
        void (*VAR_11)(struct sk_buff *VAR_12),
        struct mutex *VAR_13, struct module *VAR_14)
{
 struct socket *VAR_15;
 struct sock *VAR_16;
 struct netlink_sock *VAR_17;
 unsigned long *VAR_18 = ((void*)0);

 FUNC_0(!VAR_7);

 if (VAR_9 < 0 || VAR_9 >= VAR_1)
  return ((void*)0);

 if (FUNC_11(VAR_3, VAR_4, VAR_9, &VAR_15))
  return ((void*)0);







 if (FUNC_2(&VAR_5, VAR_15, VAR_13, VAR_9) < 0)
  goto out_sock_release_nosk;

 VAR_16 = VAR_15->sk;
 FUNC_10(VAR_16, VAR_8);

 if (VAR_10 < 32)
  VAR_10 = 32;

 VAR_18 = FUNC_4(FUNC_1(VAR_10) + sizeof(struct listeners_rcu_head),
       VAR_0);
 if (!VAR_18)
  goto out_sock_release;

 VAR_16->sk_data_ready = VAR_6;
 if (VAR_11)
  FUNC_9(VAR_16)->netlink_rcv = VAR_11;

 if (FUNC_5(VAR_16, VAR_8, 0))
  goto out_sock_release;

 VAR_17 = FUNC_9(VAR_16);
 VAR_17->flags |= VAR_2;

 FUNC_7();
 if (!VAR_7[VAR_9].registered) {
  VAR_7[VAR_9].groups = VAR_10;
  VAR_7[VAR_9].listeners = VAR_18;
  VAR_7[VAR_9].cb_mutex = VAR_13;
  VAR_7[VAR_9].module = VAR_14;
  VAR_7[VAR_9].registered = 1;
 } else {
  FUNC_3(VAR_18);
  VAR_7[VAR_9].registered++;
 }
 FUNC_8();
 return VAR_16;

out_sock_release:
 FUNC_3(VAR_18);
 FUNC_6(VAR_16);
 return ((void*)0);

out_sock_release_nosk:
 FUNC_12(VAR_15);
 return ((void*)0);
}
