
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int dot11MeshAwakeWindowDuration; } ;
struct ieee80211_if_mesh {scalar_t__ ps_peers_light_sleep; scalar_t__ ps_peers_deep_sleep; scalar_t__ nonpeer_pm; TYPE_1__ mshcfg; } ;
struct TYPE_4__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct ieee80211_sub_if_data *VAR_3,
        struct sk_buff *VAR_4)
{
 struct ieee80211_if_mesh *VAR_5 = &VAR_3->u.mesh;
 u8 *VAR_6;


 if (VAR_5->ps_peers_light_sleep == 0 &&
     VAR_5->ps_peers_deep_sleep == 0 &&
     VAR_5->nonpeer_pm == VAR_1)
  return 0;

 if (FUNC_2(VAR_4) < 4)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_4, 2 + 2);
 *VAR_6++ = VAR_2;
 *VAR_6++ = 2;
 FUNC_0(VAR_5->mshcfg.dot11MeshAwakeWindowDuration, VAR_6);

 return 0;
}
