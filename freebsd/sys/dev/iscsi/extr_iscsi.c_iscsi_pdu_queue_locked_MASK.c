
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int is_postponed; int is_sim; } ;
struct icl_pdu {int dummy; } ;


 int FUNC_0 (struct iscsi_session*) ;
 struct iscsi_session* FUNC_1 (struct icl_pdu*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,struct icl_pdu*,int ) ;
 int FUNC_4 (struct icl_pdu*) ;
 int VAR_0 ;
 int FUNC_5 (struct icl_pdu*) ;
 int FUNC_6 (struct iscsi_session*) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static void
FUNC_8(struct icl_pdu *VAR_1)
{
 struct iscsi_session *VAR_2;
 bool VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 FUNC_0(VAR_2);
 FUNC_6(VAR_2);
 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3) {
  if (FUNC_2(&VAR_2->is_postponed))
   FUNC_7(VAR_2->is_sim, 1);
  FUNC_3(&VAR_2->is_postponed, VAR_1, VAR_0);
  return;
 }
 FUNC_4(VAR_1);
}
