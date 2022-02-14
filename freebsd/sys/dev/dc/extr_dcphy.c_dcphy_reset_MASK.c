
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_softc {TYPE_1__* mii_pdata; } ;
struct dc_softc {int dummy; } ;
struct TYPE_2__ {int mii_ifp; } ;


 int FUNC_0 (struct dc_softc*,int ,int ) ;
 int FUNC_1 (struct dc_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 struct dc_softc* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct mii_softc *VAR_2)
{
 struct dc_softc *VAR_3;

 VAR_3 = FUNC_3(VAR_2->mii_pdata->mii_ifp);

 FUNC_0(VAR_3, VAR_0, VAR_1);
 FUNC_2(1000);
 FUNC_1(VAR_3, VAR_0, VAR_1);
}
