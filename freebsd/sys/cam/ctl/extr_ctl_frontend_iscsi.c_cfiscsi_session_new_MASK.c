
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfiscsi_softc {int lock; int sessions; scalar_t__ last_session_id; } ;
struct cfiscsi_session {int cs_ctl_initid; int cs_handoff_in_progress; int cs_callout; scalar_t__ cs_id; TYPE_1__* cs_conn; int cs_lock; int cs_login_cv; int cs_maintenance_cv; int cs_waiting_for_data_out; int cs_outstanding_ctl_pdus; } ;
struct TYPE_2__ {struct cfiscsi_session* ic_prv0; int ic_error; int ic_receive; } ;


 int FUNC_0 (struct cfiscsi_session*,char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct cfiscsi_session*,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,int ,struct cfiscsi_session*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (struct cfiscsi_session*,int ) ;
 int VAR_9 ;
 TYPE_1__* FUNC_8 (char const*,int,char*,int *) ;
 int FUNC_9 (int ,struct cfiscsi_session*,int *,int *,int ,int ,char*) ;
 struct cfiscsi_session* FUNC_10 (int,int ,int) ;
 int FUNC_11 (int *,char*,int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ) ;

__attribute__((used)) static struct cfiscsi_session *
FUNC_15(struct cfiscsi_softc *VAR_10, const char *VAR_11)
{
 struct cfiscsi_session *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_10(sizeof(*VAR_12), VAR_1, VAR_2 | VAR_3);
 if (VAR_12 == ((void*)0)) {
  FUNC_1("malloc failed");
  return (((void*)0));
 }
 VAR_12->cs_ctl_initid = -1;

 FUNC_14(&VAR_12->cs_outstanding_ctl_pdus, 0);
 FUNC_2(&VAR_12->cs_waiting_for_data_out);
 FUNC_11(&VAR_12->cs_lock, "cfiscsi_lock", ((void*)0), VAR_0);
 FUNC_6(&VAR_12->cs_maintenance_cv, "cfiscsi_mt");
 VAR_12->cs_handoff_in_progress = 1;

 VAR_12->cs_conn = FUNC_8(VAR_11, 0, "cfiscsi", &VAR_12->cs_lock);
 if (VAR_12->cs_conn == ((void*)0)) {
  FUNC_7(VAR_12, VAR_1);
  return (((void*)0));
 }
 VAR_12->cs_conn->ic_receive = VAR_7;
 VAR_12->cs_conn->ic_error = VAR_5;
 VAR_12->cs_conn->ic_prv0 = VAR_12;

 VAR_13 = FUNC_9(VAR_6, VAR_12, ((void*)0), ((void*)0), 0, 0, "cfiscsimt");
 if (VAR_13 != 0) {
  FUNC_0(VAR_12, "kthread_add(9) failed with error %d", VAR_13);
  FUNC_7(VAR_12, VAR_1);
  return (((void*)0));
 }

 FUNC_12(&VAR_10->lock);
 VAR_12->cs_id = ++VAR_10->last_session_id;
 FUNC_3(&VAR_10->sessions, VAR_12, VAR_8);
 FUNC_13(&VAR_10->lock);




 FUNC_4(&VAR_12->cs_callout, 1);
 FUNC_5(&VAR_12->cs_callout, 1 * VAR_9, VAR_4, VAR_12);

 return (VAR_12);
}
