
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_sm {int ap_rsn_ie_len; int ap_rsn_ie; int ocv; } ;
struct wpa_ie_data {int capabilities; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,struct wpa_ie_data*) ;

int FUNC_1(struct wpa_sm *VAR_1)
{
 struct wpa_ie_data VAR_2;

 if (!VAR_1->ocv || !VAR_1->ap_rsn_ie)
  return 0;

 return FUNC_0(VAR_1->ap_rsn_ie, VAR_1->ap_rsn_ie_len,
        &VAR_2) >= 0 &&
  (VAR_2.capabilities & VAR_0);
}
