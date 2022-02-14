
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_command {scalar_t__ error; scalar_t__ opcode; scalar_t__ data; } ;
struct dwmmc_softc {scalar_t__ acd_rcvd; scalar_t__ use_auto_stop; scalar_t__ dto_rcvd; int cmd_done; struct mmc_command* curcmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct dwmmc_softc*) ;

__attribute__((used)) static void
FUNC_1(struct dwmmc_softc *VAR_3)
{
 struct mmc_command *VAR_4;

 VAR_4 = VAR_3->curcmd;
 if (VAR_4 == ((void*)0))
  return;

 if (!VAR_3->cmd_done)
  return;

 if (VAR_4->error != VAR_0 || !VAR_4->data) {
  FUNC_0(VAR_3);
 } else if (VAR_4->data && VAR_3->dto_rcvd) {
  if ((VAR_4->opcode == VAR_2 ||
       VAR_4->opcode == VAR_1) &&
       VAR_3->use_auto_stop) {
   if (VAR_3->acd_rcvd)
    FUNC_0(VAR_3);
  } else {
   FUNC_0(VAR_3);
  }
 }
}
