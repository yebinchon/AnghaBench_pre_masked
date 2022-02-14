
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_tdls_peer {int wmm_capable; int qos_info; } ;
struct wpa_eapol_ie_parse {int wmm_len; scalar_t__ wmm; } ;
struct wmm_information_element {int qos_info; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static int FUNC_1(const struct wpa_eapol_ie_parse *VAR_1,
          struct wpa_tdls_peer *VAR_2)
{
 struct wmm_information_element *VAR_3;

 if (!VAR_1->wmm) {
  FUNC_0(VAR_0, "TDLS: No supported WMM capabilities received");
  return 0;
 }

 if (VAR_1->wmm_len < sizeof(struct wmm_information_element)) {
  FUNC_0(VAR_0, "TDLS: Invalid supported WMM capabilities received");
  return -1;
 }

 VAR_3 = (struct wmm_information_element *) VAR_1->wmm;
 VAR_2->qos_info = VAR_3->qos_info;

 VAR_2->wmm_capable = 1;

 FUNC_0(VAR_0, "TDLS: Peer WMM QOS Info 0x%x", VAR_2->qos_info);
 return 0;
}
