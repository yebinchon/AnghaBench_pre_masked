
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int sk_max_ack_backlog; scalar_t__ sk_ack_backlog; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct sock*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_4, int VAR_5)
{
 struct sock *VAR_6 = VAR_4->sk;
 int VAR_7 = -VAR_1;

 FUNC_2(VAR_6);

 if (FUNC_4(VAR_6, VAR_2))
  goto out;

 if ((FUNC_0(VAR_6)->state != VAR_0) || (VAR_6->sk_state == VAR_3))
  goto out;

 VAR_6->sk_max_ack_backlog = VAR_5;
 VAR_6->sk_ack_backlog = 0;
 VAR_6->sk_state = VAR_3;
 VAR_7 = 0;
 FUNC_1(VAR_6);

out:
 FUNC_3(VAR_6);

 return VAR_7;
}
