
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfiscsi_softc {int sessions_cv; int lock; int sessions; } ;
struct cfiscsi_session {scalar_t__ cs_outstanding_ctl_pdus; int cs_conn; int * cs_target; int cs_waiting_for_data_out; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct cfiscsi_session*,int ) ;
 int FUNC_3 (struct cfiscsi_session*) ;
 struct cfiscsi_softc VAR_1 ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct cfiscsi_session*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(struct cfiscsi_session *VAR_3)
{
 struct cfiscsi_softc *VAR_4;

 VAR_4 = &VAR_1;

 FUNC_0(VAR_3->cs_outstanding_ctl_pdus == 0,
     ("destroying session with outstanding CTL pdus"));
 FUNC_0(FUNC_1(&VAR_3->cs_waiting_for_data_out),
     ("destroying session with non-empty queue"));

 FUNC_9(&VAR_4->lock);
 FUNC_2(&VAR_4->sessions, VAR_3, VAR_2);
 FUNC_10(&VAR_4->lock);

 FUNC_3(VAR_3);
 if (VAR_3->cs_target != ((void*)0))
  FUNC_4(VAR_3->cs_target);
 FUNC_7(VAR_3->cs_conn);
 FUNC_8(VAR_3->cs_conn);
 FUNC_6(VAR_3, VAR_0);
 FUNC_5(&VAR_4->sessions_cv);
}
