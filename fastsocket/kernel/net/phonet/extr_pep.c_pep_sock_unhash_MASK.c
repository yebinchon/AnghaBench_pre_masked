
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_state; } ;
struct TYPE_2__ {int sk; } ;
struct pep_sock {TYPE_1__ pn_sk; int hlist; struct sock* listener; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct sock*) ;
 struct pep_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_2)
{
 struct pep_sock *VAR_3 = FUNC_2(VAR_2);
 struct sock *VAR_4 = ((void*)0);

 FUNC_1(VAR_2);
 if ((1 << VAR_2->sk_state) & ~(VAR_0|VAR_1)) {
  VAR_4 = VAR_3->listener;
  FUNC_5(VAR_2);
  FUNC_4(VAR_2);

  VAR_2 = VAR_4;
  VAR_3 = FUNC_2(VAR_4);
  FUNC_1(VAR_2);
 }


 if (FUNC_0(&VAR_3->hlist))
  FUNC_3(&VAR_3->pn_sk.sk);
 FUNC_4(VAR_2);

 if (VAR_4)
  FUNC_6(VAR_4);
}
