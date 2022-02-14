
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ifnet {int dummy; } ;
struct gem_softc {int sc_tick_ch; int sc_mii; struct ifnet* sc_ifp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct gem_softc*,int ) ;
 int FUNC_1 (struct gem_softc*,int ,int ) ;
 int FUNC_2 (struct gem_softc*,int ) ;
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
 int FUNC_3 (int *,int ,void (*) (void*),struct gem_softc*) ;
 scalar_t__ FUNC_4 (struct gem_softc*) ;
 int VAR_13 ;
 int FUNC_5 (struct ifnet*,int ,scalar_t__) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_14)
{
 struct gem_softc *VAR_15 = VAR_14;
 struct ifnet *VAR_16 = VAR_15->sc_ifp;
 uint32_t VAR_17;

 FUNC_2(VAR_15, VAR_12);




 FUNC_5(VAR_16, VAR_9,
     FUNC_0(VAR_15, VAR_4) +
     FUNC_0(VAR_15, VAR_2));
 VAR_17 = FUNC_0(VAR_15, VAR_1) +
     FUNC_0(VAR_15, VAR_3);
 FUNC_5(VAR_16, VAR_9, VAR_17);
 FUNC_5(VAR_16, VAR_11, VAR_17);
 FUNC_5(VAR_16, VAR_10,
     FUNC_0(VAR_15, VAR_8) +
     FUNC_0(VAR_15, VAR_5) +
     FUNC_0(VAR_15, VAR_7) +
     FUNC_0(VAR_15, VAR_6));




 FUNC_1(VAR_15, VAR_4, 0);
 FUNC_1(VAR_15, VAR_2, 0);
 FUNC_1(VAR_15, VAR_1, 0);
 FUNC_1(VAR_15, VAR_3, 0);
 FUNC_1(VAR_15, VAR_8, 0);
 FUNC_1(VAR_15, VAR_5, 0);
 FUNC_1(VAR_15, VAR_7, 0);
 FUNC_1(VAR_15, VAR_6, 0);

 FUNC_6(VAR_15->sc_mii);

 if (FUNC_4(VAR_15) == VAR_0)
  return;

 FUNC_3(&VAR_15->sc_tick_ch, VAR_13, FUNC_7, VAR_15);
}
