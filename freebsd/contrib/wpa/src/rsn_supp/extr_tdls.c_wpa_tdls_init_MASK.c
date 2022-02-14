
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_sm {int tdls_supported; scalar_t__ tdls_chan_switch; scalar_t__ tdls_external_setup; int * l2_tdls; int own_addr; scalar_t__ ifname; scalar_t__ bridge_ifname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (scalar_t__,int ,int ,int ,struct wpa_sm*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (struct wpa_sm*,int*,scalar_t__*,scalar_t__*) ;
 int VAR_3 ;

int FUNC_3(struct wpa_sm *VAR_4)
{
 if (VAR_4 == ((void*)0))
  return -1;

 VAR_4->l2_tdls = FUNC_0(VAR_4->bridge_ifname ? VAR_4->bridge_ifname :
         VAR_4->ifname,
         VAR_4->own_addr,
         VAR_0, VAR_3,
         VAR_4, 0);
 if (VAR_4->l2_tdls == ((void*)0)) {
  FUNC_1(VAR_2, "TDLS: Failed to open l2_packet "
      "connection");
  return -1;
 }





 if (FUNC_2(VAR_4, &VAR_4->tdls_supported,
     &VAR_4->tdls_external_setup,
     &VAR_4->tdls_chan_switch) < 0) {
  VAR_4->tdls_supported = 1;
  VAR_4->tdls_external_setup = 0;
 }

 FUNC_1(VAR_1, "TDLS: TDLS operation%s supported by "
     "driver", VAR_4->tdls_supported ? "" : " not");
 FUNC_1(VAR_1, "TDLS: Driver uses %s link setup",
     VAR_4->tdls_external_setup ? "external" : "internal");
 FUNC_1(VAR_1, "TDLS: Driver %s TDLS channel switching",
     VAR_4->tdls_chan_switch ? "supports" : "does not support");

 return 0;
}
