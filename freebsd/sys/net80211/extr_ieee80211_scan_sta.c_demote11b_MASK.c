
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {scalar_t__ iv_des_mode; int iv_ic; } ;
struct ieee80211_channel {int ic_flags; int ic_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ieee80211_channel*) ;
 scalar_t__ VAR_3 ;
 struct ieee80211_channel* FUNC_1 (int ,int ,int) ;

__attribute__((used)) static struct ieee80211_channel *
FUNC_2(struct ieee80211vap *VAR_4, struct ieee80211_channel *VAR_5)
{
 struct ieee80211_channel *VAR_6;

 if (FUNC_0(VAR_5) &&
     VAR_4->iv_des_mode == VAR_3) {
  VAR_6 = FUNC_1(VAR_4->iv_ic, VAR_5->ic_freq,
      (VAR_5->ic_flags &~ (VAR_2 | VAR_1)) |
      VAR_0);
  if (VAR_6 != ((void*)0))
   VAR_5 = VAR_6;
 }
 return VAR_5;
}
