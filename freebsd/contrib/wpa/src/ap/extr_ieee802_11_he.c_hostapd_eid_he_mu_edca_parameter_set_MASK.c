
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ieee80211_he_mu_edca_parameter_set {int dummy; } ;
struct hostapd_data {TYPE_2__* iface; } ;
struct TYPE_4__ {TYPE_1__* conf; } ;
struct TYPE_3__ {int he_mu_edca; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_he_mu_edca_parameter_set*,int *,int) ;
 int FUNC_1 (int ,char*,scalar_t__*,int) ;

u8 * FUNC_2(struct hostapd_data *VAR_3, u8 *VAR_4)
{
 struct ieee80211_he_mu_edca_parameter_set *VAR_5;
 u8 *VAR_6;
 size_t VAR_7;

 VAR_6 = (u8 *) &VAR_3->iface->conf->he_mu_edca;
 for (VAR_7 = 0; VAR_7 < sizeof(*VAR_5); VAR_7++) {
  if (VAR_6[VAR_7])
   break;
 }
 if (VAR_7 == sizeof(*VAR_5))
  return VAR_4;

 VAR_6 = VAR_4;
 *VAR_6++ = VAR_1;
 *VAR_6++ = 1 + sizeof(*VAR_5);
 *VAR_6++ = VAR_2;

 VAR_5 = (struct ieee80211_he_mu_edca_parameter_set *) VAR_6;
 FUNC_0(VAR_5, &VAR_3->iface->conf->he_mu_edca, sizeof(*VAR_5));

 FUNC_1(VAR_0, "HE: MU EDCA Parameter Set element",
      VAR_6, sizeof(*VAR_5));

 VAR_6 += sizeof(*VAR_5);

 return VAR_6;
}
