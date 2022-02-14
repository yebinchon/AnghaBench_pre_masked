
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_bhs_nop_in {int bhsni_flags; int bhsni_initiator_task_tag; int bhsni_opcode; } ;
struct icl_pdu {scalar_t__ ip_bhs; } ;
struct cfiscsi_session {scalar_t__ cs_timeout; int cs_conn; scalar_t__ cs_login_phase; scalar_t__ cs_waiting_for_ctld; int cs_callout; scalar_t__ cs_terminating; } ;


 int FUNC_0 (struct cfiscsi_session*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct icl_pdu*) ;
 int FUNC_4 (struct cfiscsi_session*) ;
 int VAR_2 ;
 struct icl_pdu* FUNC_5 (int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_6(void *VAR_5)
{
 struct icl_pdu *VAR_6;
 struct iscsi_bhs_nop_in *VAR_7;
 struct cfiscsi_session *VAR_8;

 VAR_8 = VAR_5;

 if (VAR_8->cs_terminating)
  return;

 FUNC_2(&VAR_8->cs_callout, 1 * VAR_2);

 FUNC_1(&VAR_8->cs_timeout, 1);
 if (VAR_4 <= 0) {
  VAR_8->cs_timeout = 0;
  return;
 }

 if (VAR_8->cs_timeout >= VAR_4) {
  FUNC_0(VAR_8, "no ping reply (NOP-Out) after %d seconds; "
      "dropping connection", VAR_4);
  FUNC_4(VAR_8);
  return;
 }
 if (VAR_8->cs_timeout < 2)
  return;

 VAR_6 = FUNC_5(VAR_8->cs_conn, VAR_1);
 if (VAR_6 == ((void*)0)) {
  FUNC_0(VAR_8, "failed to allocate memory");
  return;
 }
 VAR_7 = (struct iscsi_bhs_nop_in *)VAR_6->ip_bhs;
 VAR_7->bhsni_opcode = VAR_0;
 VAR_7->bhsni_flags = 0x80;
 VAR_7->bhsni_initiator_task_tag = 0xffffffff;

 FUNC_3(VAR_6);
}
