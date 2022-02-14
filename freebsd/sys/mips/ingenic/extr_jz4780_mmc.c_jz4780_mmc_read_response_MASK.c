
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct mmc_command {int flags; int* resp; } ;
struct jz4780_mmc_softc {TYPE_1__* sc_req; } ;
struct TYPE_2__ {struct mmc_command* cmd; } ;


 int FUNC_0 (struct jz4780_mmc_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct jz4780_mmc_softc *VAR_3)
{
 struct mmc_command *VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->sc_req->cmd;
 if (VAR_4->flags & VAR_2) {
  if (VAR_4->flags & VAR_1) {
   uint16_t VAR_6;

   VAR_6 = FUNC_0(VAR_3, VAR_0);
   for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
    VAR_4->resp[VAR_5] = VAR_6 << 24;
    VAR_6 = FUNC_0(VAR_3, VAR_0);
    VAR_4->resp[VAR_5] |= VAR_6 << 8;
    VAR_6 = FUNC_0(VAR_3, VAR_0);
    VAR_4->resp[VAR_5] |= VAR_6 >> 8;
   }
  } else {
   VAR_4->resp[0] = FUNC_0(VAR_3, VAR_0) << 24;
   VAR_4->resp[0] |= FUNC_0(VAR_3, VAR_0) << 8;
   VAR_4->resp[0] |= FUNC_0(VAR_3, VAR_0) & 0xff;
  }
 }
}
