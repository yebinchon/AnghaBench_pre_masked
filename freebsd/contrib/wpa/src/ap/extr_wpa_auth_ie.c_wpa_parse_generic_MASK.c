
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_eapol_ie_parse {int const* wpa_ie; int wpa_ie_len; int const* osen; int osen_len; int const* pmkid; int const* gtk; int gtk_len; int const* mac_addr; int mac_addr_len; int const* igtk; int igtk_len; int const* ip_addr_req; int const* ip_addr_alloc; int const* oci; int oci_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int const*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,char*,int const*,int const) ;

__attribute__((used)) static int FUNC_3(const u8 *VAR_13, const u8 *VAR_14,
        struct wpa_eapol_ie_parse *VAR_15)
{
 if (VAR_13[1] == 0)
  return 1;

 if (VAR_13[1] >= 6 &&
     FUNC_0(VAR_13 + 2) == VAR_11 &&
     VAR_13[2 + VAR_12] == 1 &&
     VAR_13[2 + VAR_12 + 1] == 0) {
  VAR_15->wpa_ie = VAR_13;
  VAR_15->wpa_ie_len = VAR_13[1] + 2;
  return 0;
 }

 if (VAR_13[1] >= 4 && FUNC_1(VAR_13 + 2) == VAR_1) {
  VAR_15->osen = VAR_13;
  VAR_15->osen_len = VAR_13[1] + 2;
  return 0;
 }

 if (1 + VAR_8 < VAR_14 - VAR_13 &&
     VAR_13[1] >= VAR_8 + VAR_2 &&
     FUNC_0(VAR_13 + 2) == VAR_7) {
  VAR_15->pmkid = VAR_13 + 2 + VAR_8;
  return 0;
 }

 if (VAR_13[1] > VAR_8 + 2 &&
     FUNC_0(VAR_13 + 2) == VAR_3) {
  VAR_15->gtk = VAR_13 + 2 + VAR_8;
  VAR_15->gtk_len = VAR_13[1] - VAR_8;
  return 0;
 }

 if (VAR_13[1] > VAR_8 + 2 &&
     FUNC_0(VAR_13 + 2) == VAR_5) {
  VAR_15->mac_addr = VAR_13 + 2 + VAR_8;
  VAR_15->mac_addr_len = VAR_13[1] - VAR_8;
  return 0;
 }
 return 0;
}
