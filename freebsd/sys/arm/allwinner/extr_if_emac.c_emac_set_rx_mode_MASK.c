
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ifnet {int if_flags; } ;
struct emac_softc {struct ifnet* emac_ifp; } ;


 int FUNC_0 (struct emac_softc*) ;
 int FUNC_1 (struct emac_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct emac_softc*,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct ifnet*,int ,int*) ;

__attribute__((used)) static void
FUNC_4(struct emac_softc *VAR_13)
{
 struct ifnet *VAR_14;
 uint32_t VAR_15[2];
 uint32_t VAR_16 = 0;

 FUNC_0(VAR_13);

 VAR_14 = VAR_13->emac_ifp;

 VAR_16 = FUNC_1(VAR_13, VAR_1);


 VAR_16 |= VAR_8;
 VAR_16 |= VAR_2;

 VAR_15[0] = 0;
 VAR_15[1] = 0;
 if (VAR_14->if_flags & VAR_9) {
  VAR_15[0] = 0xffffffff;
  VAR_15[1] = 0xffffffff;
 } else
  FUNC_3(VAR_14, VAR_12, VAR_15);
 VAR_16 |= VAR_5;
 VAR_16 |= VAR_6;
 FUNC_2(VAR_13, VAR_3, VAR_15[0]);
 FUNC_2(VAR_13, VAR_4, VAR_15[1]);

 if (VAR_14->if_flags & VAR_10) {
  VAR_16 |= VAR_0;
  VAR_16 |= VAR_5;
 }

 if (VAR_14->if_flags & VAR_11)
  VAR_16 |= VAR_7;
 else
  VAR_16 |= VAR_8;

 FUNC_2(VAR_13, VAR_1, VAR_16);
}
