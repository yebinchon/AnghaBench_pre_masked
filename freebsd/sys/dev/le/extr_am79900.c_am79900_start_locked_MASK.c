
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmd ;
struct mbuf {int dummy; } ;
struct letmd {scalar_t__ tmd3; scalar_t__ tmd2; int tmd1; } ;
struct lance_softc {int sc_last_td; int sc_no_td; int sc_ntbuf; int sc_flags; int sc_wdog_timer; int (* sc_wrcsr ) (struct lance_softc*,int ,int) ;int (* sc_copytodesc ) (struct lance_softc*,struct letmd*,int,int) ;int (* sc_copyfromdesc ) (struct lance_softc*,struct letmd*,int,int) ;struct ifnet* sc_ifp; } ;
struct ifnet {int if_drv_flags; int if_snd; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,struct mbuf*) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct lance_softc*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (struct lance_softc*,int) ;
 int FUNC_7 (struct lance_softc*,int) ;
 int VAR_12 ;
 int FUNC_8 (struct lance_softc*,int) ;
 int FUNC_9 (struct ifnet*,char*,int,...) ;
 int FUNC_10 (struct lance_softc*,int ,struct mbuf*) ;
 int FUNC_11 (struct lance_softc*,struct letmd*,int,int) ;
 int FUNC_12 (struct lance_softc*,struct letmd*,int,int) ;
 int FUNC_13 (struct lance_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_14(struct lance_softc *VAR_13)
{
 struct ifnet *VAR_14 = VAR_13->sc_ifp;
 struct letmd VAR_15;
 struct mbuf *VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;

 FUNC_5(VAR_13, VAR_12);

 if ((VAR_14->if_drv_flags & (VAR_3 | VAR_2)) !=
     VAR_3)
  return;

 VAR_17 = VAR_13->sc_last_td;
 VAR_18 = 0;

 for (; VAR_13->sc_no_td < VAR_13->sc_ntbuf &&
     !FUNC_2(&VAR_14->if_snd);) {
  VAR_20 = FUNC_7(VAR_13, VAR_17);
  (*VAR_13->sc_copyfromdesc)(VAR_13, &VAR_15, VAR_20, sizeof(VAR_15));

  if (FUNC_4(VAR_15.tmd1) & VAR_10) {
   VAR_14->if_drv_flags |= VAR_2;
   FUNC_9(VAR_14,
       "missing buffer, no_td = %d, last_td = %d\n",
       VAR_13->sc_no_td, VAR_13->sc_last_td);
  }

  FUNC_1(&VAR_14->if_snd, VAR_16);
  if (VAR_16 == ((void*)0))
   break;





  FUNC_0(VAR_14, VAR_16);




  VAR_19 = FUNC_10(VAR_13, FUNC_6(VAR_13, VAR_17), VAR_16);
  VAR_15.tmd1 = FUNC_3(VAR_10 | VAR_11 | VAR_8 |
      VAR_9 | (-VAR_19 & 0xfff));
  VAR_15.tmd2 = 0;
  VAR_15.tmd3 = 0;

  (*VAR_13->sc_copytodesc)(VAR_13, &VAR_15, VAR_20, sizeof(VAR_15));






  (*VAR_13->sc_wrcsr)(VAR_13, VAR_6, VAR_4 | VAR_5);
  VAR_18++;

  if (++VAR_17 == VAR_13->sc_ntbuf)
   VAR_17 = 0;

  if (++VAR_13->sc_no_td == VAR_13->sc_ntbuf) {
   VAR_14->if_drv_flags |= VAR_2;
   break;
  }
 }

 VAR_13->sc_last_td = VAR_17;

 if (VAR_18 > 0)
  VAR_13->sc_wdog_timer = 5;
}
