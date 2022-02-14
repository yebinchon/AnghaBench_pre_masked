
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct llc_sock {int state; } ;
struct llc_conn_state_trans {int (* ev_qualifiers ) (struct sock*,struct sk_buff*) ;int (* ev ) (struct sock*,struct sk_buff*) ;} ;
struct llc_conn_state_ev {int type; } ;
struct llc_conn_state {struct llc_conn_state_trans** transitions; } ;
typedef int (* llc_conn_ev_qfyr_t ) (struct sock*,struct sk_buff*) ;


 struct llc_conn_state_ev* FUNC_0 (struct sk_buff*) ;
 struct llc_conn_state* VAR_0 ;
 int FUNC_1 (int,int ) ;
 struct llc_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static struct llc_conn_state_trans *FUNC_5(struct sock *VAR_1,
       struct sk_buff *VAR_2)
{
 struct llc_conn_state_trans **VAR_3;
 llc_conn_ev_qfyr_t *VAR_4;
 struct llc_conn_state_ev *VAR_5 = FUNC_0(VAR_2);
 struct llc_sock *VAR_6 = FUNC_2(VAR_1);
 struct llc_conn_state *VAR_7 =
     &VAR_0[VAR_6->state - 1];




 for (VAR_3 = VAR_7->transitions +
  FUNC_1(VAR_6->state - 1, VAR_5->type);
      (*VAR_3)->ev; VAR_3++) {
  if (!((*VAR_3)->ev)(VAR_1, VAR_2)) {






   for (VAR_4 = &(*VAR_3)->ev_qualifiers;
        VAR_4 && *VAR_4 &&
        !(*VAR_4)(VAR_1, VAR_2); VAR_4++)
                 ;
   if (!VAR_4 || !*VAR_4)




    return *VAR_3;
  }
 }
 return ((void*)0);
}
