
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int (* sk_state_change ) (struct sock*) ;int sk_err; int sk_state; } ;


 int FUNC_0 (char*,struct sock*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_1)
{
 struct sock *VAR_2 = (struct sock *) VAR_1;

 FUNC_0("sock %p state %d", VAR_2, VAR_2->sk_state);

 FUNC_1(VAR_2);
 VAR_2->sk_err = VAR_0;
 VAR_2->sk_state_change(VAR_2);
 FUNC_2(VAR_2);

 FUNC_3(VAR_2);
 FUNC_4(VAR_2);
}
