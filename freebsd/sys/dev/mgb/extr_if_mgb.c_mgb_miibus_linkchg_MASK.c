
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int mii_media_status; } ;
struct mgb_softc {int link_state; int baudrate; int ctx; int miibus; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mii_data* FUNC_0 (int ) ;
 struct mgb_softc* FUNC_1 (struct mii_data*) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_5)
{
 struct mgb_softc *VAR_6;
 struct mii_data *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1(FUNC_0(VAR_5));
 VAR_7 = FUNC_0(VAR_6->miibus);

 if (VAR_7->mii_media_status & VAR_1) {
  if (VAR_7->mii_media_status & VAR_0)
   VAR_8 = VAR_4;
  else
   VAR_8 = VAR_2;
 } else
  VAR_8 = VAR_3;
 VAR_6->link_state = VAR_8;
 FUNC_2(VAR_6->ctx, VAR_6->link_state, VAR_6->baudrate);
}
