
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfiscsi_session {int cs_terminating; int cs_handoff_in_progress; int cs_conn; int cs_callout; int cs_lock; int cs_maintenance_cv; } ;


 int FUNC_0 (struct cfiscsi_session*,char*) ;
 int FUNC_1 (struct cfiscsi_session*) ;
 int FUNC_2 (struct cfiscsi_session*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cfiscsi_session*) ;
 int FUNC_5 (struct cfiscsi_session*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9(void *VAR_0)
{
 struct cfiscsi_session *VAR_1;

 VAR_1 = VAR_0;

 for (;;) {
  FUNC_1(VAR_1);
  if (VAR_1->cs_terminating == 0 || VAR_1->cs_handoff_in_progress)
   FUNC_6(&VAR_1->cs_maintenance_cv, &VAR_1->cs_lock);
  FUNC_2(VAR_1);

  if (VAR_1->cs_terminating && VAR_1->cs_handoff_in_progress == 0) {







   FUNC_3(&VAR_1->cs_callout);
   FUNC_7(VAR_1->cs_conn);





   FUNC_5(VAR_1);
   FUNC_4(VAR_1);
   FUNC_8();
   return;
  }
  FUNC_0(VAR_1, "nothing to do");
 }
}
