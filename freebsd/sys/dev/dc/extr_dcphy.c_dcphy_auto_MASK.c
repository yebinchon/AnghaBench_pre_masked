
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_softc {int mii_capabilities; TYPE_1__* mii_pdata; } ;
struct dc_softc {int dummy; } ;
struct TYPE_2__ {int mii_ifp; } ;


 int VAR_0 ;
 int FUNC_0 (struct dc_softc*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dc_softc*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct dc_softc*,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct dc_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct mii_softc *VAR_11)
{
 struct dc_softc *VAR_12;

 VAR_12 = FUNC_3(VAR_11->mii_pdata->mii_ifp);

 FUNC_1(VAR_12, VAR_4, VAR_6);
 FUNC_2(VAR_12, VAR_4, VAR_5);
 FUNC_1(VAR_12, VAR_7, VAR_8);
 if (VAR_11->mii_capabilities & VAR_0)
  FUNC_0(VAR_12, VAR_1, 0x3FFFF);
 else
  FUNC_0(VAR_12, VAR_1, 0xFFFF);
 FUNC_2(VAR_12, VAR_7, VAR_8);
 FUNC_2(VAR_12, VAR_1, VAR_9);
 FUNC_2(VAR_12, VAR_2, VAR_3);

 return (VAR_10);
}
