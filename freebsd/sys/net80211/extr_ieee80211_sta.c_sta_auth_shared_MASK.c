
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int is_rx_authfail_code; int is_rx_bad_auth; int is_rx_auth_fail; } ;
struct ieee80211vap {int iv_flags; scalar_t__ iv_state; TYPE_1__ iv_stats; } ;
struct ieee80211_node {int ni_authmode; int * ni_challenge; int ni_macaddr; struct ieee80211vap* ni_vap; } ;
struct ieee80211_frame {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct ieee80211vap*,int,struct ieee80211_frame*,char*,char*,int) ;
 int FUNC_1 (struct ieee80211vap*,int,int ,char*,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct ieee80211vap*,int,struct ieee80211_frame*,char*,int) ;
 int VAR_8 ;
 int FUNC_4 (struct ieee80211_node*,int ,int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (struct ieee80211_node*) ;
 int FUNC_6 (struct ieee80211vap*,int ,int ) ;
 int FUNC_7 (int *,int*,int) ;

__attribute__((used)) static void
FUNC_8(struct ieee80211_node *VAR_13, struct ieee80211_frame *VAR_14,
    uint8_t *VAR_15, uint8_t *VAR_16, int VAR_17, int VAR_18,
    uint16_t VAR_19, uint16_t VAR_20)
{
 struct ieee80211vap *VAR_21 = VAR_13->ni_vap;
 uint8_t *VAR_22;
 if ((VAR_21->iv_flags & VAR_5) == 0) {
  FUNC_1(VAR_21, VAR_6,
      VAR_13->ni_macaddr, "shared key auth",
      "%s", " PRIVACY is disabled");
  goto bad;
 }





 if (VAR_13->ni_authmode != VAR_0 &&
     VAR_13->ni_authmode != VAR_1) {
  FUNC_1(VAR_21, VAR_6,
      VAR_13->ni_macaddr, "shared key auth",
      "bad sta auth mode %u", VAR_13->ni_authmode);
  VAR_21->iv_stats.is_rx_bad_auth++;
  goto bad;
 }

 VAR_22 = ((void*)0);
 if (VAR_15 + 1 < VAR_16) {
  if ((VAR_15[1] + 2) > (VAR_16 - VAR_15)) {
   FUNC_1(VAR_21, VAR_6,
       VAR_13->ni_macaddr, "shared key auth",
       "ie %d/%d too long",
       VAR_15[0], (VAR_15[1] + 2) - (VAR_16 - VAR_15));
   VAR_21->iv_stats.is_rx_bad_auth++;
   goto bad;
  }
  if (*VAR_15 == VAR_3)
   VAR_22 = VAR_15;
  VAR_15 += VAR_15[1] + 2;
 }
 switch (VAR_19) {
 case 130:
 case 128:
  if (VAR_22 == ((void*)0)) {
   FUNC_1(VAR_21, VAR_6,
       VAR_13->ni_macaddr, "shared key auth",
       "%s", "no challenge");
   VAR_21->iv_stats.is_rx_bad_auth++;
   goto bad;
  }
  if (VAR_22[1] != VAR_2) {
   FUNC_1(VAR_21, VAR_6,
       VAR_13->ni_macaddr, "shared key auth",
       "bad challenge len %d", VAR_22[1]);
   VAR_21->iv_stats.is_rx_bad_auth++;
   goto bad;
  }
 default:
  break;
 }
 if (VAR_21->iv_state != VAR_10)
  return;
 switch (VAR_19) {
 case 129:
  if (VAR_13->ni_challenge != ((void*)0)) {
   FUNC_2(VAR_13->ni_challenge, VAR_12);
   VAR_13->ni_challenge = ((void*)0);
  }
  if (VAR_20 != 0) {
   FUNC_3(VAR_21,
       VAR_7 | VAR_6, VAR_14,
       "shared key auth failed (reason %d)", VAR_20);
   VAR_21->iv_stats.is_rx_auth_fail++;
   VAR_21->iv_stats.is_rx_authfail_code = VAR_20;
   return;
  }
  FUNC_6(VAR_21, VAR_9, 0);
  break;
 case 130:
  if (!FUNC_5(VAR_13))
   return;

  FUNC_7(VAR_13->ni_challenge, &VAR_22[2], VAR_22[1]);
  FUNC_4(VAR_13,
   VAR_4, VAR_19 + 1);
  break;
 default:
  FUNC_0(VAR_21, VAR_6,
      VAR_14, "shared key auth", "bad seq %d", VAR_19);
  VAR_21->iv_stats.is_rx_bad_auth++;
  return;
 }
 return;
bad:





 if (VAR_21->iv_state == VAR_10)
  FUNC_6(VAR_21, VAR_11,
      VAR_8);
}
