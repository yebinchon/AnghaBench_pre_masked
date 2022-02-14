
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_session {int is_login_cv; struct icl_pdu* is_login_pdu; scalar_t__ is_login_phase; } ;
struct icl_pdu {TYPE_1__* ip_bhs; } ;
struct TYPE_2__ {int bhs_opcode; } ;
 int FUNC_0 (struct iscsi_session*) ;
 int FUNC_1 (struct iscsi_session*) ;
 int FUNC_2 (struct iscsi_session*) ;
 int FUNC_3 (struct iscsi_session*,char*,int) ;
 struct iscsi_session* FUNC_4 (struct icl_pdu*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct icl_pdu*) ;
 int FUNC_7 (struct icl_pdu*) ;
 int FUNC_8 (struct icl_pdu*) ;
 int FUNC_9 (struct icl_pdu*) ;
 int FUNC_10 (struct icl_pdu*) ;
 int FUNC_11 (struct icl_pdu*) ;
 int FUNC_12 (struct icl_pdu*) ;
 int FUNC_13 (struct icl_pdu*) ;
 int FUNC_14 (struct icl_pdu*) ;
 int FUNC_15 (struct icl_pdu*) ;
 int FUNC_16 (struct iscsi_session*) ;

__attribute__((used)) static void
FUNC_17(struct icl_pdu *VAR_0)
{
 struct iscsi_session *VAR_1;

 VAR_1 = FUNC_4(VAR_0);

 FUNC_0(VAR_1);

 FUNC_15(VAR_0);
 switch (VAR_0->ip_bhs->bhs_opcode) {
 case 133:
  FUNC_10(VAR_0);
  FUNC_2(VAR_1);
  break;
 case 129:
  FUNC_13(VAR_0);

  FUNC_1(VAR_1);
  break;
 case 128:
  FUNC_14(VAR_0);
  FUNC_2(VAR_1);
  break;
 case 130:
  FUNC_8(VAR_0);

  FUNC_1(VAR_1);
  break;
 case 134:
  FUNC_9(VAR_0);
  FUNC_2(VAR_1);
  break;
 case 132:
  FUNC_11(VAR_0);
  FUNC_2(VAR_1);
  break;
 case 135:
  FUNC_7(VAR_0);
  FUNC_2(VAR_1);
  break;
 case 131:
  FUNC_12(VAR_0);
  FUNC_2(VAR_1);
  break;
 default:
  FUNC_3(VAR_1, "received PDU with unsupported "
      "opcode 0x%x; reconnecting",
      VAR_0->ip_bhs->bhs_opcode);
  FUNC_16(VAR_1);
  FUNC_2(VAR_1);
  FUNC_6(VAR_0);
 }
}
