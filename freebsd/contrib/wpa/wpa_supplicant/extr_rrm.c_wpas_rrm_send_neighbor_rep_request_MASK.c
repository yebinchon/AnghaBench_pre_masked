
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct TYPE_4__ {void (* notify_neighbor_rep ) (void*,struct wpabuf*) ;int next_neighbor_rep_token; void* neighbor_rep_cb_ctx; int rrm_used; } ;
struct wpa_supplicant {scalar_t__ wpa_state; TYPE_2__ rrm; int bssid; int own_addr; int assoc_freq; TYPE_1__* current_bss; int * current_ssid; } ;
struct wpa_ssid_value {int ssid_len; int ssid; } ;
struct TYPE_3__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int const VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_0 (int ,int ,int ,TYPE_2__*,int *) ;
 int* FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (struct wpa_supplicant*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,char*,...) ;
 char* FUNC_4 (int ,int) ;
 struct wpabuf* FUNC_5 (int) ;
 int FUNC_6 (struct wpabuf*) ;
 int FUNC_7 (struct wpabuf*) ;
 int FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*,int ,int) ;
 int FUNC_10 (struct wpabuf*,int) ;
 int FUNC_11 (struct wpabuf*,int) ;
 int VAR_21 ;

int FUNC_12(struct wpa_supplicant *VAR_22,
           const struct wpa_ssid_value *VAR_23,
           int VAR_24, int VAR_25,
           void (*VAR_26)(void *VAR_27,
        struct wpabuf *VAR_28),
           void *VAR_29)
{
 struct wpabuf *VAR_30;
 const u8 *VAR_31;

 if (VAR_22->wpa_state != VAR_20 || VAR_22->current_ssid == ((void*)0)) {
  FUNC_3(VAR_12, "RRM: No connection, no RRM.");
  return -VAR_3;
 }

 if (!VAR_22->rrm.rrm_used) {
  FUNC_3(VAR_12, "RRM: No RRM in current connection.");
  return -VAR_4;
 }

 VAR_31 = FUNC_1(VAR_22->current_bss,
    VAR_16);
 if (!VAR_31 || !(VAR_22->current_bss->caps & VAR_5) ||
     !(VAR_31[2] & VAR_18)) {
  FUNC_3(VAR_12,
      "RRM: No network support for Neighbor Report.");
  return -VAR_4;
 }


 if (VAR_22->rrm.notify_neighbor_rep) {
  FUNC_3(VAR_12,
      "RRM: Currently handling previous Neighbor Report.");
  return -VAR_0;
 }


 VAR_30 = FUNC_5(3 + (VAR_23 ? 2 + VAR_23->ssid_len : 0) +
      (VAR_24 ? 2 + VAR_9 : 0) +
      (VAR_25 ? 2 + VAR_8 : 0));
 if (VAR_30 == ((void*)0)) {
  FUNC_3(VAR_12,
      "RRM: Failed to allocate Neighbor Report Request");
  return -VAR_2;
 }

 FUNC_3(VAR_12, "RRM: Neighbor report request (for %s), token=%d",
     (VAR_23 ? FUNC_4(VAR_23->ssid, VAR_23->ssid_len) : ""),
     VAR_22->rrm.next_neighbor_rep_token);

 FUNC_11(VAR_30, VAR_14);
 FUNC_11(VAR_30, VAR_19);
 FUNC_11(VAR_30, VAR_22->rrm.next_neighbor_rep_token);
 if (VAR_23) {
  FUNC_11(VAR_30, VAR_17);
  FUNC_11(VAR_30, VAR_23->ssid_len);
  FUNC_9(VAR_30, VAR_23->ssid, VAR_23->ssid_len);
 }

 if (VAR_24) {

  FUNC_11(VAR_30, VAR_15);
  FUNC_11(VAR_30, VAR_9);





  FUNC_11(VAR_30, 1);





  FUNC_11(VAR_30, 0);
  FUNC_11(VAR_30, VAR_10);



  FUNC_11(VAR_30, VAR_7);
  FUNC_11(VAR_30, VAR_6);
  FUNC_11(VAR_30, 2);
  FUNC_10(VAR_30, 0xffff);
 }

 if (VAR_25) {

  FUNC_11(VAR_30, VAR_15);
  FUNC_11(VAR_30, VAR_8);





  FUNC_11(VAR_30, 2);





  FUNC_11(VAR_30, 0);

  FUNC_11(VAR_30, VAR_11);




  FUNC_11(VAR_30, VAR_7);
  FUNC_11(VAR_30, 0);

  FUNC_11(VAR_30, 0);


  FUNC_10(VAR_30, 0);

 }

 VAR_22->rrm.next_neighbor_rep_token++;

 if (FUNC_2(VAR_22, VAR_22->assoc_freq, 0, VAR_22->bssid,
    VAR_22->own_addr, VAR_22->bssid,
    FUNC_7(VAR_30), FUNC_8(VAR_30), 0) < 0) {
  FUNC_3(VAR_12,
      "RRM: Failed to send Neighbor Report Request");
  FUNC_6(VAR_30);
  return -VAR_1;
 }

 VAR_22->rrm.neighbor_rep_cb_ctx = VAR_29;
 VAR_22->rrm.notify_neighbor_rep = VAR_26;
 FUNC_0(VAR_13, 0,
          VAR_21,
          &VAR_22->rrm, ((void*)0));

 FUNC_6(VAR_30);
 return 0;
}
