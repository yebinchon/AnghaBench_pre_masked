
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ isc_enable; } ;
struct iscsi_session {scalar_t__ is_timeout; scalar_t__ is_terminating; int is_conn; scalar_t__ is_login_phase; scalar_t__ is_waiting_for_iscsid; TYPE_1__ is_conf; int is_callout; } ;
struct iscsi_bhs_nop_out {int bhsno_opcode; int bhsno_flags; int bhsno_target_transfer_tag; } ;
struct icl_pdu {scalar_t__ ip_bhs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iscsi_session*) ;
 int FUNC_1 (struct iscsi_session*) ;
 int FUNC_2 (struct iscsi_session*,char*,...) ;
 int VAR_2 ;
 int FUNC_3 (int *,int) ;
 int VAR_3 ;
 struct icl_pdu* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct icl_pdu*) ;
 int FUNC_6 (struct iscsi_session*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_7(void *VAR_7)
{
 struct icl_pdu *VAR_8;
 struct iscsi_bhs_nop_out *VAR_9;
 struct iscsi_session *VAR_10;
 bool VAR_11 = 0;

 VAR_10 = VAR_7;

 FUNC_0(VAR_10);
 if (VAR_10->is_terminating) {
  FUNC_1(VAR_10);
  return;
 }

 FUNC_3(&VAR_10->is_callout, 1 * VAR_3);

 if (VAR_10->is_conf.isc_enable == 0)
  goto out;

 VAR_10->is_timeout++;

 if (VAR_10->is_waiting_for_iscsid) {
  if (VAR_4 > 0 && VAR_10->is_timeout > VAR_4) {
   FUNC_2(VAR_10, "timed out waiting for iscsid(8) "
       "for %d seconds; reconnecting",
       VAR_10->is_timeout);
   VAR_11 = 1;
  }
  goto out;
 }

 if (VAR_10->is_login_phase) {
  if (VAR_5 > 0 && VAR_10->is_timeout > VAR_5) {
   FUNC_2(VAR_10, "login timed out after %d seconds; "
       "reconnecting", VAR_10->is_timeout);
   VAR_11 = 1;
  }
  goto out;
 }

 if (VAR_6 <= 0) {





  VAR_10->is_timeout = 0;
  goto out;
 }

 if (VAR_10->is_timeout >= VAR_6) {
  FUNC_2(VAR_10, "no ping reply (NOP-In) after %d seconds; "
      "reconnecting", VAR_6);
  VAR_11 = 1;
  goto out;
 }

 FUNC_1(VAR_10);
 if (VAR_10->is_timeout < 2)
  return;

 VAR_8 = FUNC_4(VAR_10->is_conn, VAR_2);
 if (VAR_8 == ((void*)0)) {
  FUNC_2(VAR_10, "failed to allocate PDU");
  return;
 }
 VAR_9 = (struct iscsi_bhs_nop_out *)VAR_8->ip_bhs;
 VAR_9->bhsno_opcode = VAR_1 |
     VAR_0;
 VAR_9->bhsno_flags = 0x80;
 VAR_9->bhsno_target_transfer_tag = 0xffffffff;
 FUNC_5(VAR_8);
 return;

out:
 if (VAR_10->is_terminating) {
  FUNC_1(VAR_10);
  return;
 }

 FUNC_1(VAR_10);

 if (VAR_11)
  FUNC_6(VAR_10);
}
