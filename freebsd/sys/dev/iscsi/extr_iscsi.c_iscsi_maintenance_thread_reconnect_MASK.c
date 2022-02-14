
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ isc_enable; scalar_t__ isc_discovery; } ;
struct iscsi_session {int is_connected; int is_reconnecting; int is_login_phase; int is_waiting_for_iscsid; TYPE_2__* is_softc; scalar_t__ is_timeout; int is_reason; TYPE_1__ is_conf; int is_postponed; int is_outstanding; int is_login_cv; int * is_login_pdu; int is_conn; } ;
struct TYPE_4__ {int sc_cv; } ;


 int FUNC_0 (struct iscsi_session*,char*) ;
 int FUNC_1 (struct iscsi_session*) ;
 int FUNC_2 (struct iscsi_session*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct iscsi_session*,int) ;
 int FUNC_10 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_11(struct iscsi_session *VAR_1)
{

 FUNC_7(VAR_1->is_conn);

 FUNC_1(VAR_1);

 VAR_1->is_connected = 0;
 VAR_1->is_reconnecting = 0;
 VAR_1->is_login_phase = 0;
 if (VAR_0) {
  FUNC_0(VAR_1, "connection failed, destroying devices");
  FUNC_9(VAR_1, 1);
 } else {
  FUNC_9(VAR_1, 0);
 }

 FUNC_3(FUNC_5(&VAR_1->is_outstanding),
     ("destroying session with active tasks"));
 FUNC_3(FUNC_4(&VAR_1->is_postponed),
     ("destroying session with postponed PDUs"));

 if (VAR_1->is_conf.isc_enable == 0 && VAR_1->is_conf.isc_discovery == 0) {
  FUNC_2(VAR_1);
  return;
 }





 VAR_1->is_waiting_for_iscsid = 1;
 FUNC_10(VAR_1->is_reason, "Waiting for iscsid(8)", sizeof(VAR_1->is_reason));
 VAR_1->is_timeout = 0;
 FUNC_2(VAR_1);
 FUNC_6(&VAR_1->is_softc->sc_cv);
}
