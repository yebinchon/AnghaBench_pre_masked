
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mrsas_softc {void* chan; } ;
struct mrsas_mfi_cmd {int cmd_status; TYPE_2__* frame; } ;
struct TYPE_3__ {int cmd_status; } ;
struct TYPE_4__ {TYPE_1__ io; } ;


 int FUNC_0 (void*) ;

void
FUNC_1(struct mrsas_softc *VAR_0, struct mrsas_mfi_cmd *VAR_1)
{
 VAR_1->cmd_status = VAR_1->frame->io.cmd_status;

 if (VAR_1->cmd_status == 0xFF)
  VAR_1->cmd_status = 0;

 VAR_0->chan = (void *)&VAR_1;
 FUNC_0((void *)&VAR_0->chan);
 return;
}
