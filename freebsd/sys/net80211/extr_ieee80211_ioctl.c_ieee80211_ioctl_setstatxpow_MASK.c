
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int txpow ;
struct ieee80211vap {TYPE_1__* iv_ic; } ;
struct ieee80211req_sta_txpow {int it_txpow; int it_macaddr; } ;
struct ieee80211req {int i_len; int i_data; } ;
struct ieee80211_node {int ni_txpower; } ;
struct TYPE_2__ {int ic_sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ieee80211req_sta_txpow*,int) ;
 struct ieee80211_node* FUNC_1 (int *,struct ieee80211vap*,int ) ;
 int FUNC_2 (struct ieee80211_node*) ;

__attribute__((used)) static int
FUNC_3(struct ieee80211vap *VAR_2, struct ieee80211req *VAR_3)
{
 struct ieee80211_node *VAR_4;
 struct ieee80211req_sta_txpow VAR_5;
 int VAR_6;

 if (VAR_3->i_len != sizeof(VAR_5))
  return VAR_0;
 VAR_6 = FUNC_0(VAR_3->i_data, &VAR_5, sizeof(VAR_5));
 if (VAR_6 != 0)
  return VAR_6;
 VAR_4 = FUNC_1(&VAR_2->iv_ic->ic_sta, VAR_2, VAR_5.it_macaddr);
 if (VAR_4 == ((void*)0))
  return VAR_1;
 VAR_4->ni_txpower = VAR_5.it_txpow;
 FUNC_2(VAR_4);
 return VAR_6;
}
