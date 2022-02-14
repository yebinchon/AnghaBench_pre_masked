
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; } ;


 int VAR_0 ;
 struct sock* FUNC_0 (struct sock*,int *) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_1)
{
 struct sock *VAR_2;


 while ((VAR_2 = FUNC_0(VAR_1, ((void*)0)))) {
  FUNC_1(VAR_2);
  FUNC_2(VAR_2);
 }

 VAR_1->sk_state = VAR_0;
}
