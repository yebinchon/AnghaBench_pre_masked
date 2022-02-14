
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mbuf {int dummy; } ;
typedef TYPE_1__* ng_l2cap_p ;
typedef int item_p ;
typedef scalar_t__ hook_p ;
struct TYPE_4__ {scalar_t__ hci; scalar_t__ l2c; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mbuf*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,struct mbuf*) ;
 int FUNC_6 (TYPE_1__*,struct mbuf*) ;

__attribute__((used)) static int
FUNC_7(hook_p VAR_1, item_p VAR_2)
{
 ng_l2cap_p VAR_3 = (ng_l2cap_p) FUNC_4(FUNC_3(VAR_1));
 struct mbuf *VAR_4 = ((void*)0);
 int VAR_5 = 0;


 FUNC_0(VAR_2, VAR_4);
 FUNC_1(VAR_2);

 if (VAR_1 == VAR_3->hci)
  VAR_5 = FUNC_6(VAR_3, VAR_4);
 else if (VAR_1 == VAR_3->l2c)
  VAR_5 = FUNC_5(VAR_3, VAR_4);
 else {
  FUNC_2(VAR_4);
  VAR_5 = VAR_0;
 }

 return (VAR_5);
}
