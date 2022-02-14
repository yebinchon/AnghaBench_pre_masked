
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct lance_softc {int sc_conf3; int sc_addr; int (* sc_rdcsr ) (struct lance_softc*,int ) ;int (* sc_hwinit ) (struct lance_softc*) ;int (* sc_start_locked ) (struct lance_softc*) ;int sc_wdog_ch; scalar_t__ sc_wdog_timer; int (* sc_wrcsr ) (struct lance_softc*,int ,int) ;int (* sc_meminit ) (struct lance_softc*) ;int sc_enaddr; int (* sc_mediachange ) (struct lance_softc*) ;int (* sc_hwreset ) (struct lance_softc*) ;struct ifnet* sc_ifp; } ;
struct ifnet {int if_drv_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ifnet*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct lance_softc*) ;
 int FUNC_3 (struct lance_softc*,int ) ;
 int VAR_12 ;
 int FUNC_4 (int *,int ,int ,struct lance_softc*) ;
 int VAR_13 ;
 int FUNC_5 (struct ifnet*,char*) ;
 int VAR_14 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct lance_softc*,int ,int) ;
 int FUNC_8 (struct lance_softc*,int ) ;
 int FUNC_9 (struct lance_softc*,int ,int) ;
 int FUNC_10 (struct lance_softc*) ;
 int FUNC_11 (struct lance_softc*) ;
 int FUNC_12 (struct lance_softc*) ;
 int FUNC_13 (struct lance_softc*,int ,int) ;
 int FUNC_14 (struct lance_softc*) ;
 int FUNC_15 (struct lance_softc*) ;
 int FUNC_16 (struct lance_softc*,int ,int) ;
 int FUNC_17 (struct lance_softc*,int ,int) ;
 int FUNC_18 (struct lance_softc*,int ,int) ;
 int FUNC_19 (struct lance_softc*,int ) ;

void
FUNC_20(struct lance_softc *VAR_15)
{
 struct ifnet *VAR_16 = VAR_15->sc_ifp;
 u_long VAR_17;
 int VAR_18;

 FUNC_3(VAR_15, VAR_12);

 (*VAR_15->sc_wrcsr)(VAR_15, VAR_8, VAR_6);
 FUNC_0(100);


 if (VAR_15->sc_hwreset)
  (*VAR_15->sc_hwreset)(VAR_15);


 (*VAR_15->sc_wrcsr)(VAR_15, VAR_11, VAR_15->sc_conf3);


 if (VAR_15->sc_mediachange)
  (void)(*VAR_15->sc_mediachange)(VAR_15);





 FUNC_6(VAR_15->sc_enaddr, FUNC_1(VAR_16), VAR_0);


 (*VAR_15->sc_meminit)(VAR_15);


 VAR_17 = VAR_15->sc_addr + FUNC_2(VAR_15);
 (*VAR_15->sc_wrcsr)(VAR_15, VAR_9, VAR_17 & 0xffff);
 (*VAR_15->sc_wrcsr)(VAR_15, VAR_10, VAR_17 >> 16);


 FUNC_0(100);
 (*VAR_15->sc_wrcsr)(VAR_15, VAR_8, VAR_5);


 for (VAR_18 = 100000; VAR_18; VAR_18--)
  if ((*VAR_15->sc_rdcsr)(VAR_15, VAR_8) & VAR_3)
   break;

 if ((*VAR_15->sc_rdcsr)(VAR_15, VAR_8) & VAR_3) {

  (*VAR_15->sc_wrcsr)(VAR_15, VAR_8, VAR_4 | VAR_7);
  VAR_16->if_drv_flags |= VAR_2;
  VAR_16->if_drv_flags &= ~VAR_1;
  VAR_15->sc_wdog_timer = 0;
  FUNC_4(&VAR_15->sc_wdog_ch, VAR_13, VAR_14, VAR_15);
  (*VAR_15->sc_start_locked)(VAR_15);
 } else
  FUNC_5(VAR_16, "controller failed to initialize\n");

 if (VAR_15->sc_hwinit)
  (*VAR_15->sc_hwinit)(VAR_15);
}
