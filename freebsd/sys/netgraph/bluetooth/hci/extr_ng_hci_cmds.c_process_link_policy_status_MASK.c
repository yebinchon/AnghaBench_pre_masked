
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mbuf {int dummy; } ;
typedef int ng_hci_unit_p ;
struct TYPE_3__ {int opcode; } ;
typedef TYPE_1__ ng_hci_command_status_ep ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (int ) ;
__attribute__((used)) static int
FUNC_2(ng_hci_unit_p VAR_1, ng_hci_command_status_ep *VAR_2,
  struct mbuf *VAR_3)
{
 int VAR_4 = 0;

 switch (FUNC_1(VAR_2->opcode)) {
 case 135:
 case 130:
 case 136:
 case 134:
 case 137:
 case 129:

  break;

 case 133:
  break;

 case 131:
 case 132:
 case 128:
 default:







  VAR_4 = VAR_0;
  break;
 }

 FUNC_0(VAR_3);

 return (VAR_4);
}
