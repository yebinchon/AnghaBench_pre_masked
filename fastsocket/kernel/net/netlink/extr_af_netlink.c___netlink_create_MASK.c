
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int * ops; } ;
struct sock {int sk_protocol; int sk_destruct; } ;
struct mutex {int dummy; } ;
struct netlink_sock {int wait; struct mutex* cb_mutex; struct mutex cb_def_mutex; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mutex*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct netlink_sock* FUNC_2 (struct sock*) ;
 struct sock* FUNC_3 (struct net*,int ,int ,int *) ;
 int FUNC_4 (struct socket*,struct sock*) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_6, struct socket *VAR_7,
       struct mutex *VAR_8, int VAR_9)
{
 struct sock *VAR_10;
 struct netlink_sock *VAR_11;

 VAR_7->ops = &VAR_3;

 VAR_10 = FUNC_3(VAR_6, VAR_2, VAR_1, &VAR_4);
 if (!VAR_10)
  return -VAR_0;

 FUNC_4(VAR_7, VAR_10);

 VAR_11 = FUNC_2(VAR_10);
 if (VAR_8)
  VAR_11->cb_mutex = VAR_8;
 else {
  VAR_11->cb_mutex = &VAR_11->cb_def_mutex;
  FUNC_1(VAR_11->cb_mutex);
 }
 FUNC_0(&VAR_11->wait);

 VAR_10->sk_destruct = VAR_5;
 VAR_10->sk_protocol = VAR_9;
 return 0;
}
