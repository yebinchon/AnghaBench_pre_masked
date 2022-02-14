
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int is_sim; int is_postponed; } ;
struct icl_pdu {int dummy; } ;


 int FUNC_0 (struct iscsi_session*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct icl_pdu* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct icl_pdu*) ;
 int VAR_0 ;
 int FUNC_5 (struct icl_pdu*) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void
FUNC_7(struct iscsi_session *VAR_1)
{
 struct icl_pdu *VAR_2;
 bool VAR_3;

 FUNC_0(VAR_1);

 if (FUNC_1(&VAR_1->is_postponed))
  return;
 while ((VAR_2 = FUNC_2(&VAR_1->is_postponed)) != ((void*)0)) {
  VAR_3 = FUNC_5(VAR_2);
  if (VAR_3)
   return;
  FUNC_3(&VAR_1->is_postponed, VAR_0);
  FUNC_4(VAR_2);
 }
 FUNC_6(VAR_1->is_sim, 1);
}
