
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct mwl_softc {int (* sc_recv_action ) (struct ieee80211_node*,struct ieee80211_frame const*,int const*,int const*) ;int sc_mh; } ;
struct ieee80211_node {int ni_macaddr; TYPE_1__* ni_ic; } ;
struct ieee80211_frame {int dummy; } ;
struct ieee80211_action_ht_mimopowersave {int am_control; } ;
struct ieee80211_action {scalar_t__ ia_category; scalar_t__ ia_action; } ;
struct TYPE_2__ {struct mwl_softc* ic_softc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (struct ieee80211_node*,struct ieee80211_frame const*,int const*,int const*) ;

__attribute__((used)) static int
FUNC_3(struct ieee80211_node *VAR_4, const struct ieee80211_frame *VAR_5,
 const uint8_t *VAR_6, const uint8_t *VAR_7)
{
 struct mwl_softc *VAR_8 = VAR_4->ni_ic->ic_softc;
 const struct ieee80211_action *VAR_9;

 VAR_9 = (const struct ieee80211_action *) VAR_6;
 if (VAR_9->ia_category == VAR_0 &&
     VAR_9->ia_action == VAR_1) {
  const struct ieee80211_action_ht_mimopowersave *VAR_10 =
      (const struct ieee80211_action_ht_mimopowersave *) VAR_9;

  FUNC_1(VAR_8->sc_mh, VAR_4->ni_macaddr,
      VAR_10->am_control & VAR_2,
      FUNC_0(VAR_10->am_control, VAR_3));
  return 0;
 } else
  return VAR_8->sc_recv_action(VAR_4, VAR_5, VAR_6, VAR_7);
}
