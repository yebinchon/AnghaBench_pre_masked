
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmc_softc {int dev; int sc_mtx; } ;
struct mmc_request {int flags; TYPE_2__* cmd; struct mmc_softc* done_data; int done; } ;
struct TYPE_4__ {int error; int opcode; TYPE_1__* data; int flags; int arg; } ;
struct TYPE_3__ {scalar_t__ len; } ;


 int FUNC_0 (int ,int ,struct mmc_request*) ;
 int VAR_0 ;
 int FUNC_1 (struct mmc_softc*) ;
 int VAR_1 ;
 int FUNC_2 (struct mmc_softc*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ,int ,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct mmc_request*,int *,int ,char*,int ) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static int
FUNC_8(struct mmc_softc *VAR_4, struct mmc_request *VAR_5)
{

 VAR_5->done = VAR_3;
 VAR_5->done_data = VAR_4;
 if (FUNC_3(VAR_2 > 1)) {
  FUNC_5(VAR_4->dev, "REQUEST: CMD%d arg %#x flags %#x",
      VAR_5->cmd->opcode, VAR_5->cmd->arg, VAR_5->cmd->flags);
  if (VAR_5->cmd->data) {
   FUNC_7(" data %d\n", (int)VAR_5->cmd->data->len);
  } else
   FUNC_7("\n");
 }
 FUNC_0(FUNC_4(VAR_4->dev), VAR_4->dev, VAR_5);
 FUNC_1(VAR_4);
 while ((VAR_5->flags & VAR_1) == 0)
  FUNC_6(VAR_5, &VAR_4->sc_mtx, 0, "mmcreq", 0);
 FUNC_2(VAR_4);
 if (FUNC_3(VAR_2 > 2 || (VAR_2 > 0 &&
     VAR_5->cmd->error != VAR_0)))
  FUNC_5(VAR_4->dev, "CMD%d RESULT: %d\n",
      VAR_5->cmd->opcode, VAR_5->cmd->error);
 return (0);
}
