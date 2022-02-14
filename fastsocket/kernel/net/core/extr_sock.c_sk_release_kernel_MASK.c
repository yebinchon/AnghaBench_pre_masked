
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int * sk_socket; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct sock *VAR_1)
{
 if (VAR_1 == ((void*)0) || VAR_1->sk_socket == ((void*)0))
  return;

 FUNC_2(VAR_1);
 FUNC_6(VAR_1->sk_socket);
 FUNC_1(FUNC_3(VAR_1));
 FUNC_4(VAR_1, FUNC_0(&VAR_0));
 FUNC_5(VAR_1);
}
