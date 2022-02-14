
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int tmd ;
struct letmd {int tmd2; int tmd0; int tmd1; } ;
struct lance_softc {int sc_first_td; scalar_t__ sc_no_td; int sc_flags; int sc_ntbuf; int sc_wdog_timer; int (* sc_nocarrier ) (struct lance_softc*) ;int (* sc_copyfromdesc ) (struct lance_softc*,struct letmd*,int ,int) ;struct ifnet* sc_ifp; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct lance_softc*,int) ;
 int VAR_15 ;
 int FUNC_2 (struct ifnet*,int ,int) ;
 int FUNC_3 (struct ifnet*,int ) ;
 int FUNC_4 (struct ifnet*,char*,...) ;
 int FUNC_5 (struct lance_softc*) ;
 int FUNC_6 (struct lance_softc*,struct letmd*,int ,int) ;
 int FUNC_7 (struct lance_softc*) ;

__attribute__((used)) static inline void
FUNC_8(struct lance_softc *VAR_16)
{
 struct ifnet *VAR_17 = VAR_16->sc_ifp;
 struct letmd VAR_18;
 uint32_t VAR_19, VAR_20;
 int VAR_21;

 VAR_21 = VAR_16->sc_first_td;

 for (;;) {
  if (VAR_16->sc_no_td <= 0)
   break;

  (*VAR_16->sc_copyfromdesc)(VAR_16, &VAR_18, FUNC_1(VAR_16, VAR_21),
      sizeof(VAR_18));

  VAR_19 = FUNC_0(VAR_18.tmd1);
  if (VAR_19 & VAR_9)
   break;

  VAR_17->if_drv_flags &= ~VAR_3;

  if (VAR_19 & VAR_6) {
   VAR_20 = FUNC_0(VAR_18.tmd2);
   if (VAR_20 & VAR_10)
    FUNC_4(VAR_17, "transmit buffer error\n");
   else if (VAR_20 & VAR_14)
    FUNC_4(VAR_17, "underflow\n");
   if (VAR_20 & (VAR_10 | VAR_14)) {
    FUNC_5(VAR_16);
    return;
   }
   if (VAR_20 & VAR_11) {
    if (VAR_16->sc_flags & VAR_4)
     FUNC_3(VAR_17,
         VAR_15);
    VAR_16->sc_flags &= ~VAR_4;
    if (VAR_16->sc_nocarrier)
     (*VAR_16->sc_nocarrier)(VAR_16);
    else
     FUNC_4(VAR_17, "lost carrier\n");
   }
   if (VAR_20 & VAR_12)
    FUNC_2(VAR_17, VAR_0, 1);
   if (VAR_20 & VAR_13) {



    FUNC_2(VAR_17, VAR_0, 16);
   }
   FUNC_2(VAR_17, VAR_1, 1);
  } else {
   if (VAR_19 & VAR_8)
    FUNC_2(VAR_17, VAR_0, 1);
   else if (VAR_19 & VAR_7)

    FUNC_2(VAR_17, VAR_0, 2);
   FUNC_2(VAR_17, VAR_2, 1);
  }

  if (++VAR_21 == VAR_16->sc_ntbuf)
   VAR_21 = 0;

  --VAR_16->sc_no_td;
 }

 VAR_16->sc_first_td = VAR_21;

 VAR_16->sc_wdog_timer = VAR_16->sc_no_td > 0 ? 5 : 0;
}
