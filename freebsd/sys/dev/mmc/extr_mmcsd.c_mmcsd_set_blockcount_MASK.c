
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct mmcsd_softc {int dev; int mmcbus; } ;
struct mmc_request {int arg; int flags; int error; int opcode; struct mmc_request* cmd; struct mmc_request* mrq; } ;
struct mmc_command {int arg; int flags; int error; int opcode; struct mmc_command* cmd; struct mmc_command* mrq; } ;
typedef int req ;
typedef int cmd ;


 int FUNC_0 (int ,int ,struct mmc_request*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mmc_request*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct mmcsd_softc *VAR_3, u_int VAR_4, bool VAR_5)
{
 struct mmc_command VAR_6;
 struct mmc_request VAR_7;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.mrq = &VAR_7;
 VAR_7.cmd = &VAR_6;
 VAR_6.opcode = VAR_2;
 VAR_6.arg = VAR_4 & 0x0000FFFF;
 if (VAR_5)
  VAR_6.arg |= 1 << 31;
 VAR_6.flags = VAR_1 | VAR_0;
 FUNC_0(VAR_3->mmcbus, VAR_3->dev, &VAR_7);
 return (VAR_6.error);
}
