
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dtsec_softc {int sc_dev; TYPE_1__* sc_ifnet; int sc_txph; int sc_rxph; int sc_mach; } ;
struct TYPE_2__ {int if_drv_flags; } ;


 int FUNC_0 (struct dtsec_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(struct dtsec_softc *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_4);

 VAR_5 = FUNC_1(VAR_4->sc_mach, VAR_3);
 if (VAR_5 != VAR_1)
  return (VAR_0);

 VAR_5 = FUNC_2(VAR_4->sc_rxph);
 if (VAR_5 != VAR_1)
  return (VAR_0);

 VAR_5 = FUNC_2(VAR_4->sc_txph);
 if (VAR_5 != VAR_1)
  return (VAR_0);

 VAR_4->sc_ifnet->if_drv_flags |= VAR_2;


 FUNC_3(VAR_4->sc_dev);

 return (0);
}
