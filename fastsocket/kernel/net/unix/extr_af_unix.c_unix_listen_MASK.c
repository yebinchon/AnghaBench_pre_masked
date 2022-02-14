
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unix_sock {int peer_wait; int addr; } ;
struct socket {scalar_t__ type; struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int sk_max_ack_backlog; } ;
struct pid {int dummy; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct cred const*) ;
 int FUNC_2 (struct pid*) ;
 struct unix_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct socket *VAR_6, int VAR_7)
{
 int VAR_8;
 struct sock *VAR_9 = VAR_6->sk;
 struct unix_sock *VAR_10 = FUNC_3(VAR_9);
 struct pid *VAR_11 = ((void*)0);
 const struct cred *VAR_12 = ((void*)0);

 VAR_8 = -VAR_1;
 if (VAR_6->type != VAR_3 && VAR_6->type != VAR_2)
  goto out;
 VAR_8 = -VAR_0;
 if (!VAR_10->addr)
  goto out;
 FUNC_4(VAR_9);
 if (VAR_9->sk_state != VAR_4 && VAR_9->sk_state != VAR_5)
  goto out_unlock;
 if (VAR_7 > VAR_9->sk_max_ack_backlog)
  FUNC_6(&VAR_10->peer_wait);
 VAR_9->sk_max_ack_backlog = VAR_7;
 VAR_9->sk_state = VAR_5;

 FUNC_0(VAR_9);
 VAR_8 = 0;

out_unlock:
 FUNC_5(VAR_9);
 FUNC_2(VAR_11);
 if (VAR_12)
  FUNC_1(VAR_12);
out:
 return VAR_8;
}
