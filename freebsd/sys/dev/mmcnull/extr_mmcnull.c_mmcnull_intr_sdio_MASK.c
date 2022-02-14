
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int status; } ;
struct TYPE_5__ {int opcode; int* resp; TYPE_1__* data; } ;
struct ccb_mmcio {TYPE_2__ cmd; } ;
union ccb {TYPE_3__ ccb_h; struct ccb_mmcio mmcio; } ;
struct mmcnull_softc {union ccb* cur_ccb; int dev; int tick; int sc_mtx; } ;
struct TYPE_4__ {int data; } ;



 int VAR_0 ;

 int VAR_1 ;



 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int *,int,int ,struct mmcnull_softc*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (union ccb*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_7) {
 struct mmcnull_softc *VAR_8;
 union ccb *VAR_9;
 struct ccb_mmcio *VAR_10;

 VAR_8 = (struct mmcnull_softc *) VAR_7;
 FUNC_2(&VAR_8->sc_mtx, VAR_1);

 VAR_9 = VAR_8->cur_ccb;
 VAR_10 = &VAR_9->mmcio;
 FUNC_1(VAR_8->dev, "mmcnull_intr: MMC command = %d\n",
        VAR_10->cmd.opcode);

 switch (VAR_10->cmd.opcode) {
 case 134:
  FUNC_1(VAR_8->dev, "Reset device\n");
  break;
 case 129:
  VAR_10->cmd.resp[0] = 0x1AA;
  break;
 case 135:
  VAR_10->cmd.resp[0] = VAR_3;
  break;
 case 137:
  VAR_10->cmd.resp[0] = 0x12345678;
  VAR_10->cmd.resp[0] |= ~ VAR_4;
  break;
 case 128:
 case 131:
  VAR_10->cmd.resp[0] = 0x1 << 16;
  break;
 case 138:

  VAR_10->cmd.resp[0] = 0x123;
  VAR_10->cmd.resp[0] |= VAR_2;
  break;
 case 136:
  VAR_10->cmd.resp[0] = 0x1234;
  VAR_10->cmd.resp[1] = 0x5678;
  VAR_10->cmd.resp[2] = 0x9ABC;
  VAR_10->cmd.resp[3] = 0xDEF0;
  break;
 case 132:
 case 133:
  FUNC_3(VAR_10->cmd.data->data, "WTF?!");
  break;
 case 130:
  FUNC_1(VAR_8->dev, "Scheduling interrupt generation...\n");
  FUNC_0(&VAR_8->tick, VAR_5 / 10, VAR_6, VAR_8);
  break;
 default:
  FUNC_1(VAR_8->dev, "mmcnull_intr_sdio: unknown command\n");
 }
 VAR_9->ccb_h.status = VAR_0;

 VAR_8->cur_ccb = ((void*)0);
 FUNC_4(VAR_9);
}
