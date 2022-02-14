
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {scalar_t__ iv_opmode; int iv_flags; struct ieee80211com* iv_ic; } ;
struct ieee80211req {int i_len; int i_data; } ;
struct ieee80211com {int ic_flags; } ;
struct TYPE_2__ {int ic_flags; int ic_freq; } ;
struct ieee80211_chanswitch_req {scalar_t__ csa_count; int csa_mode; TYPE_1__ csa_chan; } ;
struct ieee80211_channel {int dummy; } ;
typedef int csr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ieee80211com*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct ieee80211com*) ;
 int FUNC_2 (int ,struct ieee80211_chanswitch_req*,int) ;
 int FUNC_3 (struct ieee80211com*) ;
 int FUNC_4 (struct ieee80211com*,struct ieee80211_channel*,int ,scalar_t__) ;
 struct ieee80211_channel* FUNC_5 (struct ieee80211com*,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct ieee80211vap *VAR_7, struct ieee80211req *VAR_8)
{
 struct ieee80211com *VAR_9 = VAR_7->iv_ic;
 struct ieee80211_chanswitch_req VAR_10;
 struct ieee80211_channel *VAR_11;
 int VAR_12;

 if (VAR_8->i_len != sizeof(VAR_10))
  return VAR_1;
 VAR_12 = FUNC_2(VAR_8->i_data, &VAR_10, sizeof(VAR_10));
 if (VAR_12 != 0)
  return VAR_12;

 if (VAR_7->iv_opmode != VAR_6 ||
     (VAR_7->iv_flags & VAR_5) == 0)
  return VAR_3;
 VAR_11 = FUNC_5(VAR_9,
     VAR_10.csa_chan.ic_freq, VAR_10.csa_chan.ic_flags);
 if (VAR_11 == ((void*)0))
  return VAR_2;
 FUNC_0(VAR_9);
 if ((VAR_9->ic_flags & VAR_4) == 0)
  FUNC_4(VAR_9, VAR_11, VAR_10.csa_mode, VAR_10.csa_count);
 else if (VAR_10.csa_count == 0)
  FUNC_3(VAR_9);
 else
  VAR_12 = VAR_0;
 FUNC_1(VAR_9);
 return VAR_12;
}
