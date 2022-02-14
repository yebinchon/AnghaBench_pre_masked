
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int h_Fm; struct dtsec_softc* h_App; int f_Exception; int f_Event; int mdioIrq; int macId; int enetMode; int baseAddr; int addr; } ;
typedef TYPE_1__ t_FmMacParams ;
typedef scalar_t__ t_Error ;
struct dtsec_softc {int sc_dev; int * sc_mach; int sc_fmh; int sc_mac_mdio_irq; int sc_eth_id; int sc_mac_enet_mode; int sc_mem; } ;
typedef int params ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int ,char*) ;
 int VAR_4 ;
 int FUNC_5 (struct dtsec_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct dtsec_softc *VAR_7, uint8_t *VAR_8)
{
 t_FmMacParams VAR_9;
 t_Error VAR_10;

 FUNC_7(&VAR_9, 0, sizeof(VAR_9));
 FUNC_6(&VAR_9.addr, VAR_8, sizeof(VAR_9.addr));

 VAR_9.baseAddr = FUNC_8(VAR_7->sc_mem);
 VAR_9.enetMode = VAR_7->sc_mac_enet_mode;
 VAR_9.macId = VAR_7->sc_eth_id;
 VAR_9.mdioIrq = VAR_7->sc_mac_mdio_irq;
 VAR_9.f_Event = VAR_5;
 VAR_9.f_Exception = VAR_4;
 VAR_9.h_App = VAR_7;
 VAR_9.h_Fm = VAR_7->sc_fmh;

 VAR_7->sc_mach = FUNC_0(&VAR_9);
 if (VAR_7->sc_mach == ((void*)0)) {
  FUNC_4(VAR_7->sc_dev, "couldn't configure FM_MAC module.\n"
      );
  return (VAR_0);
 }

 VAR_10 = FUNC_2(VAR_7->sc_mach, VAR_3);
 if (VAR_10 != VAR_1) {
  FUNC_4(VAR_7->sc_dev, "couldn't enable reset on init "
      "feature.\n");
  FUNC_5(VAR_7);
  return (VAR_0);
 }


 VAR_10 = FUNC_1(VAR_7->sc_mach, VAR_6,
     VAR_2);
 if (VAR_10 != VAR_1) {
  FUNC_4(VAR_7->sc_dev, "couldn't disable pause frames "
   "exception.\n");
  FUNC_5(VAR_7);
  return (VAR_0);
 }

 VAR_10 = FUNC_3(VAR_7->sc_mach);
 if (VAR_10 != VAR_1) {
  FUNC_4(VAR_7->sc_dev, "couldn't initialize FM_MAC module."
      "\n");
  FUNC_5(VAR_7);
  return (VAR_0);
 }

 return (0);
}
