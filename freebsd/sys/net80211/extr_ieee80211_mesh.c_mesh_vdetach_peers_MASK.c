
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ieee80211com {int ic_stageq; } ;
struct ieee80211_node {scalar_t__ ni_mlstate; int ni_macaddr; int ni_mltimer; int ni_mllid; int ni_mlpid; struct ieee80211com* ni_ic; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,void*) ;
 scalar_t__ FUNC_2 (struct ieee80211com*,int ) ;
 int FUNC_3 (struct ieee80211_node*,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_4, struct ieee80211_node *VAR_5)
{
 struct ieee80211com *VAR_6 = VAR_5->ni_ic;
 uint16_t VAR_7[3];

 if (VAR_5->ni_mlstate == VAR_2) {
  VAR_7[0] = VAR_5->ni_mlpid;
  VAR_7[1] = VAR_5->ni_mllid;
  VAR_7[2] = VAR_3;
  FUNC_3(VAR_5,
      VAR_0,
      VAR_1,
      VAR_7);
 }
 FUNC_0(&VAR_5->ni_mltimer);

 FUNC_1(&VAR_6->ic_stageq,
    (void *)(uintptr_t) FUNC_2(VAR_6, VAR_5->ni_macaddr));
}
