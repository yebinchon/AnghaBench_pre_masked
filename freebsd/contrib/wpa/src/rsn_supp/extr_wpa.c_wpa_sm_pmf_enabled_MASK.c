
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_sm {scalar_t__ mfp; int ap_rsn_ie_len; int ap_rsn_ie; } ;
struct wpa_ie_data {int capabilities; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,struct wpa_ie_data*) ;

int FUNC_1(struct wpa_sm *VAR_3)
{
 struct wpa_ie_data VAR_4;

 if (VAR_3->mfp == VAR_0 || !VAR_3->ap_rsn_ie)
  return 0;

 if (FUNC_0(VAR_3->ap_rsn_ie, VAR_3->ap_rsn_ie_len, &VAR_4) >= 0 &&
     VAR_4.capabilities & (VAR_2 | VAR_1))
  return 1;

 return 0;
}
