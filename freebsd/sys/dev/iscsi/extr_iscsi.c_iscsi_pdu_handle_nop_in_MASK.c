
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int dummy; } ;
struct iscsi_bhs_nop_out {int bhsno_opcode; int bhsno_flags; int bhsno_initiator_task_tag; int bhsno_target_transfer_tag; } ;
struct iscsi_bhs_nop_in {int bhsni_target_transfer_tag; } ;
struct icl_pdu {scalar_t__ ip_bhs; int ip_conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iscsi_session*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct iscsi_session* FUNC_1 (struct icl_pdu*) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (struct icl_pdu*,void*,size_t,int) ;
 size_t FUNC_4 (struct icl_pdu*) ;
 int FUNC_5 (struct icl_pdu*) ;
 int FUNC_6 (struct icl_pdu*,int ,void*,size_t) ;
 struct icl_pdu* FUNC_7 (int ,int) ;
 int FUNC_8 (struct icl_pdu*) ;
 int FUNC_9 (struct iscsi_session*) ;
 void* FUNC_10 (size_t,int ,int) ;

__attribute__((used)) static void
FUNC_11(struct icl_pdu *VAR_5)
{
 struct iscsi_session *VAR_6;
 struct iscsi_bhs_nop_out *VAR_7;
 struct iscsi_bhs_nop_in *VAR_8;
 struct icl_pdu *VAR_9;
 void *VAR_10 = ((void*)0);
 size_t VAR_11;
 int VAR_12;

 VAR_6 = FUNC_1(VAR_5);
 VAR_8 = (struct iscsi_bhs_nop_in *)VAR_5->ip_bhs;

 if (VAR_8->bhsni_target_transfer_tag == 0xffffffff) {




  FUNC_5(VAR_5);
  return;
 }

 VAR_11 = FUNC_4(VAR_5);
 if (VAR_11 > 0) {
  VAR_10 = FUNC_10(VAR_11, VAR_2, VAR_3 | VAR_4);
  if (VAR_10 == ((void*)0)) {
   FUNC_0(VAR_6, "failed to allocate memory; "
       "reconnecting");
   FUNC_5(VAR_5);
   FUNC_9(VAR_6);
   return;
  }
  FUNC_6(VAR_5, 0, VAR_10, VAR_11);
 }

 VAR_9 = FUNC_7(VAR_5->ip_conn, VAR_3);
 if (VAR_9 == ((void*)0)) {
  FUNC_0(VAR_6, "failed to allocate memory; "
      "reconnecting");
  FUNC_2(VAR_10, VAR_2);
  FUNC_5(VAR_5);
  FUNC_9(VAR_6);
  return;
 }
 VAR_7 = (struct iscsi_bhs_nop_out *)VAR_9->ip_bhs;
 VAR_7->bhsno_opcode = VAR_1 |
     VAR_0;
 VAR_7->bhsno_flags = 0x80;
 VAR_7->bhsno_initiator_task_tag = 0xffffffff;
 VAR_7->bhsno_target_transfer_tag = VAR_8->bhsni_target_transfer_tag;
 if (VAR_11 > 0) {
  VAR_12 = FUNC_3(VAR_9, VAR_10, VAR_11, VAR_3);
  if (VAR_12 != 0) {
   FUNC_0(VAR_6, "failed to allocate memory; "
       "reconnecting");
   FUNC_2(VAR_10, VAR_2);
   FUNC_5(VAR_9);
   FUNC_5(VAR_5);
   FUNC_9(VAR_6);
   return;
  }
  FUNC_2(VAR_10, VAR_2);
 }

 FUNC_5(VAR_5);
 FUNC_8(VAR_9);
}
