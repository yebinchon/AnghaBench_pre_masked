
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ip {int dummy; } ;
struct gem_softc {int sc_flags; int sc_rxfifosize; scalar_t__ sc_rxptr; TYPE_2__* sc_rxsoft; TYPE_1__* sc_ifp; } ;
struct TYPE_4__ {int * rxs_mbuf; } ;
struct TYPE_3__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gem_softc*,int ) ;
 int FUNC_1 (struct gem_softc*,int ,int) ;
 int FUNC_2 (struct gem_softc*,int ) ;
 int FUNC_3 (struct gem_softc*,int) ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (struct gem_softc*,int) ;
 int VAR_21 ;
 void FUNC_5 (struct gem_softc*) ;
 scalar_t__ FUNC_6 (struct gem_softc*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct gem_softc*) ;

__attribute__((used)) static void
FUNC_9(struct gem_softc *VAR_22)
{
 int VAR_23;

 if (FUNC_6(VAR_22) != 0) {
  VAR_22->sc_ifp->if_drv_flags &= ~VAR_21;
  return (FUNC_5(VAR_22));
 }
 for (VAR_23 = 0; VAR_23 < VAR_7; VAR_23++)
  if (VAR_22->sc_rxsoft[VAR_23].rxs_mbuf != ((void*)0))
   FUNC_4(VAR_22, VAR_23);
 VAR_22->sc_rxptr = 0;
 FUNC_3(VAR_22, VAR_0 | VAR_1);


 FUNC_1(VAR_22, VAR_18, 0);
 FUNC_1(VAR_22, VAR_19, FUNC_2(VAR_22, 0));
 FUNC_1(VAR_22, VAR_16, VAR_7 - 4);
 FUNC_1(VAR_22, VAR_11,
     FUNC_7(VAR_7 ) |
     ((VAR_3 + sizeof(struct ip)) <<
     VAR_12) |
     (VAR_20 << VAR_14) |
     (VAR_2 << VAR_13));

 FUNC_1(VAR_22, VAR_9,
     ((6 * (VAR_22->sc_flags & VAR_8) != 0 ? 2 : 1) <<
     VAR_10) | 6);
 FUNC_1(VAR_22, VAR_17,
     (3 * VAR_22->sc_rxfifosize / 256) |
     ((VAR_22->sc_rxfifosize / 256) << 12));
 FUNC_1(VAR_22, VAR_11,
     FUNC_0(VAR_22, VAR_11) | VAR_15);
 FUNC_1(VAR_22, VAR_6,
     VAR_4 | VAR_5);




 FUNC_8(VAR_22);
}
