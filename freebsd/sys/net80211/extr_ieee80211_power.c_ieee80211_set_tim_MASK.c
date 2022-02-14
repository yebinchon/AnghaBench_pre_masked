
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct ieee80211vap {scalar_t__ iv_opmode; scalar_t__ iv_max_aid; int (* iv_update_beacon ) (struct ieee80211vap*,int ) ;int iv_ps_pending; int iv_tim_bitmap; } ;
struct ieee80211com {int dummy; } ;
struct ieee80211_node {int ni_associd; struct ieee80211com* ni_ic; struct ieee80211vap* ni_vap; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ieee80211com*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct ieee80211com*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (struct ieee80211vap*,int ) ;

__attribute__((used)) static int
FUNC_8(struct ieee80211_node *VAR_3, int VAR_4)
{
 struct ieee80211vap *VAR_5 = VAR_3->ni_vap;
 struct ieee80211com *VAR_6 = VAR_3->ni_ic;
 uint16_t VAR_7;
 int VAR_8;

 FUNC_3(VAR_5->iv_opmode == VAR_1 ||
  VAR_5->iv_opmode == VAR_2,
  ("operating mode %u", VAR_5->iv_opmode));

 VAR_7 = FUNC_0(VAR_3->ni_associd);
 FUNC_3(VAR_7 < VAR_5->iv_max_aid,
  ("bogus aid %u, max %u", VAR_7, VAR_5->iv_max_aid));

 FUNC_1(VAR_6);
 VAR_8 = (VAR_4 != (FUNC_5(VAR_5->iv_tim_bitmap, VAR_7) != 0));
 if (VAR_8) {
  if (VAR_4) {
   FUNC_6(VAR_5->iv_tim_bitmap, VAR_7);
   VAR_5->iv_ps_pending++;
  } else {
   FUNC_4(VAR_5->iv_tim_bitmap, VAR_7);
   VAR_5->iv_ps_pending--;
  }

  VAR_5->iv_update_beacon(VAR_5, VAR_0);
 }
 FUNC_2(VAR_6);

 return VAR_8;
}
