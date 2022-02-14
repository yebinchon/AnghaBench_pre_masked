
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int dummy; } ;
struct iscsi_bhs_asynchronous_message {int bhsam_async_event; } ;
struct icl_pdu {scalar_t__ ip_bhs; } ;





 int FUNC_0 (struct iscsi_session*,char*,...) ;
 struct iscsi_session* FUNC_1 (struct icl_pdu*) ;
 int FUNC_2 (struct icl_pdu*) ;
 int FUNC_3 (struct iscsi_session*) ;
 int FUNC_4 (struct iscsi_session*) ;

__attribute__((used)) static void
FUNC_5(struct icl_pdu *VAR_0)
{
 struct iscsi_bhs_asynchronous_message *VAR_1;
 struct iscsi_session *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 VAR_1 = (struct iscsi_bhs_asynchronous_message *)VAR_0->ip_bhs;
 switch (VAR_1->bhsam_async_event) {
 case 130:
  FUNC_0(VAR_2, "target requests logout; removing session");
  FUNC_3(VAR_2);
  FUNC_4(VAR_2);
  break;
 case 129:
  FUNC_0(VAR_2, "target indicates it will drop the connection");
  break;
 case 128:
  FUNC_0(VAR_2, "target indicates it will drop the session");
  break;
 default:




  FUNC_0(VAR_2, "ignoring AsyncEvent %d", VAR_1->bhsam_async_event);
  break;
 }

 FUNC_2(VAR_0);
}
