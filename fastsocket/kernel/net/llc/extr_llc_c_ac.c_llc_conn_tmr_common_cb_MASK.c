
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct llc_conn_state_ev {int type; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct llc_conn_state_ev* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,struct sock*) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_1, u8 VAR_2)
{
 struct sock *VAR_3 = (struct sock *)VAR_1;
 struct sk_buff *VAR_4 = FUNC_0(0, VAR_0);

 FUNC_1(VAR_3);
 if (VAR_4) {
  struct llc_conn_state_ev *VAR_5 = FUNC_3(VAR_4);

  FUNC_5(VAR_4, VAR_3);
  VAR_5->type = VAR_2;
  FUNC_4(VAR_3, VAR_4);
 }
 FUNC_2(VAR_3);
}
