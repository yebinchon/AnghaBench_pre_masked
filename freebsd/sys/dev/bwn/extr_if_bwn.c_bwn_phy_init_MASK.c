
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bwn_softc {int sc_dev; } ;
struct TYPE_2__ {int (* init ) (struct bwn_mac*) ;int (* rf_onoff ) (struct bwn_mac*,int) ;int (* exit ) (struct bwn_mac*) ;int (* get_default_chan ) (struct bwn_mac*) ;int chan; } ;
struct bwn_mac {TYPE_1__ mac_phy; struct bwn_softc* mac_sc; } ;


 int FUNC_0 (struct bwn_mac*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct bwn_mac*) ;
 int FUNC_3 (struct bwn_mac*,int) ;
 int FUNC_4 (struct bwn_mac*) ;
 int FUNC_5 (struct bwn_mac*) ;
 int FUNC_6 (struct bwn_mac*) ;
 int FUNC_7 (struct bwn_mac*,int) ;

__attribute__((used)) static int
FUNC_8(struct bwn_mac *VAR_0)
{
 struct bwn_softc *VAR_1 = VAR_0->mac_sc;
 int VAR_2;

 VAR_0->mac_phy.chan = VAR_0->mac_phy.get_default_chan(VAR_0);
 VAR_0->mac_phy.rf_onoff(VAR_0, 1);
 VAR_2 = VAR_0->mac_phy.init(VAR_0);
 if (VAR_2) {
  FUNC_1(VAR_1->sc_dev, "PHY init failed\n");
  goto fail0;
 }
 VAR_2 = FUNC_0(VAR_0,
     VAR_0->mac_phy.get_default_chan(VAR_0));
 if (VAR_2) {
  FUNC_1(VAR_1->sc_dev,
      "failed to switch default channel\n");
  goto fail1;
 }
 return (0);
fail1:
 if (VAR_0->mac_phy.exit)
  VAR_0->mac_phy.exit(VAR_0);
fail0:
 VAR_0->mac_phy.rf_onoff(VAR_0, 0);

 return (VAR_2);
}
