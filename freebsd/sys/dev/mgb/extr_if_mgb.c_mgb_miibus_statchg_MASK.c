
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int mii_media_active; } ;
struct mgb_softc {int baudrate; int link_state; int ctx; int miibus; } ;
typedef int device_t ;


 struct mii_data* FUNC_0 (int ) ;
 struct mgb_softc* FUNC_1 (struct mii_data*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_0)
{
 struct mgb_softc *VAR_1;
 struct mii_data *VAR_2;

 VAR_1 = FUNC_1(FUNC_0(VAR_0));
 VAR_2 = FUNC_0(VAR_1->miibus);

 VAR_1->baudrate = FUNC_3(VAR_2->mii_media_active);
 FUNC_2(VAR_1->ctx, VAR_1->link_state, VAR_1->baudrate);
}
