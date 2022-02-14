
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_er {scalar_t__ multicast_sd; scalar_t__ ssdp_sd; int * ifname; scalar_t__ forced_ifname; int ip_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,struct wps_er*,int *) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct wps_er*) ;
 int VAR_2 ;

int FUNC_6(struct wps_er *VAR_3)
{
 if (FUNC_0(VAR_3->ifname)) {
  FUNC_4(VAR_1, "WPS ER: Failed to add routing entry for "
      "SSDP");
  return -1;
 }

 VAR_3->multicast_sd = FUNC_3(VAR_3->ip_addr,
          VAR_3->forced_ifname ?
          VAR_3->ifname : ((void*)0));
 if (VAR_3->multicast_sd < 0) {
  FUNC_4(VAR_1, "WPS ER: Failed to open multicast socket "
      "for SSDP");
  return -1;
 }

 VAR_3->ssdp_sd = FUNC_2();
 if (VAR_3->ssdp_sd < 0) {
  FUNC_4(VAR_1, "WPS ER: Failed to open SSDP listener "
      "socket");
  return -1;
 }

 if (FUNC_1(VAR_3->multicast_sd, VAR_0,
    VAR_2, VAR_3, ((void*)0)) ||
     FUNC_1(VAR_3->ssdp_sd, VAR_0,
    VAR_2, VAR_3, ((void*)0)))
  return -1;

 FUNC_5(VAR_3);

 return 0;
}
