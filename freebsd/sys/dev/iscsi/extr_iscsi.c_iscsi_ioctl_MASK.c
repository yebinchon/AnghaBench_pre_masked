
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct iscsi_softc {int dummy; } ;
struct iscsi_session_remove {int dummy; } ;
struct iscsi_session_modify {int dummy; } ;
struct iscsi_session_list {int dummy; } ;
struct iscsi_session_add {int dummy; } ;
struct iscsi_daemon_send {int dummy; } ;
struct iscsi_daemon_request {int dummy; } ;
struct iscsi_daemon_receive {int dummy; } ;
struct iscsi_daemon_handoff {int dummy; } ;
struct iscsi_daemon_fail {int dummy; } ;
struct iscsi_daemon_connect {int dummy; } ;
struct cdev {struct iscsi_softc* si_drv1; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_softc*,struct iscsi_daemon_connect*) ;
 int FUNC_1 (struct iscsi_softc*,struct iscsi_daemon_fail*) ;
 int FUNC_2 (struct iscsi_softc*,struct iscsi_daemon_handoff*) ;
 int FUNC_3 (struct iscsi_softc*,struct iscsi_daemon_receive*) ;
 int FUNC_4 (struct iscsi_softc*,struct iscsi_daemon_send*) ;
 int FUNC_5 (struct iscsi_softc*,struct iscsi_daemon_request*) ;
 int FUNC_6 (struct iscsi_softc*,struct iscsi_session_add*) ;
 int FUNC_7 (struct iscsi_softc*,struct iscsi_session_list*) ;
 int FUNC_8 (struct iscsi_softc*,struct iscsi_session_modify*) ;
 int FUNC_9 (struct iscsi_softc*,struct iscsi_session_remove*) ;

__attribute__((used)) static int
FUNC_10(struct cdev *VAR_1, u_long VAR_2, caddr_t VAR_3, int VAR_4,
    struct thread *VAR_5)
{
 struct iscsi_softc *VAR_6;

 VAR_6 = VAR_1->si_drv1;

 switch (VAR_2) {
 case 132:
  return (FUNC_5(VAR_6,
      (struct iscsi_daemon_request *)VAR_3));
 case 135:
  return (FUNC_2(VAR_6,
      (struct iscsi_daemon_handoff *)VAR_3));
 case 136:
  return (FUNC_1(VAR_6,
      (struct iscsi_daemon_fail *)VAR_3));
 case 131:
  return (FUNC_6(VAR_6,
      (struct iscsi_session_add *)VAR_3));
 case 128:
  return (FUNC_9(VAR_6,
      (struct iscsi_session_remove *)VAR_3));
 case 130:
  return (FUNC_7(VAR_6,
      (struct iscsi_session_list *)VAR_3));
 case 129:
  return (FUNC_8(VAR_6,
      (struct iscsi_session_modify *)VAR_3));
 default:
  return (VAR_0);
 }
}
