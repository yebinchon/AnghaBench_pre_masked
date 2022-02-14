
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int is_simq_frozen; int * is_devq; int * is_sim; int * is_path; int is_postponed; } ;
struct icl_pdu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iscsi_session*,char*) ;
 int FUNC_1 (struct iscsi_session*) ;
 int FUNC_2 (int *) ;
 struct icl_pdu* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_3 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct icl_pdu*) ;
 int VAR_4 ;
 int FUNC_8 (struct iscsi_session*,int ) ;
 int FUNC_9 (int ,int *,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;

__attribute__((used)) static void
FUNC_14(struct iscsi_session *VAR_5, bool VAR_6)
{
 struct icl_pdu *VAR_7;

 FUNC_1(VAR_5);




 if (VAR_5->is_sim != ((void*)0) && VAR_5->is_simq_frozen == 0) {
  FUNC_0(VAR_5, "freezing");
  FUNC_12(VAR_5->is_sim, 1);
  VAR_5->is_simq_frozen = 1;
 }




 if (!FUNC_2(&VAR_5->is_postponed))
  FUNC_13(VAR_5->is_sim, 1);
 while ((VAR_7 = FUNC_3(&VAR_5->is_postponed)) != ((void*)0)) {
  FUNC_4(&VAR_5->is_postponed, VAR_4);
  FUNC_7(VAR_7);
 }

 if (VAR_6 == 0) {



  FUNC_8(VAR_5, VAR_2);
  return;
 }

 FUNC_8(VAR_5, VAR_1);

 if (VAR_5->is_sim == ((void*)0))
  return;

 FUNC_0(VAR_5, "deregistering SIM");
 FUNC_9(VAR_0, VAR_5->is_path, ((void*)0));

 if (VAR_5->is_simq_frozen) {
  FUNC_13(VAR_5->is_sim, 1);
  VAR_5->is_simq_frozen = 0;
 }

 FUNC_11(VAR_5->is_path);
 VAR_5->is_path = ((void*)0);
 FUNC_10(FUNC_6(VAR_5->is_sim));
 FUNC_5(VAR_5->is_sim, VAR_3 );
 VAR_5->is_sim = ((void*)0);
 VAR_5->is_devq = ((void*)0);
}
