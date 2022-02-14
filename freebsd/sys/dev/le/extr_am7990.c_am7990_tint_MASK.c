
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmd ;
struct letmd {int tmd1_bits; int tmd3; int tmd2; int tmd1_hadr; int tmd0; } ;
struct lance_softc {int sc_first_td; scalar_t__ sc_no_td; int sc_flags; int sc_ntbuf; int sc_wdog_timer; int (* sc_nocarrier ) (struct lance_softc*) ;int (* sc_copyfromdesc ) (struct lance_softc*,struct letmd*,int ,int) ;struct ifnet* sc_ifp; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct lance_softc*,int) ;
 int VAR_16 ;
 int FUNC_1 (struct ifnet*,int ,int) ;
 int FUNC_2 (struct ifnet*,int ) ;
 int FUNC_3 (struct ifnet*,char*,...) ;
 int FUNC_4 (struct lance_softc*) ;
 int FUNC_5 (struct lance_softc*,struct letmd*,int ,int) ;
 int FUNC_6 (struct lance_softc*) ;

__attribute__((used)) static void
FUNC_7(struct lance_softc *VAR_17)
{
 struct ifnet *VAR_18 = VAR_17->sc_ifp;
 struct letmd VAR_19;
 int VAR_20;

 VAR_20 = VAR_17->sc_first_td;

 for (;;) {
  if (VAR_17->sc_no_td <= 0)
   break;

  (*VAR_17->sc_copyfromdesc)(VAR_17, &VAR_19, FUNC_0(VAR_17, VAR_20),
      sizeof(VAR_19));
  if (VAR_19.tmd1_bits & VAR_9)
   break;

  VAR_18->if_drv_flags &= ~VAR_3;

  if (VAR_19.tmd1_bits & VAR_6) {
   if (VAR_19.tmd3 & VAR_10)
    FUNC_3(VAR_18, "transmit buffer error\n");
   else if (VAR_19.tmd3 & VAR_15)
    FUNC_3(VAR_18, "underflow\n");
   if (VAR_19.tmd3 & (VAR_10 | VAR_15)) {
    FUNC_4(VAR_17);
    return;
   }
   if (VAR_19.tmd3 & VAR_11) {
    if (VAR_17->sc_flags & VAR_4)
     FUNC_2(VAR_18,
         VAR_16);
    VAR_17->sc_flags &= ~VAR_4;
    if (VAR_17->sc_nocarrier)
     (*VAR_17->sc_nocarrier)(VAR_17);
    else
     FUNC_3(VAR_18, "lost carrier\n");
   }
   if (VAR_19.tmd3 & VAR_12)
    FUNC_1(VAR_18, VAR_0, 1);
   if (VAR_19.tmd3 & VAR_13) {




    FUNC_1(VAR_18, VAR_0, 16);
   }
   FUNC_1(VAR_18, VAR_1, 1);
  } else {
   if (VAR_19.tmd1_bits & VAR_8)
    FUNC_1(VAR_18, VAR_0, 1);
   else if (VAR_19.tmd1_bits & VAR_7)

    FUNC_1(VAR_18, VAR_0, 2);
   FUNC_1(VAR_18, VAR_2, 1);
  }

  if (++VAR_20 == VAR_17->sc_ntbuf)
   VAR_20 = 0;

  --VAR_17->sc_no_td;
 }

 VAR_17->sc_first_td = VAR_20;

 VAR_17->sc_wdog_timer = VAR_17->sc_no_td > 0 ? 5 : 0;
}
