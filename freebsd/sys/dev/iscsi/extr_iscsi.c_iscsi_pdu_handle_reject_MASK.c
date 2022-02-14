
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int dummy; } ;
struct iscsi_bhs_reject {int bhsr_reason; } ;
struct icl_pdu {scalar_t__ ip_bhs; } ;


 int FUNC_0 (struct iscsi_session*,char*,int ) ;
 struct iscsi_session* FUNC_1 (struct icl_pdu*) ;
 int FUNC_2 (struct icl_pdu*) ;

__attribute__((used)) static void
FUNC_3(struct icl_pdu *VAR_0)
{
 struct iscsi_bhs_reject *VAR_1;
 struct iscsi_session *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 VAR_1 = (struct iscsi_bhs_reject *)VAR_0->ip_bhs;
 FUNC_0(VAR_2, "received Reject PDU, reason 0x%x; protocol error?",
     VAR_1->bhsr_reason);

 FUNC_2(VAR_0);
}
