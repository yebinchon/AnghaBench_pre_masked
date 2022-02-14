
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_err; int (* sk_state_change ) (struct sock*) ;int sk_shutdown; } ;
struct atm_vcc {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 struct sock* FUNC_2 (struct atm_vcc*) ;
 int FUNC_3 (struct sock*) ;

void FUNC_4(struct atm_vcc *VAR_3, int VAR_4)
{
 struct sock *VAR_5 = FUNC_2(VAR_3);

 FUNC_1(VAR_0, &VAR_3->flags);
 VAR_5->sk_shutdown |= VAR_2;
 VAR_5->sk_err = -VAR_4;
 FUNC_0(VAR_1, &VAR_3->flags);
 VAR_5->sk_state_change(VAR_5);
}
