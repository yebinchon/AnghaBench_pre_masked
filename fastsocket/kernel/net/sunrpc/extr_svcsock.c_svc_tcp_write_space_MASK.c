
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int flags; } ;
struct sock {struct socket* sk_socket; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_1)
{
 struct socket *VAR_2 = VAR_1->sk_socket;

 if (FUNC_2(VAR_1) >= FUNC_1(VAR_1) && VAR_2)
  FUNC_0(VAR_0, &VAR_2->flags);
 FUNC_3(VAR_1);
}
