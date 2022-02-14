
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct sock*) ;
 int VAR_1 ;
 struct sock* FUNC_1 (struct sock*,int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_2)
{
 struct sock *VAR_3;

 FUNC_0("parent %p", VAR_2);


 while ((VAR_3 = FUNC_1(VAR_2, ((void*)0)))) {
  FUNC_2(VAR_3);
  FUNC_3(VAR_3);
 }

 VAR_2->sk_state = VAR_0;
 FUNC_4(VAR_2, VAR_1);
}
