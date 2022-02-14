
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ieee80211com {int ic_curchan; } ;
struct bwn_softc {int sc_dev; struct ieee80211com sc_ic; } ;
struct bwn_phy {int (* get_default_chan ) (struct bwn_mac*) ;int (* switch_channel ) (struct bwn_mac*,int) ;int chan; } ;
struct bwn_mac {struct bwn_phy mac_phy; struct bwn_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct bwn_mac*,int ,int ) ;
 int FUNC_3 (struct bwn_mac*,int ,int ,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct bwn_mac*) ;
 int FUNC_6 (struct bwn_mac*,int) ;

int
FUNC_7(struct bwn_mac *VAR_2, int VAR_3)
{
 struct bwn_phy *VAR_4 = &(VAR_2->mac_phy);
 struct bwn_softc *VAR_5 = VAR_2->mac_sc;
 struct ieee80211com *VAR_6 = &VAR_5->sc_ic;
 uint16_t VAR_7, VAR_8;
 int VAR_9;

 if (VAR_3 == 0xffff)
  VAR_3 = VAR_4->get_default_chan(VAR_2);

 VAR_7 = VAR_3;
 if (FUNC_1(VAR_6->ic_curchan))
  VAR_7 |= 0x100;
 VAR_8 = FUNC_2(VAR_2, VAR_0, VAR_1);
 FUNC_3(VAR_2, VAR_0, VAR_1, VAR_7);
 VAR_9 = VAR_4->switch_channel(VAR_2, VAR_3);
 if (VAR_9)
  goto fail;

 VAR_2->mac_phy.chan = VAR_3;
 FUNC_0(8000);
 return (0);
fail:
 FUNC_4(VAR_5->sc_dev, "failed to switch channel\n");
 FUNC_3(VAR_2, VAR_0, VAR_1, VAR_8);
 return (VAR_9);
}
