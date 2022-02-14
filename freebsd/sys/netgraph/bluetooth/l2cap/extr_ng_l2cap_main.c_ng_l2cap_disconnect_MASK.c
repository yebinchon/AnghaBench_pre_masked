
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ng_l2cap_p ;
typedef scalar_t__ hook_p ;
struct TYPE_4__ {scalar_t__ hci; scalar_t__ l2c; scalar_t__ ctl; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(hook_p VAR_1)
{
 ng_l2cap_p VAR_2 = (ng_l2cap_p) FUNC_3(FUNC_0(VAR_1));
 hook_p *VAR_3 = ((void*)0);

 if (VAR_1 == VAR_2->hci) {
  FUNC_4(VAR_2);
  VAR_3 = &VAR_2->hci;
 } else
 if (VAR_1 == VAR_2->l2c) {
  FUNC_5(VAR_2);
  VAR_3 = &VAR_2->l2c;
 } else
 if (VAR_1 == VAR_2->ctl)
  VAR_3 = &VAR_2->ctl;
 else
  return (VAR_0);

 *VAR_3 = ((void*)0);


 if (FUNC_2(FUNC_0(VAR_1)) == 0 &&
     FUNC_1(FUNC_0(VAR_1)))
  FUNC_6(FUNC_0(VAR_1));

 return (0);
}
