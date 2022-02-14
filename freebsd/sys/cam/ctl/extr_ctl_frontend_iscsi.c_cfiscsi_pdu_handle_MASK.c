
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icl_pdu {TYPE_1__* ip_bhs; } ;
struct cfiscsi_session {int dummy; } ;
struct TYPE_2__ {int bhs_opcode; } ;


 int FUNC_0 (struct cfiscsi_session*,char*,int) ;
 int VAR_0 ;





 struct cfiscsi_session* FUNC_1 (struct icl_pdu*) ;
 int FUNC_2 (struct icl_pdu*) ;
 int FUNC_3 (struct icl_pdu*) ;
 int FUNC_4 (struct icl_pdu*) ;
 int FUNC_5 (struct icl_pdu*) ;
 int FUNC_6 (struct icl_pdu*) ;
 int FUNC_7 (struct icl_pdu*) ;
 int FUNC_8 (struct cfiscsi_session*) ;
 int FUNC_9 (struct icl_pdu*) ;

__attribute__((used)) static void
FUNC_10(struct icl_pdu *VAR_1)
{
 struct cfiscsi_session *VAR_2;
 bool VAR_3;

 VAR_2 = FUNC_1(VAR_1);

 VAR_3 = FUNC_7(VAR_1);
 if (VAR_3) {
  FUNC_9(VAR_1);
  return;
 }







 switch (VAR_1->ip_bhs->bhs_opcode &
     ~VAR_0) {
 case 131:
  FUNC_4(VAR_1);
  break;
 case 130:
  FUNC_5(VAR_1);
  break;
 case 128:
  FUNC_6(VAR_1);
  break;
 case 129:
  FUNC_2(VAR_1);
  break;
 case 132:
  FUNC_3(VAR_1);
  break;
 default:
  FUNC_0(VAR_2, "received PDU with unsupported "
      "opcode 0x%x; dropping connection",
      VAR_1->ip_bhs->bhs_opcode);
  FUNC_9(VAR_1);
  FUNC_8(VAR_2);
 }

}
