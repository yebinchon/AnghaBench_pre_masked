
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct ieee80211vap {scalar_t__ iv_scanvalid; struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_flags; scalar_t__ ic_lastscan; struct ieee80211_scan_state* ic_scan; } ;
struct ieee80211_scanner {int dummy; } ;
struct ieee80211_scan_state {int ss_flags; TYPE_1__* ss_ops; } ;
struct ieee80211_scan_ssid {int dummy; } ;
struct TYPE_4__ {int ss_iflags; } ;
struct TYPE_3__ {int (* scan_end ) (struct ieee80211_scan_state*,struct ieee80211vap*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211com*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (struct ieee80211_scan_state*) ;
 int FUNC_2 (struct ieee80211vap*) ;
 int FUNC_3 (struct ieee80211vap*,struct ieee80211_scan_state*,int ,struct ieee80211_scan_ssid const*) ;
 int FUNC_4 (struct ieee80211_scanner const*,struct ieee80211vap*,int,int ,int ,int ,int ,struct ieee80211_scan_ssid const*) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct ieee80211_scan_state*,struct ieee80211vap*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_7(const struct ieee80211_scanner *VAR_5,
    struct ieee80211vap *VAR_6, int VAR_7,
    u_int VAR_8, u_int VAR_9, u_int VAR_10,
    u_int VAR_11, const struct ieee80211_scan_ssid VAR_12[])
{
 struct ieee80211com *VAR_13 = VAR_6->iv_ic;
 struct ieee80211_scan_state *VAR_14 = VAR_13->ic_scan;
 int VAR_15;

 FUNC_0(VAR_13);

 if (VAR_14->ss_ops != ((void*)0)) {

  if ((VAR_7 & VAR_2) == 0) {




   FUNC_3(VAR_6, VAR_14, VAR_11, VAR_12);
   VAR_7 |= VAR_2;
  }
  if ((VAR_13->ic_flags & VAR_0) == 0 &&
      (VAR_7 & VAR_1) == 0 &&
      FUNC_5(VAR_4, VAR_13->ic_lastscan + VAR_6->iv_scanvalid)) {
   FUNC_1(VAR_14)->ss_iflags |= VAR_3;
   VAR_13->ic_flags |= VAR_0;


   VAR_14->ss_flags = VAR_7 & 0xff;
   VAR_15 = VAR_14->ss_ops->scan_end(VAR_14, VAR_6);

   VAR_13->ic_flags &= ~VAR_0;
   FUNC_1(VAR_14)->ss_iflags &= ~VAR_3;
   if (VAR_15) {
    FUNC_2(VAR_6);
    return 1;
   }
  }
 }
 VAR_15 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8,
     VAR_9, VAR_10, VAR_11, VAR_12);

 return VAR_15;
}
