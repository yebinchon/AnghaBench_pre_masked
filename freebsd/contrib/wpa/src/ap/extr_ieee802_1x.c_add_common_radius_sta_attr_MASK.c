
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sta_info {scalar_t__ aid; int flags; scalar_t__ auth_alg; scalar_t__ wpa_sm; TYPE_1__* eapol_sm; scalar_t__ acct_session_id; int addr; } ;
struct radius_msg {int dummy; } ;
struct hostapd_radius_attr {int dummy; } ;
struct hostapd_data {TYPE_2__* conf; } ;
typedef int buf ;
struct TYPE_4__ {int wpa; scalar_t__ osen; int mobility_domain; int wpa_key_mgmt; int disable_pmksa_caching; } ;
struct TYPE_3__ {scalar_t__ acct_multi_session_id; } ;


 unsigned long long FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct hostapd_data*,struct hostapd_radius_attr*,struct sta_info*,struct radius_msg*) ;
 int FUNC_3 (struct hostapd_radius_attr*,int ) ;
 int FUNC_4 (char*,int,char*,unsigned long long,...) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct hostapd_data*) ;
 int FUNC_8 (struct radius_msg*,int ,int *,int ) ;
 int FUNC_9 (struct radius_msg*,int ,scalar_t__) ;
 int FUNC_10 (struct hostapd_data*,struct sta_info*) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,char*) ;

__attribute__((used)) static int FUNC_14(struct hostapd_data *VAR_13,
          struct hostapd_radius_attr *VAR_14,
          struct sta_info *VAR_15,
          struct radius_msg *VAR_16)
{
 char VAR_17[128];

 if (!FUNC_3(VAR_14,
         VAR_9) &&
     !FUNC_9(VAR_16, VAR_9,
           VAR_10)) {
  FUNC_13(VAR_0, "Could not add Service-Type");
  return -1;
 }

 if (!FUNC_3(VAR_14,
         VAR_8) &&
     VAR_15->aid > 0 &&
     !FUNC_9(VAR_16, VAR_8, VAR_15->aid)) {
  FUNC_13(VAR_0, "Could not add NAS-Port");
  return -1;
 }

 FUNC_4(VAR_17, sizeof(VAR_17), VAR_2,
      FUNC_0(VAR_15->addr));
 VAR_17[sizeof(VAR_17) - 1] = '\0';
 if (!FUNC_8(VAR_16, VAR_5,
     (u8 *) VAR_17, FUNC_6(VAR_17))) {
  FUNC_13(VAR_0, "Could not add Calling-Station-Id");
  return -1;
 }

 if (VAR_15->flags & VAR_12) {
  FUNC_5(VAR_17, "IEEE 802.11i Pre-Authentication",
      sizeof(VAR_17));
 } else {
  FUNC_4(VAR_17, sizeof(VAR_17), "CONNECT %d%sMbps %s",
       FUNC_10(VAR_13, VAR_15) / 2,
       (FUNC_10(VAR_13, VAR_15) & 1) ? ".5" : "",
       FUNC_7(VAR_13));
  VAR_17[sizeof(VAR_17) - 1] = '\0';
 }
 if (!FUNC_3(VAR_14,
         VAR_6) &&
     !FUNC_8(VAR_16, VAR_6,
     (u8 *) VAR_17, FUNC_6(VAR_17))) {
  FUNC_13(VAR_0, "Could not add Connect-Info");
  return -1;
 }

 if (VAR_15->acct_session_id) {
  FUNC_4(VAR_17, sizeof(VAR_17), "%016llX",
       (unsigned long long) VAR_15->acct_session_id);
  if (!FUNC_8(VAR_16, VAR_4,
      (u8 *) VAR_17, FUNC_6(VAR_17))) {
   FUNC_13(VAR_0, "Could not add Acct-Session-Id");
   return -1;
  }
 }

 if ((VAR_13->conf->wpa & 2) &&
     !VAR_13->conf->disable_pmksa_caching &&
     VAR_15->eapol_sm && VAR_15->eapol_sm->acct_multi_session_id) {
  FUNC_4(VAR_17, sizeof(VAR_17), "%016llX",
       (unsigned long long)
       VAR_15->eapol_sm->acct_multi_session_id);
  if (!FUNC_8(
       VAR_16, VAR_3,
       (u8 *) VAR_17, FUNC_6(VAR_17))) {
   FUNC_13(VAR_1,
       "Could not add Acct-Multi-Session-Id");
   return -1;
  }
 }
 if ((VAR_13->conf->wpa || VAR_13->conf->osen) && VAR_15->wpa_sm &&
     FUNC_2(VAR_13, VAR_14, VAR_15, VAR_16) < 0)
  return -1;

 return 0;
}
