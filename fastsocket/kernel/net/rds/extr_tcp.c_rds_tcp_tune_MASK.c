
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_userlocks; void* sk_rcvbuf; void* sk_sndbuf; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct socket*) ;
 int FUNC_2 (struct sock*) ;

void FUNC_3(struct socket *VAR_3)
{
 struct sock *VAR_4 = VAR_3->sk;

 FUNC_1(VAR_3);





 FUNC_0(VAR_4);
 VAR_4->sk_sndbuf = VAR_0;
 VAR_4->sk_rcvbuf = VAR_0;
 VAR_4->sk_userlocks |= VAR_2|VAR_1;
 FUNC_2(VAR_4);
}
