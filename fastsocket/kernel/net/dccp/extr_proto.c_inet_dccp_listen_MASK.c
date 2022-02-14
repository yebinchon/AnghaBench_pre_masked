
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ state; scalar_t__ type; struct sock* sk; } ;
struct sock {unsigned char sk_state; int sk_max_ack_backlog; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct sock*,int) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;

int FUNC_3(struct socket *VAR_6, int VAR_7)
{
 struct sock *VAR_8 = VAR_6->sk;
 unsigned char VAR_9;
 int VAR_10;

 FUNC_1(VAR_8);

 VAR_10 = -VAR_3;
 if (VAR_6->state != VAR_5 || VAR_6->type != VAR_4)
  goto out;

 VAR_9 = VAR_8->sk_state;
 if (!((1 << VAR_9) & (VAR_0 | VAR_1)))
  goto out;




 if (VAR_9 != VAR_2) {




  VAR_10 = FUNC_0(VAR_8, VAR_7);
  if (VAR_10)
   goto out;
 }
 VAR_8->sk_max_ack_backlog = VAR_7;
 VAR_10 = 0;

out:
 FUNC_2(VAR_8);
 return VAR_10;
}
