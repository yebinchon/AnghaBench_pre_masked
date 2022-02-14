
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ieee80211vap {scalar_t__ iv_opmode; int * iv_nw_keys; TYPE_1__* iv_ic; int iv_bss; } ;
struct ieee80211req_del_key {int idk_keyix; int idk_macaddr; } ;
struct ieee80211req {int i_len; int i_data; } ;
struct ieee80211_node {int ni_bssid; } ;
typedef int dk ;
struct TYPE_2__ {int ic_sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,struct ieee80211req_del_key*,int) ;
 int FUNC_2 (struct ieee80211vap*,int *) ;
 struct ieee80211_node* FUNC_3 (int *,struct ieee80211vap*,int ) ;
 int FUNC_4 (struct ieee80211_node*) ;
 int FUNC_5 (struct ieee80211_node*) ;
 struct ieee80211_node* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct ieee80211vap *VAR_6, struct ieee80211req *VAR_7)
{
 struct ieee80211req_del_key VAR_8;
 int VAR_9, VAR_10;

 if (VAR_7->i_len != sizeof(VAR_8))
  return VAR_1;
 VAR_10 = FUNC_1(VAR_7->i_data, &VAR_8, sizeof(VAR_8));
 if (VAR_10)
  return VAR_10;
 VAR_9 = VAR_8.idk_keyix;

 if (VAR_8.idk_keyix == (uint8_t) VAR_3) {
  struct ieee80211_node *VAR_11;

  if (VAR_6->iv_opmode == VAR_4) {
   VAR_11 = FUNC_6(VAR_6->iv_bss);
   if (!FUNC_0(VAR_8.idk_macaddr, VAR_11->ni_bssid)) {
    FUNC_4(VAR_11);
    return VAR_0;
   }
  } else {
   VAR_11 = FUNC_3(&VAR_6->iv_ic->ic_sta, VAR_6,
    VAR_8.idk_macaddr);
   if (VAR_11 == ((void*)0))
    return VAR_2;
  }

  FUNC_5(VAR_11);
  FUNC_4(VAR_11);
 } else {
  if (VAR_9 >= VAR_5)
   return VAR_1;

  FUNC_2(VAR_6, &VAR_6->iv_nw_keys[VAR_9]);
 }
 return 0;
}
