
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thunder_mdio_softc {int phy_desc_head; } ;
struct phy_desc {int ifp; int miibus; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct thunder_mdio_softc*) ;
 int FUNC_1 (struct thunder_mdio_softc*) ;
 int VAR_1 ;
 int FUNC_2 (int *,struct phy_desc*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 struct thunder_mdio_softc* FUNC_5 (int ) ;
 int FUNC_6 (struct phy_desc*,int ) ;
 struct phy_desc* FUNC_7 (struct thunder_mdio_softc*,int) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_9(device_t VAR_3, int VAR_4, int VAR_5)
{
 struct thunder_mdio_softc *VAR_6;
 struct phy_desc *VAR_7;

 VAR_6 = FUNC_5(VAR_3);
 FUNC_0(VAR_6);

 VAR_7 = FUNC_7(VAR_6, VAR_4);
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_6);
  return (VAR_0);
 }


 FUNC_2(&VAR_6->phy_desc_head, VAR_7, VAR_2);


 FUNC_3(VAR_3);
 FUNC_4(VAR_3, VAR_7->miibus);

 FUNC_8(VAR_7->ifp);

 FUNC_6(VAR_7, VAR_1);
 FUNC_1(VAR_6);

 return (0);
}
