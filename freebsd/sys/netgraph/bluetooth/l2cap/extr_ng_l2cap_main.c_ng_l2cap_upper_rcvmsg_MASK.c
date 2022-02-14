
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int typecookie; int cmd; } ;
struct ng_mesg {TYPE_1__ header; } ;
typedef int node_p ;
typedef int ng_l2cap_p ;
typedef int item_p ;
typedef int hook_p ;


 struct ng_mesg* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,struct ng_mesg*) ;
 int FUNC_5 (int ,struct ng_mesg*) ;
 int FUNC_6 (int ,struct ng_mesg*) ;
 int FUNC_7 (int ,struct ng_mesg*) ;
 int FUNC_8 (int ,struct ng_mesg*) ;
 int FUNC_9 (int ,struct ng_mesg*) ;
 int FUNC_10 (int ,struct ng_mesg*) ;
 int FUNC_11 (int ,struct ng_mesg*) ;
 int FUNC_12 (int ,struct ng_mesg*) ;
 int FUNC_13 (int ,struct ng_mesg*) ;
 int FUNC_14 (int ,struct ng_mesg*) ;
 int FUNC_15 (int ,struct ng_mesg*) ;
 int FUNC_16 (int ,struct ng_mesg*) ;

__attribute__((used)) static int
FUNC_17(node_p VAR_0, item_p VAR_1, hook_p VAR_2)
{
 ng_l2cap_p VAR_3 = (ng_l2cap_p) FUNC_2(VAR_0);
 struct ng_mesg *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = 0;

 switch (VAR_4->header.typecookie) {
 case 141:
  switch (VAR_4->header.cmd) {

  case 138:
   VAR_5 = FUNC_6(VAR_3, VAR_4);
   break;


  case 137:
   VAR_5 = FUNC_7(VAR_3, VAR_4);
   break;


  case 140:
   VAR_5 = FUNC_4(VAR_3, VAR_4);
   break;


  case 139:
   VAR_5 = FUNC_5(VAR_3, VAR_4);
   break;


  case 136:
   VAR_5 = FUNC_8(VAR_3, VAR_4);
   break;


  case 131:
   VAR_5 = FUNC_13(VAR_3, VAR_4);
   break;


  case 132:
   VAR_5 = FUNC_12(VAR_3, VAR_4);
   break;


  case 133:
   VAR_5 = FUNC_11(VAR_3, VAR_4);
   break;


  case 129:
   VAR_5 = FUNC_15(VAR_3, VAR_4);
   break;


  case 130:
   VAR_5 = FUNC_14(VAR_3, VAR_4);
   break;


  case 128:
   VAR_5 = FUNC_16(VAR_3, VAR_4);
   break;


  case 134:
   VAR_5 = FUNC_10(VAR_3, VAR_4);
   break;


  case 135:
   VAR_5 = FUNC_9(VAR_3, VAR_4);
   break;

  default:
   return (FUNC_3(VAR_0, VAR_1, VAR_2));

  }
  break;

 default:
  return (FUNC_3(VAR_0, VAR_1, VAR_2));

 }

 FUNC_1(VAR_1);

 return (VAR_5);
}
