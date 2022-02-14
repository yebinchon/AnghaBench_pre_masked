
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct mmc_request {struct mmc_command* cmd; } ;
struct mmc_command {int opcode; int arg; int flags; TYPE_3__* data; int error; } ;
struct aw_mmc_softc {int aw_intr_wait; int aw_timeout; int aw_timeoutc; int aw_dev; scalar_t__ aw_resid; scalar_t__ aw_intr; struct mmc_request* aw_req; TYPE_2__* ccb; } ;
typedef int device_t ;
struct TYPE_6__ {int len; int flags; int block_size; } ;
struct TYPE_4__ {struct mmc_command cmd; } ;
struct TYPE_5__ {TYPE_1__ mmcio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct aw_mmc_softc*) ;
 int VAR_19 ;
 int FUNC_1 (struct aw_mmc_softc*) ;
 int FUNC_2 (struct aw_mmc_softc*,int ,int) ;
 int VAR_20 ;
 int FUNC_3 (int ,char*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_4 (struct aw_mmc_softc*) ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 int FUNC_5 (int *,int,int ,struct aw_mmc_softc*) ;
 struct aw_mmc_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int,...) ;
 int VAR_32 ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_33, device_t VAR_34, struct mmc_request *VAR_35)
{
 int VAR_36;
 struct aw_mmc_softc *VAR_37;
 struct mmc_command *VAR_38;
 uint32_t VAR_39, VAR_40;
 int VAR_41;

 VAR_37 = FUNC_6(VAR_33);

 FUNC_0(VAR_37);
 if (VAR_37->aw_req) {
  FUNC_1(VAR_37);
  return (VAR_20);
 }
 VAR_37->aw_req = VAR_35;
 VAR_38 = VAR_35->cmd;
 VAR_39 = VAR_8;
 VAR_40 = VAR_18;
 VAR_37->aw_intr_wait = 0;
 VAR_37->aw_intr = 0;
 VAR_37->aw_resid = 0;
 VAR_38->error = VAR_24;

 if (VAR_38->opcode == VAR_25)
  VAR_39 |= VAR_11;

 if (VAR_38->flags & VAR_28)
  VAR_39 |= VAR_10;
 if (VAR_38->flags & VAR_26)
  VAR_39 |= VAR_9;
 if (VAR_38->flags & VAR_27)
  VAR_39 |= VAR_5;

 if (VAR_38->data) {
  VAR_39 |= VAR_6 | VAR_13;

  if (VAR_38->data->flags & VAR_22) {
   VAR_39 |= VAR_12;
   VAR_40 |= VAR_15;
   VAR_37->aw_intr_wait |= VAR_15;
  } else {
   VAR_37->aw_intr_wait |= VAR_17;
   VAR_40 |= VAR_17;
  }
  if (VAR_38->data->flags & VAR_23)
   VAR_39 |= VAR_7;






  {
   VAR_36 = FUNC_8(VAR_38->data->len, VAR_29);
   FUNC_2(VAR_37, VAR_1, VAR_36);
   FUNC_2(VAR_37, VAR_2, VAR_38->data->len);
  }
 } else {
  VAR_40 |= VAR_16;
 }


 FUNC_2(VAR_37, VAR_14, VAR_40);
 FUNC_2(VAR_37, VAR_19, 0xffffffff);


 FUNC_2(VAR_37, VAR_0,
     VAR_39 & VAR_12 ? 0 : 0xffff);


 FUNC_2(VAR_37, VAR_3, VAR_38->arg);





 if (VAR_38->data == ((void*)0)) {
  FUNC_2(VAR_37, VAR_4, VAR_39 | VAR_38->opcode);
 } else {
  VAR_41 = FUNC_4(VAR_37);
  if (VAR_41 != 0)
   FUNC_7(VAR_37->aw_dev, "prepare_dma failed: %d\n", VAR_41);

  FUNC_2(VAR_37, VAR_4, VAR_39 | VAR_38->opcode);
 }

 FUNC_5(&VAR_37->aw_timeoutc, VAR_37->aw_timeout * VAR_32,
     VAR_30, VAR_37);
 FUNC_1(VAR_37);

 return (0);
}
