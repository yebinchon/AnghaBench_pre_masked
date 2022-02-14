
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {scalar_t__ iv_state; TYPE_1__* iv_bss; struct ieee80211com* iv_ic; } ;
struct ieee80211req {int i_len; int i_data; } ;
struct ieee80211com {struct ieee80211_channel* ic_curchan; } ;
struct ieee80211_channel {int dummy; } ;
struct TYPE_2__ {struct ieee80211_channel* ni_chan; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ieee80211_channel*,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct ieee80211vap *VAR_3, struct ieee80211req *VAR_4)
{
 struct ieee80211com *VAR_5 = VAR_3->iv_ic;
 struct ieee80211_channel *VAR_6;

 if (VAR_4->i_len != sizeof(struct ieee80211_channel))
  return VAR_0;





 if (VAR_3->iv_state == VAR_1 || VAR_3->iv_state == VAR_2)
  VAR_6 = VAR_3->iv_bss->ni_chan;
 else
  VAR_6 = VAR_5->ic_curchan;
 return FUNC_0(VAR_6, VAR_4->i_data, sizeof(*VAR_6));
}
