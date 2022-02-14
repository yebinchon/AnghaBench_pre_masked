
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_softc {scalar_t__ squelched; int dev; int log_count; int log_time; } ;
struct mmc_request {struct mmc_command* cmd; } ;
struct mmc_command {int error; int opcode; TYPE_1__* data; struct mmc_request* mrq; scalar_t__ retries; struct mmc_request* resp; } ;
typedef int mreq ;
typedef scalar_t__ device_t ;
struct TYPE_2__ {struct mmc_request* mrq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,struct mmc_request*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct mmc_softc* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (struct mmc_request*,int ,int) ;
 scalar_t__ FUNC_4 (int *,int *,int ) ;

int
FUNC_5(device_t VAR_3, device_t VAR_4, struct mmc_command *VAR_5,
    int VAR_6)
{
 struct mmc_request VAR_7;
 struct mmc_softc *VAR_8;
 int VAR_9;

 do {
  FUNC_3(&VAR_7, 0, sizeof(VAR_7));
  FUNC_3(VAR_5->resp, 0, sizeof(VAR_5->resp));
  VAR_5->retries = 0;
  VAR_5->mrq = &VAR_7;
  if (VAR_5->data != ((void*)0))
   VAR_5->data->mrq = &VAR_7;
  VAR_7.cmd = VAR_5;
  if (FUNC_0(VAR_3, VAR_4, &VAR_7) != 0)
   VAR_9 = VAR_1;
  else
   VAR_9 = VAR_5->error;
 } while (VAR_9 != VAR_2 && VAR_6-- > 0);

 if (VAR_9 != VAR_2 && VAR_3 == VAR_4) {
  VAR_8 = FUNC_1(VAR_3);
  if (VAR_8->squelched == 0 && FUNC_4(&VAR_8->log_time,
      &VAR_8->log_count, VAR_0)) {
   FUNC_2(VAR_8->dev, "CMD%d failed, RESULT: %d\n",
       VAR_5->opcode, VAR_9);
  }
 }

 return (VAR_9);
}
