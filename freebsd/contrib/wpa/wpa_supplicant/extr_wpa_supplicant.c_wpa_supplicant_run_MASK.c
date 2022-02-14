
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {scalar_t__ ctrl_iface; int p2p_mgmt; struct wpa_supplicant* next; } ;
struct TYPE_2__ {scalar_t__ wait_for_monitor; int pid_file; scalar_t__ daemonize; } ;
struct wpa_global {struct wpa_supplicant* ifaces; TYPE_1__ params; } ;


 int FUNC_0 (int ,struct wpa_global*) ;
 int FUNC_1 (int ,struct wpa_global*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct wpa_global*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_7(struct wpa_global *VAR_2)
{
 struct wpa_supplicant *VAR_3;

 if (VAR_2->params.daemonize &&
     (FUNC_5(VAR_2->params.pid_file) ||
      FUNC_3()))
  return -1;






 if (VAR_2->params.wait_for_monitor) {
  for (VAR_3 = VAR_2->ifaces; VAR_3; VAR_3 = VAR_3->next)
   if (VAR_3->ctrl_iface && !VAR_3->p2p_mgmt)
    FUNC_4(
     VAR_3->ctrl_iface);
 }

 FUNC_1(VAR_1, VAR_2);
 FUNC_0(VAR_0, VAR_2);

 FUNC_2();

 return 0;
}
