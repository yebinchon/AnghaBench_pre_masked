
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int is_conn; } ;
struct iscsi_bhs_logout_request {int bhslr_reason; int bhslr_opcode; } ;
struct icl_pdu {scalar_t__ ip_bhs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct icl_pdu* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct icl_pdu*) ;

__attribute__((used)) static void
FUNC_2(struct iscsi_session *VAR_3)
{
 struct icl_pdu *VAR_4;
 struct iscsi_bhs_logout_request *VAR_5;

 VAR_4 = FUNC_0(VAR_3->is_conn, VAR_2);
 if (VAR_4 == ((void*)0))
  return;

 VAR_5 = (struct iscsi_bhs_logout_request *)VAR_4->ip_bhs;
 VAR_5->bhslr_opcode = VAR_1;
 VAR_5->bhslr_reason = VAR_0;
 FUNC_1(VAR_4);
}
