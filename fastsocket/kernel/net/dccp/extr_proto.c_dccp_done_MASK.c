
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int (* sk_state_change ) (struct sock*) ;int sk_shutdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int ) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*) ;

void FUNC_5(struct sock *VAR_3)
{
 FUNC_1(VAR_3, VAR_0);
 FUNC_0(VAR_3);

 VAR_3->sk_shutdown = VAR_1;

 if (!FUNC_3(VAR_3, VAR_2))
  VAR_3->sk_state_change(VAR_3);
 else
  FUNC_2(VAR_3);
}
