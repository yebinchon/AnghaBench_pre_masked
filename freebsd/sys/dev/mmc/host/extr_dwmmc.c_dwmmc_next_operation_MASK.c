
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {int (* done ) (struct mmc_request*) ;int stop; int cmd; } ;
struct dwmmc_softc {int flags; int * curcmd; struct mmc_request* req; int use_auto_stop; scalar_t__ cmd_done; scalar_t__ dto_rcvd; scalar_t__ acd_rcvd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dwmmc_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dwmmc_softc*,int ) ;
 int FUNC_2 (struct mmc_request*) ;

__attribute__((used)) static void
FUNC_3(struct dwmmc_softc *VAR_4)
{
 struct mmc_request *VAR_5;

 VAR_5 = VAR_4->req;
 if (VAR_5 == ((void*)0))
  return;

 VAR_4->acd_rcvd = 0;
 VAR_4->dto_rcvd = 0;
 VAR_4->cmd_done = 0;







 while(FUNC_0(VAR_4, VAR_2) & (VAR_3))
  continue;

 if (VAR_4->flags & VAR_0) {
  VAR_4->flags &= ~VAR_0;
  FUNC_1(VAR_4, VAR_5->cmd);
  return;
 } else if (VAR_4->flags & VAR_1 && !VAR_4->use_auto_stop) {
  VAR_4->flags &= ~VAR_1;
  FUNC_1(VAR_4, VAR_5->stop);
  return;
 }

 VAR_4->req = ((void*)0);
 VAR_4->curcmd = ((void*)0);
 VAR_5->done(VAR_5);
}
