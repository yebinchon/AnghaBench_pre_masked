
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct cdev {int dummy; } ;
struct autofs_daemon_request {int dummy; } ;
struct autofs_daemon_done_101 {int dummy; } ;
struct autofs_daemon_done {int dummy; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int sc_dev_opened; } ;





 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct autofs_daemon_done*) ;
 int FUNC_3 (struct autofs_daemon_done_101*) ;
 int FUNC_4 (struct autofs_daemon_request*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_2, u_long VAR_3, caddr_t VAR_4, int VAR_5,
    struct thread *VAR_6)
{

 FUNC_1(VAR_1->sc_dev_opened, ("not opened?"));

 switch (VAR_3) {
 case 128:
  return (FUNC_4(
      (struct autofs_daemon_request *)VAR_4));
 case 129:
  return (FUNC_3(
      (struct autofs_daemon_done_101 *)VAR_4));
 case 130:
  return (FUNC_2(
      (struct autofs_daemon_done *)VAR_4));
 default:
  FUNC_0("invalid cmd %lx", VAR_3);
  return (VAR_0);
 }
}
