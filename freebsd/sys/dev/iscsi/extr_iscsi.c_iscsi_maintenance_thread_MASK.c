
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {int is_reconnecting; int is_terminating; int is_lock; int is_maintenance_cv; int is_maxcmdsn; int is_cmdsn; int is_postponed; } ;


 int FUNC_0 (struct iscsi_session*) ;
 int FUNC_1 (struct iscsi_session*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct iscsi_session*) ;
 int FUNC_6 (struct iscsi_session*) ;
 int FUNC_7 (struct iscsi_session*) ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9(void *VAR_0)
{
 struct iscsi_session *VAR_1 = VAR_0;

 FUNC_0(VAR_1);
 for (;;) {
  if (VAR_1->is_reconnecting == 0 &&
      VAR_1->is_terminating == 0 &&
      (FUNC_3(&VAR_1->is_postponed) ||
       FUNC_2(VAR_1->is_cmdsn, VAR_1->is_maxcmdsn)))
   FUNC_4(&VAR_1->is_maintenance_cv, &VAR_1->is_lock);


  if (VAR_1->is_terminating) {
   FUNC_1(VAR_1);
   FUNC_6(VAR_1);
   FUNC_8();
   return;
  }

  if (VAR_1->is_reconnecting) {
   FUNC_1(VAR_1);
   FUNC_5(VAR_1);
   FUNC_0(VAR_1);
   continue;
  }

  FUNC_7(VAR_1);
 }
 FUNC_1(VAR_1);
}
