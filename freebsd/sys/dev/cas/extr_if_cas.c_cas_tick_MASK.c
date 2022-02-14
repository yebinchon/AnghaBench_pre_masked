
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ifnet {int dummy; } ;
struct cas_softc {scalar_t__ sc_txfree; int sc_tick_ch; int sc_mii; struct ifnet* sc_ifp; } ;


 int FUNC_0 (struct cas_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (struct cas_softc*,int ) ;
 int FUNC_2 (struct cas_softc*,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int *,int ,void (*) (void*),struct cas_softc*) ;
 int FUNC_4 (struct cas_softc*) ;
 int FUNC_5 (struct cas_softc*) ;
 int VAR_13 ;
 int FUNC_6 (struct ifnet*,int ,scalar_t__) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_14)
{
 struct cas_softc *VAR_15 = VAR_14;
 struct ifnet *VAR_16 = VAR_15->sc_ifp;
 uint32_t VAR_17;

 FUNC_0(VAR_15, VAR_12);




 FUNC_6(VAR_16, VAR_9,
     FUNC_1(VAR_15, VAR_3) +
     FUNC_1(VAR_15, VAR_1));
 VAR_17 = FUNC_1(VAR_15, VAR_0) +
     FUNC_1(VAR_15, VAR_2);
 FUNC_6(VAR_16, VAR_9, VAR_17);
 FUNC_6(VAR_16, VAR_11, VAR_17);
 FUNC_6(VAR_16, VAR_10,
     FUNC_1(VAR_15, VAR_7) +
     FUNC_1(VAR_15, VAR_4) +
     FUNC_1(VAR_15, VAR_6) +
     FUNC_1(VAR_15, VAR_5));




 FUNC_2(VAR_15, VAR_3, 0);
 FUNC_2(VAR_15, VAR_1, 0);
 FUNC_2(VAR_15, VAR_0, 0);
 FUNC_2(VAR_15, VAR_2, 0);
 FUNC_2(VAR_15, VAR_7, 0);
 FUNC_2(VAR_15, VAR_4, 0);
 FUNC_2(VAR_15, VAR_6, 0);
 FUNC_2(VAR_15, VAR_5, 0);

 FUNC_7(VAR_15->sc_mii);

 if (VAR_15->sc_txfree != VAR_8)
  FUNC_4(VAR_15);

 FUNC_5(VAR_15);

 FUNC_3(&VAR_15->sc_tick_ch, VAR_13, FUNC_8, VAR_15);
}
