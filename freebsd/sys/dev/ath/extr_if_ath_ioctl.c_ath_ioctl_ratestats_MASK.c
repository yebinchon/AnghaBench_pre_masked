
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211com {int ic_sta; } ;
struct ieee80211_node {int dummy; } ;
struct ath_softc {struct ieee80211com sc_ic; } ;
struct TYPE_2__ {int macaddr; } ;
struct ath_rateioctl {TYPE_1__ is_u; } ;
struct ath_node {int dummy; } ;


 struct ath_node* FUNC_0 (struct ieee80211_node*) ;
 int FUNC_1 (struct ath_node*) ;
 int FUNC_2 (struct ath_node*) ;
 int VAR_0 ;
 int FUNC_3 (struct ath_softc*,struct ath_node*,struct ath_rateioctl*) ;
 struct ieee80211_node* FUNC_4 (int *,int ) ;
 int FUNC_5 (struct ieee80211_node*) ;

__attribute__((used)) static int
FUNC_6(struct ath_softc *VAR_1, struct ath_rateioctl *VAR_2)
{
 struct ath_node *VAR_3;
 struct ieee80211com *VAR_4 = &VAR_1->sc_ic;
 struct ieee80211_node *VAR_5;
 int VAR_6 = 0;


 VAR_5 = FUNC_4(&VAR_4->ic_sta, VAR_2->is_u.macaddr);
 if (VAR_5 == ((void*)0)) {
  VAR_6 = VAR_0;
  goto bad;
 }


 VAR_3 = FUNC_0(VAR_5);
 FUNC_1(VAR_3);


 VAR_6 = FUNC_3(VAR_1, VAR_3, VAR_2);




 FUNC_2(VAR_3);


 FUNC_5(VAR_5);

bad:
 return (VAR_6);
}
