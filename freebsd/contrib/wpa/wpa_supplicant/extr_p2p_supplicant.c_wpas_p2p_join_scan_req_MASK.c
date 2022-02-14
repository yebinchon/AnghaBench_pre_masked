
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int const u8 ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {size_t p2p_join_ssid_len; int own_scan_requested; scalar_t__ clear_driver_scan_cache; int (* scan_res_handler ) (struct wpa_supplicant*,int *) ;int scan_trigger_time; TYPE_3__* global; int pending_join_iface_addr; TYPE_2__* wps; int p2p_join_ssid; } ;
struct wpa_driver_scan_params {int num_ssids; int* freqs; int p2p_probe; int only_new_results; scalar_t__ extra_ies_len; int extra_ies; TYPE_1__* ssids; } ;
typedef int params ;
struct TYPE_8__ {int p2p; } ;
struct TYPE_7__ {int p2p; } ;
struct TYPE_6__ {int uuid; TYPE_4__ dev; } ;
struct TYPE_5__ {size_t ssid_len; int const* ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (int,int ,int ,struct wpa_supplicant*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int const*,size_t) ;
 int FUNC_4 (struct wpa_driver_scan_params*,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,struct wpabuf*,int *,unsigned int) ;
 size_t FUNC_7 (int ) ;
 int FUNC_8 (struct wpa_supplicant*,struct wpa_driver_scan_params*) ;
 int FUNC_9 (int ,char*) ;
 struct wpabuf* FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct wpabuf*) ;
 int FUNC_12 (struct wpabuf*) ;
 scalar_t__ FUNC_13 (struct wpabuf*) ;
 int FUNC_14 (struct wpabuf*,struct wpabuf*) ;
 unsigned int FUNC_15 (struct wpa_supplicant*,int*) ;
 int FUNC_16 (struct wpa_supplicant*) ;
 int VAR_5 ;
 int FUNC_17 (struct wpa_supplicant*,int *) ;
 struct wpabuf* FUNC_18 (int ,TYPE_4__*,int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_19(struct wpa_supplicant *VAR_6, int VAR_7,
       const u8 *VAR_8, size_t VAR_9)
{
 int VAR_10;
 struct wpa_driver_scan_params VAR_11;
 struct wpabuf *VAR_12, *VAR_13;
 size_t VAR_14;
 int VAR_15[2] = { 0, 0 };
 unsigned int VAR_16;

 FUNC_4(&VAR_11, 0, sizeof(VAR_11));


 VAR_11.num_ssids = 1;
 if (VAR_8 && VAR_9) {
  VAR_11.ssids[0].ssid = VAR_8;
  VAR_11.ssids[0].ssid_len = VAR_9;
  FUNC_3(VAR_6->p2p_join_ssid, VAR_8, VAR_9);
  VAR_6->p2p_join_ssid_len = VAR_9;
 } else {
  VAR_11.ssids[0].ssid = (u8 *) VAR_2;
  VAR_11.ssids[0].ssid_len = VAR_3;
  VAR_6->p2p_join_ssid_len = 0;
 }

 VAR_6->wps->dev.p2p = 1;
 VAR_12 = FUNC_18(VAR_0, &VAR_6->wps->dev,
     VAR_6->wps->uuid, VAR_4, 0,
     ((void*)0));
 if (VAR_12 == ((void*)0)) {
  FUNC_17(VAR_6, ((void*)0));
  return;
 }

 if (!VAR_7) {
  int VAR_17;




  VAR_17 = FUNC_5(VAR_6->global->p2p,
           VAR_6->pending_join_iface_addr);
  if (VAR_17 > 0)
   VAR_7 = VAR_17;
 }
 if (VAR_7 > 0) {
  VAR_15[0] = VAR_7;
  VAR_11.freqs = VAR_15;
 }

 VAR_14 = FUNC_7(VAR_6->global->p2p);
 VAR_13 = FUNC_10(FUNC_13(VAR_12) + VAR_14);
 if (VAR_13 == ((void*)0)) {
  FUNC_11(VAR_12);
  FUNC_17(VAR_6, ((void*)0));
  return;
 }
 FUNC_14(VAR_13, VAR_12);
 FUNC_11(VAR_12);

 VAR_16 = FUNC_15(VAR_6, VAR_15);
 FUNC_6(VAR_6->global->p2p, VAR_13, ((void*)0), VAR_16);

 VAR_11.p2p_probe = 1;
 VAR_11.extra_ies = FUNC_12(VAR_13);
 VAR_11.extra_ies_len = FUNC_13(VAR_13);

 if (VAR_6->clear_driver_scan_cache) {
  FUNC_9(VAR_1,
      "Request driver to clear scan cache due to local BSS flush");
  VAR_11.only_new_results = 1;
 }





 VAR_10 = FUNC_8(VAR_6, &VAR_11);
 if (!VAR_10) {
  FUNC_2(&VAR_6->scan_trigger_time);
  VAR_6->scan_res_handler = FUNC_17;
  VAR_6->own_scan_requested = 1;
  VAR_6->clear_driver_scan_cache = 0;
 }

 FUNC_11(VAR_13);

 if (VAR_10) {
  FUNC_9(VAR_1, "P2P: Failed to start scan for join - "
      "try again later");
  FUNC_0(VAR_5, VAR_6, ((void*)0));
  FUNC_1(1, 0, VAR_5, VAR_6, ((void*)0));
  FUNC_16(VAR_6);
 }
}
