
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ieee80211vap {TYPE_1__* iv_ic; } ;
struct ieee80211req {int i_len; int i_data; } ;
struct ieee80211_node {int ni_stats; } ;
struct TYPE_2__ {int ic_sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int) ;
 struct ieee80211_node* FUNC_1 (int *,struct ieee80211vap*,int *) ;
 int FUNC_2 (struct ieee80211_node*) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct ieee80211vap *VAR_3, struct ieee80211req *VAR_4)
{
 struct ieee80211_node *VAR_5;
 uint8_t VAR_6[VAR_2];
 int VAR_7;






 if (VAR_4->i_len < VAR_2)
  return VAR_0;
 VAR_7 = FUNC_0(VAR_4->i_data, VAR_6, VAR_2);
 if (VAR_7 != 0)
  return VAR_7;
 VAR_5 = FUNC_1(&VAR_3->iv_ic->ic_sta, VAR_3, VAR_6);
 if (VAR_5 == ((void*)0))
  return VAR_1;

 FUNC_3(&VAR_5->ni_stats, 0, sizeof(VAR_5->ni_stats));
 FUNC_2(VAR_5);
 return 0;
}
