
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_tdls_peer {int supp_rates; int supp_rates_len; } ;
struct wpa_eapol_ie_parse {scalar_t__ ext_supp_rates_len; int * ext_supp_rates; scalar_t__ supp_rates_len; scalar_t__ supp_rates; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,scalar_t__,scalar_t__,int *,scalar_t__) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(const struct wpa_eapol_ie_parse *VAR_1,
      struct wpa_tdls_peer *VAR_2)
{
 if (!VAR_1->supp_rates) {
  FUNC_1(VAR_0, "TDLS: No supported rates received");
  return -1;
 }
 VAR_2->supp_rates_len = FUNC_0(
  VAR_2->supp_rates, sizeof(VAR_2->supp_rates),
  VAR_1->supp_rates + 2, VAR_1->supp_rates_len - 2,
  VAR_1->ext_supp_rates ? VAR_1->ext_supp_rates + 2 : ((void*)0),
  VAR_1->ext_supp_rates ? VAR_1->ext_supp_rates_len - 2 : 0);
 return 0;
}
