
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct jz4780_mmc_softc {int sc_dev; TYPE_2__* sc_req; } ;
struct TYPE_4__ {TYPE_1__* cmd; } ;
struct TYPE_3__ {int error; } ;


 int FUNC_0 (struct jz4780_mmc_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct jz4780_mmc_softc*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_3)
{
 struct jz4780_mmc_softc *VAR_4;

 VAR_4 = (struct jz4780_mmc_softc *)VAR_3;
 if (VAR_4->sc_req != ((void*)0)) {
  FUNC_1(VAR_4->sc_dev, "controller timeout, rint %#x stat %#x\n",
      FUNC_0(VAR_4, VAR_0), FUNC_0(VAR_4, VAR_1));
  VAR_4->sc_req->cmd->error = VAR_2;
  FUNC_2(VAR_4);
 } else
  FUNC_1(VAR_4->sc_dev,
      "Spurious timeout - no active request\n");
}
