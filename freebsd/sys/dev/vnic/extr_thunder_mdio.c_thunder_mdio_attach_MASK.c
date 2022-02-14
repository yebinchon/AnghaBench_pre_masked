
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thunder_mdio_softc {int phy_desc_head; int * reg_base; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct thunder_mdio_softc*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ,int*,int ) ;
 struct thunder_mdio_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct thunder_mdio_softc*,int ,int ) ;

int
FUNC_6(device_t VAR_6)
{
 struct thunder_mdio_softc *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_6);
 VAR_7->dev = VAR_6;


 VAR_8 = VAR_1;
 VAR_7->reg_base = FUNC_2(VAR_6, VAR_5, &VAR_8,
     VAR_2);
 if (VAR_7->reg_base == ((void*)0)) {
  FUNC_4(VAR_6, "Could not allocate memory\n");
  return (VAR_0);
 }

 FUNC_1(&VAR_7->phy_desc_head);
 FUNC_0(VAR_7, "ThunderX MDIO lock");


 FUNC_5(VAR_7, VAR_3, VAR_4);

 return (0);
}
