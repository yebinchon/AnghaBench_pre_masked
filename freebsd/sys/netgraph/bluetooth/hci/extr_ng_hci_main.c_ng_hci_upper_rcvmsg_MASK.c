
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int node_p ;
typedef int ng_hci_unit_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_3__ {int typecookie; int cmd; } ;
struct TYPE_4__ {TYPE_1__ header; } ;


 TYPE_2__* FUNC_0 (int ) ;





 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_7(node_p VAR_0, item_p VAR_1, hook_p VAR_2)
{
 ng_hci_unit_p VAR_3 = (ng_hci_unit_p) FUNC_1(VAR_0);
 int VAR_4 = 0;

 switch (FUNC_0(VAR_1)->header.typecookie) {
 case 132:
  switch (FUNC_0(VAR_1)->header.cmd) {
  case 131:
   VAR_4 = FUNC_3(VAR_3, VAR_1, VAR_2);
   break;

  case 129:
   VAR_4 = FUNC_5(VAR_3, VAR_1, VAR_2);
   break;

  case 130:
   VAR_4 = FUNC_4(VAR_3, VAR_1, VAR_2);
   break;

  case 128:
   VAR_4 = FUNC_6(VAR_3, VAR_1, VAR_2);
   break;

  default:
   VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
   break;
  }
  break;

 default:
  VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
  break;
 }

 return (VAR_4);
}
