
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int (* sk_data_ready ) (struct sock*,int ) ;int (* sk_state_change ) (struct sock*) ;int sk_state; } ;
struct TYPE_4__ {struct sock* parent; } ;
struct TYPE_3__ {scalar_t__ conf_state; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct sock*,struct sock*) ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_1)
{
 struct sock *VAR_2 = FUNC_1(VAR_1)->parent;

 FUNC_0("sk %p, parent %p", VAR_1, VAR_2);

 FUNC_2(VAR_1)->conf_state = 0;
 FUNC_3(VAR_1);

 if (!VAR_2) {



  VAR_1->sk_state = VAR_0;
  VAR_1->sk_state_change(VAR_1);
 } else {



  VAR_2->sk_data_ready(VAR_2, 0);
 }
}
