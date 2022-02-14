
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ state; struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int sk_max_ack_backlog; scalar_t__ sk_ack_backlog; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (struct socket*) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_5, int VAR_6)
{
 struct sock *VAR_7 = VAR_5->sk;
 int VAR_8 = 0;

 if (VAR_5->state != VAR_2)
  return -VAR_0;
 if (FUNC_1(VAR_5))
  return -VAR_1;

 FUNC_0(VAR_7);
 if (VAR_7->sk_state != VAR_3) {
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_7->sk_state = VAR_4;
 VAR_7->sk_ack_backlog = 0;
 VAR_7->sk_max_ack_backlog = VAR_6;
out:
 FUNC_2(VAR_7);
 return VAR_8;
}
