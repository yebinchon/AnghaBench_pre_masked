
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrsas_softc {void* chan; } ;
struct mrsas_mfi_cmd {scalar_t__ cmd_status; scalar_t__ sync_cmd; } ;


 int FUNC_0 (void*) ;

void
FUNC_1(struct mrsas_softc *VAR_0, struct mrsas_mfi_cmd *VAR_1)
{
 if (VAR_1->sync_cmd) {
  VAR_1->sync_cmd = 0;
  VAR_1->cmd_status = 0;
  VAR_0->chan = (void *)&VAR_1;
  FUNC_0((void *)&VAR_0->chan);
 }
 return;
}
