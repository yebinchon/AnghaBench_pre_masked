
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct mmc_softc {scalar_t__ squelched; int dev; int log_count; int log_time; } ;
struct mmc_command {int arg; int flags; int error; int* resp; int opcode; } ;
typedef scalar_t__ device_t ;
typedef int appcmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct mmc_softc* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (struct mmc_command*,int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,struct mmc_command*,int ) ;
 scalar_t__ FUNC_4 (int *,int *,int ) ;

int
FUNC_5(device_t VAR_7, device_t VAR_8, uint16_t VAR_9,
    struct mmc_command *VAR_10, int VAR_11)
{
 struct mmc_command VAR_12;
 struct mmc_softc *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_0(VAR_7);


 VAR_13->squelched++;
 do {
  FUNC_2(&VAR_12, 0, sizeof(VAR_12));
  VAR_12.opcode = VAR_1;
  VAR_12.arg = (uint32_t)VAR_9 << 16;
  VAR_12.flags = VAR_5 | VAR_2;
  if (FUNC_3(VAR_7, VAR_8, &VAR_12, 0) != 0)
   VAR_14 = VAR_3;
  else
   VAR_14 = VAR_12.error;
  if (VAR_14 == VAR_4) {
   if (!(VAR_12.resp[0] & VAR_6))
    VAR_14 = VAR_3;
   else if (FUNC_3(VAR_7, VAR_8, VAR_10, 0) != 0)
    VAR_14 = VAR_3;
   else
    VAR_14 = VAR_10->error;
  }
 } while (VAR_14 != VAR_4 && VAR_11-- > 0);
 VAR_13->squelched--;

 if (VAR_14 != VAR_4 && VAR_7 == VAR_8) {
  if (VAR_13->squelched == 0 && FUNC_4(&VAR_13->log_time,
      &VAR_13->log_count, VAR_0)) {
   FUNC_1(VAR_13->dev, "ACMD%d failed, RESULT: %d\n",
       VAR_10->opcode, VAR_14);
  }
 }

 return (VAR_14);
}
