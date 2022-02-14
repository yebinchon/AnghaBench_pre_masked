
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int is_rx_bad_auth; int is_rx_auth_fail; } ;
struct ieee80211vap {scalar_t__ iv_state; int iv_flags; TYPE_2__ iv_stats; struct ieee80211_node* iv_bss; TYPE_1__* iv_acl; } ;
struct ieee80211_node {int ni_authmode; int ni_flags; int ni_noise; int ni_macaddr; int * ni_challenge; int ni_avgrssi; struct ieee80211vap* ni_vap; } ;
struct ieee80211_frame {int i_addr2; } ;
struct TYPE_3__ {int (* iac_getpolicy ) (struct ieee80211vap*) ;} ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct ieee80211vap*,int,int ,char*,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct ieee80211vap*,int,struct ieee80211_node*,char*,char*) ;
 int FUNC_2 (struct ieee80211vap*,int,int ,char*,char*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct ieee80211_node*,int ,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (struct ieee80211_node*) ;
 struct ieee80211_node* FUNC_8 (struct ieee80211vap*,int ) ;
 int FUNC_9 (struct ieee80211_node*) ;
 int FUNC_10 (struct ieee80211_node*) ;
 int FUNC_11 (struct ieee80211_node*) ;
 int FUNC_12 (struct ieee80211_node*,int ,int ,int) ;
 int FUNC_13 (int *,int*,int) ;
 int FUNC_14 (struct ieee80211vap*) ;

__attribute__((used)) static void
FUNC_15(struct ieee80211_node *VAR_16, struct ieee80211_frame *VAR_17,
    uint8_t *VAR_18, uint8_t *VAR_19, int VAR_20, int VAR_21,
    uint16_t VAR_22, uint16_t VAR_23)
{
 struct ieee80211vap *VAR_24 = VAR_16->ni_vap;
 uint8_t *VAR_25;
 int VAR_26, VAR_27;

 FUNC_5(VAR_24->iv_state == VAR_15, ("state %d", VAR_24->iv_state));
 if ((VAR_24->iv_flags & VAR_5) == 0) {
  FUNC_0(VAR_24, VAR_8,
      VAR_16->ni_macaddr, "shared key auth",
      "%s", " PRIVACY is disabled");
  VAR_27 = VAR_12;
  goto bad;
 }





 if (VAR_16->ni_authmode != VAR_0 &&
     VAR_16->ni_authmode != VAR_1) {
  FUNC_0(VAR_24, VAR_8,
      VAR_16->ni_macaddr, "shared key auth",
      "bad sta auth mode %u", VAR_16->ni_authmode);
  VAR_24->iv_stats.is_rx_bad_auth++;
  VAR_27 = VAR_12;
  goto bad;
 }

 VAR_25 = ((void*)0);
 if (VAR_18 + 1 < VAR_19) {
  if ((VAR_18[1] + 2) > (VAR_19 - VAR_18)) {
   FUNC_0(VAR_24, VAR_8,
       VAR_16->ni_macaddr, "shared key auth",
       "ie %d/%d too long",
       VAR_18[0], (VAR_18[1] + 2) - (VAR_19 - VAR_18));
   VAR_24->iv_stats.is_rx_bad_auth++;
   VAR_27 = VAR_13;
   goto bad;
  }
  if (*VAR_18 == VAR_3)
   VAR_25 = VAR_18;
  VAR_18 += VAR_18[1] + 2;
 }
 switch (VAR_22) {
 case 130:
 case 128:
  if (VAR_25 == ((void*)0)) {
   FUNC_0(VAR_24, VAR_8,
       VAR_16->ni_macaddr, "shared key auth",
       "%s", "no challenge");
   VAR_24->iv_stats.is_rx_bad_auth++;
   VAR_27 = VAR_13;
   goto bad;
  }
  if (VAR_25[1] != VAR_2) {
   FUNC_0(VAR_24, VAR_8,
       VAR_16->ni_macaddr, "shared key auth",
       "bad challenge len %d", VAR_25[1]);
   VAR_24->iv_stats.is_rx_bad_auth++;
   VAR_27 = VAR_13;
   goto bad;
  }
 default:
  break;
 }
 switch (VAR_22) {
 case 129:
  if (VAR_16 == VAR_24->iv_bss) {
   VAR_16 = FUNC_8(VAR_24, VAR_17->i_addr2);
   if (VAR_16 == ((void*)0)) {

    return;
   }
   VAR_26 = 1;
  } else {
   if ((VAR_16->ni_flags & VAR_10) == 0)
    (void) FUNC_11(VAR_16);
   VAR_26 = 0;
  }





  VAR_16->ni_flags |= VAR_10;




  VAR_16->ni_flags |= VAR_11;
  FUNC_3(VAR_16->ni_avgrssi, VAR_20);
  VAR_16->ni_noise = VAR_21;
  if (!FUNC_7(VAR_16)) {

   return;
  }
  FUNC_6(VAR_16->ni_challenge,
   VAR_2);
  FUNC_1(VAR_24, VAR_9 | VAR_8,
      VAR_16, "shared key %sauth request", VAR_26 ? "" : "re");







  if (VAR_24->iv_acl != ((void*)0) &&
      VAR_24->iv_acl->iac_getpolicy(VAR_24) == VAR_6) {
   FUNC_2(VAR_24,
       VAR_8 | VAR_7,
       VAR_16->ni_macaddr,
       "%s", "station authentication defered (radius acl)");
   FUNC_10(VAR_16);
   return;
  }
  break;
 case 128:
  if (VAR_16 == VAR_24->iv_bss) {
   FUNC_0(VAR_24, VAR_8,
       VAR_16->ni_macaddr, "shared key response",
       "%s", "unknown station");

   return;
  }
  if (VAR_16->ni_challenge == ((void*)0)) {
   FUNC_0(VAR_24, VAR_8,
       VAR_16->ni_macaddr, "shared key response",
       "%s", "no challenge recorded");
   VAR_24->iv_stats.is_rx_bad_auth++;
   VAR_27 = VAR_13;
   goto bad;
  }
  if (FUNC_13(VAR_16->ni_challenge, &VAR_25[2],
      VAR_25[1]) != 0) {
   FUNC_0(VAR_24, VAR_8,
       VAR_16->ni_macaddr, "shared key response",
       "%s", "challenge mismatch");
   VAR_24->iv_stats.is_rx_auth_fail++;
   VAR_27 = VAR_13;
   goto bad;
  }
  FUNC_1(VAR_24, VAR_9 | VAR_8,
      VAR_16, "%s", "station authenticated (shared key)");
  FUNC_9(VAR_16);
  break;
 default:
  FUNC_0(VAR_24, VAR_8,
      VAR_16->ni_macaddr, "shared key auth",
      "bad seq %d", VAR_22);
  VAR_24->iv_stats.is_rx_bad_auth++;
  VAR_27 = VAR_14;
  goto bad;
 }
 FUNC_4(VAR_16, VAR_4, VAR_22 + 1);
 return;
bad:




 FUNC_12(VAR_16, VAR_17->i_addr2,
     VAR_4,
     (VAR_22 + 1) | (VAR_27<<16));
}
