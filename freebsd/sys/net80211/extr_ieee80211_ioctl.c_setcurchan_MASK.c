
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {scalar_t__ iv_opmode; scalar_t__ iv_state; struct ieee80211_channel* iv_des_chan; TYPE_1__* iv_bss; int iv_ifp; int iv_des_mode; struct ieee80211com* iv_ic; } ;
struct ieee80211com {struct ieee80211_channel* ic_curchan; void* ic_rt; } ;
struct ieee80211_channel {int dummy; } ;
struct TYPE_2__ {struct ieee80211_channel* ni_chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_channel* VAR_2 ;
 scalar_t__ FUNC_0 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_1 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct ieee80211vap*) ;
 int FUNC_5 (struct ieee80211_channel*,int ) ;
 void* FUNC_6 (struct ieee80211_channel*) ;
 int FUNC_7 (struct ieee80211vap*,int ,int ) ;
 int FUNC_8 (struct ieee80211com*,struct ieee80211_channel*) ;

__attribute__((used)) static int
FUNC_9(struct ieee80211vap *VAR_9, struct ieee80211_channel *VAR_10)
{
 struct ieee80211com *VAR_11 = VAR_9->iv_ic;
 int VAR_12;

 if (VAR_10 != VAR_2) {
  if (FUNC_2(VAR_10))
   return VAR_0;
  if (VAR_9->iv_opmode == VAR_3) {
   if (FUNC_1(VAR_10))
    return VAR_1;
   if (!FUNC_5(VAR_10, VAR_9->iv_des_mode))
    return VAR_1;
  } else if (VAR_9->iv_opmode == VAR_4) {
   if (FUNC_0(VAR_10))
    return VAR_1;
  }
  if ((VAR_9->iv_state == VAR_6 || VAR_9->iv_state == VAR_8) &&
      VAR_9->iv_bss->ni_chan == VAR_10)
   return 0;
 }
 VAR_9->iv_des_chan = VAR_10;

 VAR_12 = 0;
 if (VAR_9->iv_opmode == VAR_5 &&
     VAR_9->iv_des_chan != VAR_2) {



  if (FUNC_3(VAR_9->iv_ifp)) {

   FUNC_8(VAR_11, VAR_9->iv_des_chan);
   VAR_9->iv_bss->ni_chan = VAR_11->ic_curchan;
  } else {
   VAR_11->ic_curchan = VAR_9->iv_des_chan;
   VAR_11->ic_rt = FUNC_6(VAR_11->ic_curchan);
  }
 } else {





  if (FUNC_4(VAR_9))
   FUNC_7(VAR_9, VAR_7, 0);
  else if (VAR_9->iv_des_chan != VAR_2) {





   VAR_11->ic_curchan = VAR_9->iv_des_chan;
   VAR_11->ic_rt = FUNC_6(VAR_11->ic_curchan);
  }
 }
 return VAR_12;
}
