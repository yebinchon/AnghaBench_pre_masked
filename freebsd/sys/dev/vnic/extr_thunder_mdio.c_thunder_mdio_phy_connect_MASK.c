
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thunder_mdio_softc {int phy_desc_head; } ;
struct phy_desc {int lmacid; int * ifp; int miibus; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct thunder_mdio_softc*) ;
 int FUNC_1 (struct thunder_mdio_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,struct phy_desc*,int ) ;
 struct thunder_mdio_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct phy_desc*,int ) ;
 struct phy_desc* FUNC_6 (struct thunder_mdio_softc*,int) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 struct phy_desc* FUNC_9 (int,int ,int) ;
 int FUNC_10 (int ,int *,int *,int ,int ,int ,int,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_11(device_t VAR_11, int VAR_12, int VAR_13)
{
 struct thunder_mdio_softc *VAR_14;
 struct phy_desc *VAR_15;
 int VAR_16;

 VAR_14 = FUNC_3(VAR_11);

 FUNC_0(VAR_14);
 VAR_15 = FUNC_6(VAR_14, VAR_12);
 FUNC_1(VAR_14);
 if (VAR_15 == ((void*)0)) {
  VAR_15 = FUNC_9(sizeof(*VAR_15), VAR_6, (VAR_5 | VAR_7));
  if (VAR_15 == ((void*)0))
   return (VAR_1);
  VAR_15->ifp = FUNC_7(VAR_3);
  if (VAR_15->ifp == ((void*)0)) {
   FUNC_5(VAR_15, VAR_6);
   return (VAR_1);
  }
  VAR_15->lmacid = VAR_12;
 }

 VAR_16 = FUNC_10(VAR_11, &VAR_15->miibus, VAR_15->ifp,
     VAR_9, VAR_10,
     VAR_0, VAR_13, VAR_4, 0);

 if (VAR_16 != 0) {
  FUNC_4(VAR_11, "Could not attach PHY%d\n", VAR_13);
  FUNC_8(VAR_15->ifp);
  FUNC_5(VAR_15, VAR_6);
  return (VAR_2);
 }

 FUNC_0(VAR_14);
 FUNC_2(&VAR_14->phy_desc_head, VAR_15, VAR_8);
 FUNC_1(VAR_14);

 return (0);
}
