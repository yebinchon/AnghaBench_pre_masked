
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211req {int i_len; int i_data; } ;
struct ieee80211com {int dummy; } ;
struct ieee80211_channel {scalar_t__ ic_freq; int ic_flags; } ;
typedef int chan ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ieee80211_channel* VAR_2 ;
 int FUNC_0 (int ,struct ieee80211_channel*,int) ;
 struct ieee80211_channel* FUNC_1 (struct ieee80211com*,scalar_t__,int ) ;
 int FUNC_2 (struct ieee80211vap*,struct ieee80211_channel*) ;

__attribute__((used)) static int
FUNC_3(struct ieee80211vap *VAR_3,
 const struct ieee80211req *VAR_4)
{
 struct ieee80211com *VAR_5 = VAR_3->iv_ic;
 struct ieee80211_channel VAR_6, *VAR_7;
 int VAR_8;

 if (VAR_4->i_len != sizeof(VAR_6))
  return VAR_0;
 VAR_8 = FUNC_0(VAR_4->i_data, &VAR_6, sizeof(VAR_6));
 if (VAR_8 != 0)
  return VAR_8;


 if (VAR_6.ic_freq == 0 || VAR_6.ic_freq == VAR_1) {
  VAR_7 = VAR_2;
 } else {
  VAR_7 = FUNC_1(VAR_5, VAR_6.ic_freq, VAR_6.ic_flags);
  if (VAR_7 == ((void*)0))
   return VAR_0;
 }
 return FUNC_2(VAR_3, VAR_7);
}
