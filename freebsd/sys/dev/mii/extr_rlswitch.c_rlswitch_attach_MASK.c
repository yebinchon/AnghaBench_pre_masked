
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {int mii_capabilities; int mii_capmask; int mii_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct mii_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct mii_softc*) ;
 int FUNC_5 (int ,int,int *,int ) ;
 int FUNC_6 (char*) ;
 int VAR_3 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_4)
{
 struct mii_softc *VAR_5;

 VAR_5 = FUNC_2(VAR_4);




 FUNC_5(VAR_4, VAR_1 | VAR_2,
     &VAR_3, 0);

 VAR_5->mii_capabilities = VAR_0 & VAR_5->mii_capmask;
 FUNC_3(VAR_4, " ");
 FUNC_4(VAR_5);
 FUNC_6("\n");
 FUNC_0(VAR_5->mii_dev);
 return (0);
}
