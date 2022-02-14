
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atheros_driver_data {scalar_t__ ioctl_sock; int * sock_raw; int * sock_xmit; int * sock_recv; int iface; int netlink; scalar_t__ wps_probe_resp_ie; scalar_t__ wps_beacon_ie; scalar_t__ wpa_ie; } ;


 int FUNC_0 (struct atheros_driver_data*) ;
 int FUNC_1 (void*,int *,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct atheros_driver_data*) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void
FUNC_8(void *VAR_0)
{
 struct atheros_driver_data *VAR_1 = VAR_0;

 FUNC_0(VAR_1);

 if (VAR_1->wpa_ie || VAR_1->wps_beacon_ie || VAR_1->wps_probe_resp_ie) {
  FUNC_1(VAR_0, ((void*)0), 0);
  FUNC_7(VAR_1->wpa_ie);
  FUNC_7(VAR_1->wps_beacon_ie);
  FUNC_7(VAR_1->wps_probe_resp_ie);
 }
 FUNC_5(VAR_1->netlink);
 (void) FUNC_4(VAR_1->ioctl_sock, VAR_1->iface, 0);
 if (VAR_1->ioctl_sock >= 0)
  FUNC_2(VAR_1->ioctl_sock);
 if (VAR_1->sock_recv != ((void*)0) && VAR_1->sock_recv != VAR_1->sock_xmit)
  FUNC_3(VAR_1->sock_recv);
 if (VAR_1->sock_xmit != ((void*)0))
  FUNC_3(VAR_1->sock_xmit);
 if (VAR_1->sock_raw)
  FUNC_3(VAR_1->sock_raw);
 FUNC_6(VAR_1);
}
