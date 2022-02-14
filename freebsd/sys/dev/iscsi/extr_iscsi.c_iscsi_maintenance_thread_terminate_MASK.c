
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_softc {int sc_cv; int sc_lock; int sc_sessions; } ;
struct iscsi_session {int is_login_cv; int is_maintenance_cv; int is_lock; int is_conn; int is_postponed; int is_outstanding; int * is_login_pdu; int is_terminating; int is_callout; struct iscsi_softc* is_softc; } ;


 int FUNC_0 (struct iscsi_session*,char*) ;
 int FUNC_1 (struct iscsi_session*) ;
 int FUNC_2 (struct iscsi_session*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct iscsi_session*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct iscsi_session*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int VAR_1 ;
 int FUNC_14 (struct iscsi_session*,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static void
FUNC_18(struct iscsi_session *VAR_2)
{
 struct iscsi_softc *VAR_3;

 VAR_3 = VAR_2->is_softc;
 FUNC_16(&VAR_3->sc_lock);
 FUNC_6(&VAR_3->sc_sessions, VAR_2, VAR_1);
 FUNC_17(&VAR_3->sc_lock);

 FUNC_11(VAR_2->is_conn);
 FUNC_7(&VAR_2->is_callout);

 FUNC_1(VAR_2);

 FUNC_3(VAR_2->is_terminating, ("is_terminating == false"));
 FUNC_14(VAR_2, 1);

 FUNC_3(FUNC_5(&VAR_2->is_outstanding),
     ("destroying session with active tasks"));
 FUNC_3(FUNC_4(&VAR_2->is_postponed),
     ("destroying session with postponed PDUs"));

 FUNC_2(VAR_2);

 FUNC_12(VAR_2->is_conn);
 FUNC_15(&VAR_2->is_lock);
 FUNC_8(&VAR_2->is_maintenance_cv);




 FUNC_0(VAR_2, "terminated");
 FUNC_10(VAR_2, VAR_0);




 FUNC_9(&VAR_3->sc_cv);
}
