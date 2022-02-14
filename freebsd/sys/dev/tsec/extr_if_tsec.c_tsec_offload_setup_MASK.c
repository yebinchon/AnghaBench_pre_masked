
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tsec_softc {struct ifnet* tsec_ifp; } ;
struct ifnet {int if_capenable; scalar_t__ if_hwassist; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct tsec_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct tsec_softc*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct tsec_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct tsec_softc *VAR_13)
{
 struct ifnet *VAR_14 = VAR_13->tsec_ifp;
 uint32_t VAR_15;

 FUNC_0(VAR_13);

 VAR_15 = FUNC_1(VAR_13, VAR_10);
 VAR_15 |= VAR_11 | VAR_12;

 if (VAR_14->if_capenable & VAR_1)
  VAR_14->if_hwassist = VAR_2;
 else
  VAR_14->if_hwassist = 0;

 FUNC_2(VAR_13, VAR_10, VAR_15);

 VAR_15 = FUNC_1(VAR_13, VAR_9);
 VAR_15 &= ~(VAR_3 | VAR_7 | VAR_4);
 VAR_15 |= VAR_5 | VAR_8;

 if (VAR_14->if_capenable & VAR_0)
  VAR_15 |= VAR_3 | VAR_7 |
      VAR_6;

 FUNC_2(VAR_13, VAR_9, VAR_15);
}
