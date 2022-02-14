
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct llc_conn_state_trans {int (* ev_actions ) (struct sock*,struct sk_buff*) ;} ;
typedef int (* llc_conn_action_t ) (struct sock*,struct sk_buff*) ;


 int FUNC_0 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_1(struct sock *VAR_0,
           struct llc_conn_state_trans *VAR_1,
           struct sk_buff *VAR_2)
{
 int VAR_3 = 0;
 llc_conn_action_t *VAR_4;

 for (VAR_4 = &VAR_1->ev_actions;
      VAR_4 && *VAR_4; VAR_4++) {
  int VAR_5 = (*VAR_4)(VAR_0, VAR_2);

  if (VAR_5 == 2) {
   VAR_3 = VAR_5;
   break;
  } else if (VAR_5)
   VAR_3 = 1;
 }
 return VAR_3;
}
