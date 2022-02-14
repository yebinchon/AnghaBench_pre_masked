
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scanlist {int dummy; } ;
struct ieee80211vap {scalar_t__ iv_des_mode; struct ieee80211_channel* iv_des_chan; struct ieee80211com* iv_ic; } ;
struct ieee80211com {int ic_nchans; struct ieee80211_channel* ic_channels; } ;
struct ieee80211_scan_state {scalar_t__ ss_last; struct ieee80211_channel** ss_chans; } ;
struct ieee80211_channel {int dummy; } ;


 struct ieee80211_channel* VAR_0 ;
 scalar_t__ FUNC_0 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_1 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (struct scanlist const*,struct ieee80211_channel*) ;
 scalar_t__ FUNC_4 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_5 (struct ieee80211vap*,struct ieee80211_channel*) ;
 int FUNC_6 (struct ieee80211_scan_state*,struct ieee80211_channel*) ;

__attribute__((used)) static void
FUNC_7(struct ieee80211_scan_state *VAR_3, struct ieee80211vap *VAR_4,
 const struct scanlist VAR_5[])
{
 struct ieee80211com *VAR_6 = VAR_4->iv_ic;
 struct ieee80211_channel *VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_6->ic_nchans; VAR_8++) {
  if (VAR_3->ss_last >= VAR_2)
   break;

  VAR_7 = &VAR_6->ic_channels[VAR_8];






  if (FUNC_0(VAR_7) || FUNC_1(VAR_7) ||
      FUNC_2(VAR_7))
   continue;





  if (VAR_4->iv_des_mode != VAR_1 &&
      VAR_4->iv_des_mode != FUNC_4(VAR_7))
   continue;




  if (FUNC_5(VAR_4, VAR_7))
   continue;







  if (FUNC_3(VAR_5, VAR_7))
   continue;


  VAR_3->ss_chans[VAR_3->ss_last++] = VAR_7;
 }
 VAR_7 = VAR_4->iv_des_chan;
 if (VAR_7 != VAR_0 &&
     !FUNC_6(VAR_3, VAR_7) &&
     (VAR_4->iv_des_mode == VAR_1 ||
      VAR_4->iv_des_mode == FUNC_4(VAR_7)) &&
     VAR_3->ss_last < VAR_2)
  VAR_3->ss_chans[VAR_3->ss_last++] = VAR_7;
}
