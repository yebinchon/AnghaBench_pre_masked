
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_bhs_logout_response {int bhslr_flags; int bhslr_initiator_task_tag; int bhslr_response; void* bhslr_opcode; } ;
struct iscsi_bhs_logout_request {int bhslr_reason; int bhslr_initiator_task_tag; } ;
struct icl_pdu {scalar_t__ ip_bhs; } ;
struct cfiscsi_session {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cfiscsi_session*,char*) ;
 int FUNC_1 (struct cfiscsi_session*,char*,...) ;
 void* VAR_2 ;
 int VAR_3 ;
 struct cfiscsi_session* FUNC_2 (struct icl_pdu*) ;
 struct icl_pdu* FUNC_3 (struct icl_pdu*,int ) ;
 int FUNC_4 (struct icl_pdu*) ;
 int FUNC_5 (struct cfiscsi_session*) ;
 int FUNC_6 (struct icl_pdu*) ;

__attribute__((used)) static void
FUNC_7(struct icl_pdu *VAR_4)
{
 struct iscsi_bhs_logout_request *VAR_5;
 struct iscsi_bhs_logout_response *VAR_6;
 struct icl_pdu *VAR_7;
 struct cfiscsi_session *VAR_8;

 VAR_8 = FUNC_2(VAR_4);
 VAR_5 = (struct iscsi_bhs_logout_request *)VAR_4->ip_bhs;
 switch (VAR_5->bhslr_reason & 0x7f) {
 case 129:
 case 130:
  VAR_7 = FUNC_3(VAR_4, VAR_3);
  if (VAR_7 == ((void*)0)) {
   FUNC_0(VAR_8, "failed to allocate memory");
   FUNC_6(VAR_4);
   FUNC_5(VAR_8);
   return;
  }
  VAR_6 = (struct iscsi_bhs_logout_response *)VAR_7->ip_bhs;
  VAR_6->bhslr_opcode = VAR_2;
  VAR_6->bhslr_flags = 0x80;
  VAR_6->bhslr_response = VAR_0;
  VAR_6->bhslr_initiator_task_tag =
      VAR_5->bhslr_initiator_task_tag;
  FUNC_6(VAR_4);
  FUNC_4(VAR_7);
  FUNC_5(VAR_8);
  break;
 case 128:
  VAR_7 = FUNC_3(VAR_4, VAR_3);
  if (VAR_7 == ((void*)0)) {
   FUNC_1(VAR_8,
       "failed to allocate memory; dropping connection");
   FUNC_6(VAR_4);
   FUNC_5(VAR_8);
   return;
  }
  VAR_6 = (struct iscsi_bhs_logout_response *)VAR_7->ip_bhs;
  VAR_6->bhslr_opcode = VAR_2;
  VAR_6->bhslr_flags = 0x80;
  VAR_6->bhslr_response = VAR_1;
  VAR_6->bhslr_initiator_task_tag =
      VAR_5->bhslr_initiator_task_tag;
  FUNC_6(VAR_4);
  FUNC_4(VAR_7);
  break;
 default:
  FUNC_1(VAR_8, "invalid reason 0%x; dropping connection",
      VAR_5->bhslr_reason);
  FUNC_6(VAR_4);
  FUNC_5(VAR_8);
  break;
 }
}
