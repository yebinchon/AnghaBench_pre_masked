
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int dummy; } ;
struct iscsi_outstanding {scalar_t__ io_datasn; int * io_ccb; } ;
struct iscsi_bhs_task_management_response {scalar_t__ bhstmr_initiator_task_tag; scalar_t__ bhstmr_response; } ;
struct icl_pdu {scalar_t__ ip_bhs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iscsi_session*,char*,scalar_t__) ;
 struct iscsi_session* FUNC_1 (struct icl_pdu*) ;
 int FUNC_2 (struct icl_pdu*) ;
 struct iscsi_outstanding* FUNC_3 (struct iscsi_session*,scalar_t__) ;
 int FUNC_4 (struct iscsi_session*,struct iscsi_outstanding*) ;
 int FUNC_5 (struct iscsi_session*) ;
 int FUNC_6 (struct iscsi_session*,struct iscsi_outstanding*,int ) ;

__attribute__((used)) static void
FUNC_7(struct icl_pdu *VAR_2)
{
 struct iscsi_bhs_task_management_response *VAR_3;
 struct iscsi_outstanding *VAR_4, *VAR_5;
 struct iscsi_session *VAR_6;

 VAR_6 = FUNC_1(VAR_2);

 VAR_3 = (struct iscsi_bhs_task_management_response *)VAR_2->ip_bhs;
 VAR_4 = FUNC_3(VAR_6, VAR_3->bhstmr_initiator_task_tag);
 if (VAR_4 == ((void*)0) || VAR_4->io_ccb != ((void*)0)) {
  FUNC_0(VAR_6, "bad itt 0x%x",
      VAR_3->bhstmr_initiator_task_tag);
  FUNC_2(VAR_2);
  FUNC_5(VAR_6);
  return;
 }

 if (VAR_3->bhstmr_response != VAR_0) {
  FUNC_0(VAR_6, "task response 0x%x",
      VAR_3->bhstmr_response);
 } else {
  VAR_5 = FUNC_3(VAR_6, VAR_4->io_datasn);
  if (VAR_5 != ((void*)0) && VAR_5->io_ccb != ((void*)0))
   FUNC_6(VAR_6, VAR_5, VAR_1);
 }

 FUNC_4(VAR_6, VAR_4);
 FUNC_2(VAR_2);
}
