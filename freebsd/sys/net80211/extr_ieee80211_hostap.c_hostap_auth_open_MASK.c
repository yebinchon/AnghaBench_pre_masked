
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int is_rx_bad_auth; } ;
struct ieee80211vap {scalar_t__ iv_state; TYPE_2__* iv_acl; struct ieee80211_node* iv_bss; TYPE_1__ iv_stats; } ;
struct ieee80211_node {scalar_t__ ni_authmode; int ni_flags; int ni_macaddr; int * ni_challenge; struct ieee80211vap* ni_vap; } ;
struct ieee80211_frame {int i_addr2; } ;
struct TYPE_4__ {scalar_t__ (* iac_getpolicy ) (struct ieee80211vap*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ieee80211vap*,int,int ,char*,char*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct ieee80211vap*,int,int ,char*,char*) ;
 int FUNC_3 (struct ieee80211_node*,int ,int) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int,char*) ;
 int VAR_12 ;
 struct ieee80211_node* FUNC_5 (struct ieee80211vap*,int ) ;
 int FUNC_6 (struct ieee80211_node*) ;
 int FUNC_7 (struct ieee80211_node*) ;
 int FUNC_8 (struct ieee80211_node*) ;
 int FUNC_9 (struct ieee80211_node*,int ,int ,int) ;
 scalar_t__ FUNC_10 (struct ieee80211vap*) ;

__attribute__((used)) static void
FUNC_11(struct ieee80211_node *VAR_13, struct ieee80211_frame *VAR_14,
    int VAR_15, int VAR_16, uint16_t VAR_17, uint16_t VAR_18)
{
 struct ieee80211vap *VAR_19 = VAR_13->ni_vap;

 FUNC_4(VAR_19->iv_state == VAR_11, ("state %d", VAR_19->iv_state));

 if (VAR_13->ni_authmode == VAR_2) {
  FUNC_0(VAR_19, VAR_6,
      VAR_13->ni_macaddr, "open auth",
      "bad sta auth mode %u", VAR_13->ni_authmode);
  VAR_19->iv_stats.is_rx_bad_auth++;





  if (VAR_13->ni_challenge != ((void*)0)) {
   FUNC_1(VAR_13->ni_challenge, VAR_12);
   VAR_13->ni_challenge = ((void*)0);
  }

  FUNC_9(VAR_13, VAR_14->i_addr2,
      VAR_3,
      (VAR_17 + 1) | (VAR_10<<16));
  return;
 }
 if (VAR_17 != VAR_1) {
  VAR_19->iv_stats.is_rx_bad_auth++;
  return;
 }

 if (VAR_13 == VAR_19->iv_bss) {
  VAR_13 = FUNC_5(VAR_19, VAR_14->i_addr2);
  if (VAR_13 == ((void*)0))
   return;
 } else if ((VAR_13->ni_flags & VAR_8) == 0)
  (void) FUNC_8(VAR_13);





 VAR_13->ni_flags |= VAR_8;




 VAR_13->ni_flags |= VAR_9;

 if (VAR_19->iv_acl != ((void*)0) &&
     VAR_19->iv_acl->iac_getpolicy(VAR_19) == VAR_4) {







  FUNC_2(VAR_19,
      VAR_6 | VAR_5, VAR_13->ni_macaddr,
      "%s", "station authentication defered (radius acl)");
  FUNC_7(VAR_13);
 } else {
  FUNC_3(VAR_13, VAR_3, VAR_17 + 1);
  FUNC_2(VAR_19,
      VAR_7 | VAR_6, VAR_13->ni_macaddr,
      "%s", "station authenticated (open)");




  if (VAR_13->ni_authmode != VAR_0)
   FUNC_6(VAR_13);
 }
}
