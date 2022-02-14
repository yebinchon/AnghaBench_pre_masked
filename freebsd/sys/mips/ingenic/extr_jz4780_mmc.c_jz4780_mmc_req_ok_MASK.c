
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmc_command {int error; TYPE_2__* data; } ;
struct jz4780_mmc_softc {int sc_resid; TYPE_1__* sc_req; } ;
struct TYPE_4__ {int len; } ;
struct TYPE_3__ {struct mmc_command* cmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct jz4780_mmc_softc*) ;

__attribute__((used)) static void
FUNC_1(struct jz4780_mmc_softc *VAR_1)
{
 struct mmc_command *VAR_2;

 VAR_2 = VAR_1->sc_req->cmd;

 if (VAR_2->data != ((void*)0) && (VAR_1->sc_resid << 2) < VAR_2->data->len)
  VAR_2->error = VAR_0;
 FUNC_0(VAR_1);
}
