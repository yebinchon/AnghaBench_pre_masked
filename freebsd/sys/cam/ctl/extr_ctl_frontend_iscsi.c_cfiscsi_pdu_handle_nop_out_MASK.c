
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_bhs_nop_out {int bhsno_initiator_task_tag; } ;
struct iscsi_bhs_nop_in {int bhsni_flags; int bhsni_initiator_task_tag; int bhsni_target_transfer_tag; int bhsni_opcode; } ;
struct icl_pdu {scalar_t__ ip_bhs; } ;
struct cfiscsi_session {int dummy; } ;


 int FUNC_0 (struct cfiscsi_session*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cfiscsi_session* FUNC_1 (struct icl_pdu*) ;
 struct icl_pdu* FUNC_2 (struct icl_pdu*,int) ;
 int FUNC_3 (struct icl_pdu*) ;
 int FUNC_4 (struct cfiscsi_session*) ;
 int FUNC_5 (void*,int ) ;
 int FUNC_6 (struct icl_pdu*,void*,size_t,int) ;
 size_t FUNC_7 (struct icl_pdu*) ;
 int FUNC_8 (struct icl_pdu*) ;
 int FUNC_9 (struct icl_pdu*,int ,void*,size_t) ;
 void* FUNC_10 (size_t,int ,int) ;

__attribute__((used)) static void
FUNC_11(struct icl_pdu *VAR_4)
{
 struct cfiscsi_session *VAR_5;
 struct iscsi_bhs_nop_out *VAR_6;
 struct iscsi_bhs_nop_in *VAR_7;
 struct icl_pdu *VAR_8;
 void *VAR_9 = ((void*)0);
 size_t VAR_10;
 int VAR_11;

 VAR_5 = FUNC_1(VAR_4);
 VAR_6 = (struct iscsi_bhs_nop_out *)VAR_4->ip_bhs;

 if (VAR_6->bhsno_initiator_task_tag == 0xffffffff) {




  FUNC_8(VAR_4);
  return;
 }

 VAR_10 = FUNC_7(VAR_4);
 if (VAR_10 > 0) {
  VAR_9 = FUNC_10(VAR_10, VAR_1, VAR_2 | VAR_3);
  if (VAR_9 == ((void*)0)) {
   FUNC_0(VAR_5, "failed to allocate memory; "
       "dropping connection");
   FUNC_8(VAR_4);
   FUNC_4(VAR_5);
   return;
  }
  FUNC_9(VAR_4, 0, VAR_9, VAR_10);
 }

 VAR_8 = FUNC_2(VAR_4, VAR_2);
 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_5, "failed to allocate memory; "
      "droppping connection");
  FUNC_5(VAR_9, VAR_1);
  FUNC_8(VAR_4);
  FUNC_4(VAR_5);
  return;
 }
 VAR_7 = (struct iscsi_bhs_nop_in *)VAR_8->ip_bhs;
 VAR_7->bhsni_opcode = VAR_0;
 VAR_7->bhsni_flags = 0x80;
 VAR_7->bhsni_initiator_task_tag = VAR_6->bhsno_initiator_task_tag;
 VAR_7->bhsni_target_transfer_tag = 0xffffffff;
 if (VAR_10 > 0) {
  VAR_11 = FUNC_6(VAR_8, VAR_9, VAR_10, VAR_2);
  if (VAR_11 != 0) {
   FUNC_0(VAR_5, "failed to allocate memory; "
       "dropping connection");
   FUNC_5(VAR_9, VAR_1);
   FUNC_8(VAR_4);
   FUNC_8(VAR_8);
   FUNC_4(VAR_5);
   return;
  }
  FUNC_5(VAR_9, VAR_1);
 }

 FUNC_8(VAR_4);
 FUNC_3(VAR_8);
}
