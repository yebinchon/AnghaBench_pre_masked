
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlan ;
struct ieee80211vap {int iv_bss; TYPE_1__* iv_ic; } ;
struct ieee80211req_sta_vlan {int sv_vlan; int sv_macaddr; } ;
struct ieee80211req {int i_len; int i_data; } ;
struct ieee80211_node {int ni_vlan; } ;
struct TYPE_2__ {int ic_sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct ieee80211req_sta_vlan*,int) ;
 struct ieee80211_node* FUNC_2 (int *,struct ieee80211vap*,int ) ;
 int FUNC_3 (struct ieee80211_node*) ;
 struct ieee80211_node* FUNC_4 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(struct ieee80211vap *VAR_3, struct ieee80211req *VAR_4)
{
 struct ieee80211_node *VAR_5;
 struct ieee80211req_sta_vlan VAR_6;
 int VAR_7;

 if (VAR_4->i_len != sizeof(VAR_6))
  return VAR_0;
 VAR_7 = FUNC_1(VAR_4->i_data, &VAR_6, sizeof(VAR_6));
 if (VAR_7 != 0)
  return VAR_7;
 if (!FUNC_0(VAR_6.sv_macaddr, VAR_2)) {
  VAR_5 = FUNC_2(&VAR_3->iv_ic->ic_sta, VAR_3,
      VAR_6.sv_macaddr);
  if (VAR_5 == ((void*)0))
   return VAR_1;
 } else
  VAR_5 = FUNC_4(VAR_3->iv_bss);
 VAR_5->ni_vlan = VAR_6.sv_vlan;
 FUNC_3(VAR_5);
 return VAR_7;
}
