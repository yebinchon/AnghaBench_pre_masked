
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_request {int (* done ) (struct mmc_request*) ;TYPE_1__* cmd; } ;
struct aml8726_mmc_softc {int * cmd; } ;
typedef int device_t ;
struct TYPE_2__ {int error; } ;


 int FUNC_0 (struct aml8726_mmc_softc*) ;
 int FUNC_1 (struct aml8726_mmc_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct aml8726_mmc_softc*,TYPE_1__*) ;
 struct aml8726_mmc_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct mmc_request*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2, device_t VAR_3, struct mmc_request *VAR_4)
{
 struct aml8726_mmc_softc *VAR_5 = FUNC_3(VAR_2);
 int VAR_6;

 FUNC_0(VAR_5);

 if (VAR_5->cmd != ((void*)0)) {
  FUNC_1(VAR_5);
  return (VAR_0);
 }

 VAR_6 = FUNC_2(VAR_5, VAR_4->cmd);

 FUNC_1(VAR_5);


 if (VAR_6 != VAR_1) {
  VAR_4->cmd->error = VAR_6;
  VAR_4->done(VAR_4);
 }

 return (0);
}
