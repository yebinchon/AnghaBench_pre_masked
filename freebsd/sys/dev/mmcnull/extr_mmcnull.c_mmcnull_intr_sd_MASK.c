
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int status; } ;
struct TYPE_5__ {int opcode; int* resp; int error; TYPE_1__* data; } ;
struct ccb_mmcio {TYPE_2__ cmd; } ;
union ccb {TYPE_3__ ccb_h; struct ccb_mmcio mmcio; } ;
struct mmcnull_softc {union ccb* cur_ccb; int dev; int sc_mtx; } ;
struct TYPE_4__ {int data; } ;



 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;




 int VAR_3 ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (union ccb*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_4) {
 struct mmcnull_softc *VAR_5;
 union ccb *VAR_6;
 struct ccb_mmcio *VAR_7;

 VAR_5 = (struct mmcnull_softc *) VAR_4;
 FUNC_1(&VAR_5->sc_mtx, VAR_1);

 VAR_6 = VAR_5->cur_ccb;
 VAR_7 = &VAR_6->mmcio;
 FUNC_0(VAR_5->dev, "mmcnull_intr: MMC command = %d\n",
        VAR_7->cmd.opcode);

 switch (VAR_7->cmd.opcode) {
 case 134:
  FUNC_0(VAR_5->dev, "Reset device\n");
  break;
 case 129:
  VAR_7->cmd.resp[0] = 0x1AA;
  break;
 case 135:
  VAR_7->cmd.resp[0] = VAR_3;
  break;
 case 128:
 case 131:
  VAR_7->cmd.resp[0] = 0x1 << 16;
  break;
 case 137:
  VAR_7->cmd.resp[0] = 0xc0ff8000;
  VAR_7->cmd.resp[0] |= VAR_2;
  break;
 case 136:

  VAR_7->cmd.resp[0] = 0x1b534d30;
  VAR_7->cmd.resp[1] = 0x30303030;
  VAR_7->cmd.resp[2] = 0x10842806;
  VAR_7->cmd.resp[3] = 0x5700e900;
  break;
 case 130:

  VAR_7->cmd.resp[0] = 0x400e0032;
  VAR_7->cmd.resp[1] = 0x5b590000;
  VAR_7->cmd.resp[2] = 0x751f7f80;
  VAR_7->cmd.resp[3] = 0x0a404000;
  break;
 case 132:
 case 133:
  FUNC_2(VAR_7->cmd.data->data, "WTF?!");
  break;
 default:
  FUNC_0(VAR_5->dev, "mmcnull_intr_sd: unknown command\n");
  VAR_7->cmd.error = 1;
 }
 VAR_6->ccb_h.status = VAR_0;

 VAR_5->cur_ccb = ((void*)0);
 FUNC_3(VAR_6);
}
