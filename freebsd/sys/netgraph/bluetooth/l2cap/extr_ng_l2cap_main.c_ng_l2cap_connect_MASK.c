
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* ng_l2cap_p ;
typedef scalar_t__ hook_p ;
struct TYPE_2__ {scalar_t__ hci; scalar_t__ l2c; scalar_t__ ctl; int node; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,scalar_t__,int ,int *,int ) ;

__attribute__((used)) static int
FUNC_4(hook_p VAR_4)
{
 ng_l2cap_p VAR_5 = (ng_l2cap_p) FUNC_2(FUNC_0(VAR_4));
 int VAR_6 = 0;

 if (VAR_4 == VAR_5->hci)
  FUNC_1(VAR_4, VAR_1);
 else
 if (VAR_4 == VAR_5->l2c || VAR_4 == VAR_5->ctl) {
  FUNC_1(VAR_4, VAR_3);


  VAR_6 = FUNC_3(VAR_5->node, VAR_4, VAR_2,
    ((void*)0), 0);
 } else
  VAR_6 = VAR_0;

 return (VAR_6);
}
