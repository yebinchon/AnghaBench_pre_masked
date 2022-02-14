
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_tdls_peer {int addr; scalar_t__ initiator; } ;
struct wpa_tdls_lnkid {int ie_len; int resp_sta; int init_sta; int bssid; int ie_type; } ;
struct wpa_sm {int own_addr; int bssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct wpa_sm *VAR_2, struct wpa_tdls_peer *VAR_3,
       struct wpa_tdls_lnkid *VAR_4)
{
 VAR_4->ie_type = VAR_1;
 VAR_4->ie_len = 3 * VAR_0;
 FUNC_0(VAR_4->bssid, VAR_2->bssid, VAR_0);
 if (VAR_3->initiator) {
  FUNC_0(VAR_4->init_sta, VAR_2->own_addr, VAR_0);
  FUNC_0(VAR_4->resp_sta, VAR_3->addr, VAR_0);
 } else {
  FUNC_0(VAR_4->init_sta, VAR_3->addr, VAR_0);
  FUNC_0(VAR_4->resp_sta, VAR_2->own_addr, VAR_0);
 }
}
