
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int state; struct sock* sk; } ;
struct sock {int sk_state; TYPE_1__* sk_prot; } ;
struct TYPE_2__ {struct sock* (* accept ) (struct sock*,int,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,struct socket*) ;
 struct sock* FUNC_5 (struct sock*,int,int*) ;

int FUNC_6(struct socket *VAR_5, struct socket *VAR_6, int VAR_7)
{
 struct sock *VAR_8 = VAR_5->sk;
 int VAR_9 = -VAR_0;
 struct sock *VAR_10 = VAR_8->sk_prot->accept(VAR_8, VAR_7, &VAR_9);

 if (!VAR_10)
  goto do_err;

 FUNC_2(VAR_10);

 FUNC_1(VAR_10);

 FUNC_0(!((1 << VAR_10->sk_state) &
    (VAR_4 | VAR_3 | VAR_2)));

 FUNC_4(VAR_10, VAR_6);

 VAR_6->state = VAR_1;
 VAR_9 = 0;
 FUNC_3(VAR_10);
do_err:
 return VAR_9;
}
