
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; int (* sk_state_change ) (struct sock*) ;int sk_shutdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ) ;

void FUNC_7(struct sock *VAR_6)
{
 if (VAR_6->sk_state == VAR_5 || VAR_6->sk_state == VAR_4)
  FUNC_0(FUNC_3(VAR_6), VAR_3);

 FUNC_6(VAR_6, VAR_2);
 FUNC_5(VAR_6);

 VAR_6->sk_shutdown = VAR_0;

 if (!FUNC_2(VAR_6, VAR_1))
  VAR_6->sk_state_change(VAR_6);
 else
  FUNC_1(VAR_6);
}
