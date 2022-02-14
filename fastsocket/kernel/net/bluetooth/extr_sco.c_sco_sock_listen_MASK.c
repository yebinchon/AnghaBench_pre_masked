
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ type; struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int sk_max_ack_backlog; scalar_t__ sk_ack_backlog; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct sock*,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_4, int VAR_5)
{
 struct sock *VAR_6 = VAR_4->sk;
 int VAR_7 = 0;

 FUNC_0("sk %p backlog %d", VAR_6, VAR_5);

 FUNC_1(VAR_6);

 if (VAR_6->sk_state != VAR_0 || VAR_4->type != VAR_3) {
  VAR_7 = -VAR_2;
  goto done;
 }

 VAR_6->sk_max_ack_backlog = VAR_5;
 VAR_6->sk_ack_backlog = 0;
 VAR_6->sk_state = VAR_1;

done:
 FUNC_2(VAR_6);
 return VAR_7;
}
