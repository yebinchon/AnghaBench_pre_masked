
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211req {int i_len; int i_data; } ;
struct ieee80211com {int ic_chan_active; } ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct ieee80211vap *VAR_0, struct ieee80211req *VAR_1)
{
 struct ieee80211com *VAR_2 = VAR_0->iv_ic;

 if (sizeof(VAR_2->ic_chan_active) < VAR_1->i_len)
  VAR_1->i_len = sizeof(VAR_2->ic_chan_active);
 return FUNC_0(&VAR_2->ic_chan_active, VAR_1->i_data, VAR_1->i_len);
}
