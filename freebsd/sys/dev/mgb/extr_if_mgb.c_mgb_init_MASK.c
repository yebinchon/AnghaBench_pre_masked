
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int dummy; } ;
struct mgb_softc {int dev; int miibus; } ;
typedef int if_ctx_t ;


 int FUNC_0 (struct mgb_softc*,int ,int ) ;
 int FUNC_1 (struct mgb_softc*,int ,int) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mii_data* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 struct mgb_softc* FUNC_5 (int ) ;
 int FUNC_6 (struct mgb_softc*) ;
 int FUNC_7 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_8(if_ctx_t VAR_4)
{
 struct mgb_softc *VAR_5;
 struct mii_data *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_5(VAR_4);
 VAR_6 = FUNC_3(VAR_5->miibus);
 FUNC_4(VAR_5->dev, "running init ...\n");

 FUNC_6(VAR_5);


 FUNC_0(VAR_5, VAR_3, VAR_1);
 FUNC_1(VAR_5, VAR_3,
     VAR_0 |
     VAR_2 |
     VAR_2);

 VAR_7 = FUNC_7(VAR_6);
 FUNC_2(!VAR_7, ("mii_mediachg returned: %d", VAR_7));
}
