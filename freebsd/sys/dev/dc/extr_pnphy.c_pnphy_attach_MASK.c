
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {int mii_capabilities; int mii_capmask; int mii_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct mii_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct mii_softc*) ;
 int FUNC_4 (int ,int,int *,int ) ;
 int VAR_6 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_7)
{
 struct mii_softc *VAR_8;

 VAR_8 = FUNC_1(VAR_7);

 FUNC_4(VAR_7, VAR_4 | VAR_5,
     &VAR_6, 0);

 VAR_8->mii_capabilities =
     VAR_0 | VAR_1 | VAR_2 | VAR_3;
 VAR_8->mii_capabilities &= VAR_8->mii_capmask;
 FUNC_2(VAR_7, " ");
 FUNC_3(VAR_8);
 FUNC_5("\n");

 FUNC_0(VAR_8->mii_dev);
 return (0);
}
