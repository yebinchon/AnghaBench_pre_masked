
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int t_EnetAddr ;
struct dtsec_softc {int sc_dev; TYPE_1__* sc_ifnet; int sc_tick_callout; scalar_t__ sc_mii; int sc_mach; } ;
struct TYPE_2__ {int if_flags; } ;


 int FUNC_0 (struct dtsec_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ,int ,struct dtsec_softc*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct dtsec_softc*) ;
 int FUNC_6 (struct dtsec_softc*) ;
 int FUNC_7 (struct dtsec_softc*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_8(struct dtsec_softc *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_4);


 VAR_5 = FUNC_1(VAR_4->sc_mach,
     (t_EnetAddr *)FUNC_2(VAR_4->sc_ifnet));
 if (VAR_5 != VAR_0) {
  FUNC_4(VAR_4->sc_dev, "couldn't set MAC address.\n");
  goto err;
 }


 if (VAR_4->sc_mii)
  FUNC_3(&VAR_4->sc_tick_callout, VAR_3, VAR_2, VAR_4);

 if (VAR_4->sc_ifnet->if_flags & VAR_1) {
  VAR_5 = FUNC_7(VAR_4);
  if (VAR_5 != 0)
   goto err;
 } else {
  VAR_5 = FUNC_6(VAR_4);
  if (VAR_5 != 0)
   goto err;
 }

 return;

err:
 FUNC_5(VAR_4);
 FUNC_4(VAR_4->sc_dev, "initialization error.\n");
 return;
}
