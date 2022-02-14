
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int priority; } ;
struct TYPE_13__ {int func_code; struct cam_path* path; TYPE_1__ pinfo; } ;
struct TYPE_10__ {int error; int* resp; int arg; } ;
struct ccb_mmcio {TYPE_2__ cmd; } ;
union ccb {TYPE_5__ ccb_h; struct ccb_mmcio mmcio; } ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_int32_t ;
struct mmc_params {int card_features; int io_ocr; int card_ocr; int card_rca; int * card_csd; int * card_cid; int sdio_func_count; } ;
struct cam_periph {TYPE_4__* path; scalar_t__ softc; } ;
struct cam_path {TYPE_7__* device; } ;
struct TYPE_14__ {int action; int flags; } ;
typedef TYPE_6__ mmcprobe_softc ;
struct TYPE_15__ {int flags; struct mmc_params mmc_ident_data; int protocol; } ;
struct TYPE_12__ {TYPE_3__* device; } ;
struct TYPE_11__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cam_path*,int ,char*) ;
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



 int VAR_19 ;
 int FUNC_1 (TYPE_6__*,int const) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_3 (struct cam_periph*) ;
 int FUNC_4 (struct cam_periph*) ;
 int FUNC_5 (struct cam_path*,int ,int ,int ,int ) ;
 int FUNC_6 (int *,int*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (union ccb*) ;
 int FUNC_11 (int ,struct cam_path*,union ccb*) ;
 int FUNC_12 (union ccb*) ;
 int FUNC_13 (struct cam_periph*,int ) ;

__attribute__((used)) static void
FUNC_14(struct cam_periph *VAR_24, union ccb *VAR_25)
{
 mmcprobe_softc *VAR_26;
 struct cam_path *VAR_27;

 int VAR_28;
 struct ccb_mmcio *VAR_29;
 u_int32_t VAR_30;

 FUNC_0(VAR_25->ccb_h.path, VAR_2, ("mmcprobe_done\n"));
 VAR_26 = (mmcprobe_softc *)VAR_24->softc;
 VAR_27 = VAR_25->ccb_h.path;
 VAR_30 = VAR_25->ccb_h.pinfo.priority;

 switch (VAR_26->action) {
 case 134:

 case 137:
 {
  FUNC_8("Starting completion of PROBE_RESET\n");
  FUNC_0(VAR_25->ccb_h.path, VAR_2, ("done with PROBE_RESET\n"));
  VAR_29 = &VAR_25->mmcio;
  VAR_28 = VAR_29->cmd.error;

  if (VAR_28 != VAR_11) {
   FUNC_0(VAR_25->ccb_h.path, VAR_2,
      ("GO_IDLE_STATE failed with error %d\n",
       VAR_28));


   if ((VAR_27->device->flags & VAR_3) == 0) {
    FUNC_11(VAR_1, VAR_27, ((void*)0));
   }
   FUNC_1(VAR_26, VAR_19);
   break;
  }
  VAR_27->device->protocol = VAR_20;
  FUNC_1(VAR_26, 129);
  break;
 }
 case 129:
 {
  VAR_29 = &VAR_25->mmcio;
  VAR_28 = VAR_29->cmd.error;
  struct mmc_params *VAR_31 = &VAR_27->device->mmc_ident_data;

  if (VAR_28 != VAR_11 || VAR_29->cmd.resp[0] != 0x1AA) {
   FUNC_0(VAR_25->ccb_h.path, VAR_2,
      ("IF_COND: error %d, pattern %08x\n",
       VAR_28, VAR_29->cmd.resp[0]));
  } else {
   VAR_31->card_features |= VAR_7;
   FUNC_0(VAR_25->ccb_h.path, VAR_2,
      ("SD 2.0 interface conditions: OK\n"));

  }
                FUNC_1(VAR_26, 132);
  break;
 }
        case 132:
        {
  VAR_29 = &VAR_25->mmcio;
  VAR_28 = VAR_29->cmd.error;

                FUNC_0(VAR_25->ccb_h.path, VAR_2,
                          ("SDIO_RESET: error %d, CCCR CTL register: %08x\n",
                           VAR_28, VAR_29->cmd.resp[0]));
                FUNC_1(VAR_26, 133);
                break;
        }
        case 133:
        {
  VAR_29 = &VAR_25->mmcio;
  VAR_28 = VAR_29->cmd.error;
                struct mmc_params *VAR_32 = &VAR_27->device->mmc_ident_data;

                FUNC_0(VAR_25->ccb_h.path, VAR_2,
                          ("SDIO_INIT: error %d, %08x %08x %08x %08x\n",
                           VAR_28, VAR_29->cmd.resp[0],
                           VAR_29->cmd.resp[1],
                           VAR_29->cmd.resp[2],
                           VAR_29->cmd.resp[3]));





  if (VAR_28 != VAR_11) {
                        FUNC_1(VAR_26, 130);
                        break;
  }
                VAR_32->card_features |= VAR_9;
                uint32_t VAR_33 = VAR_29->cmd.resp[0];
                uint32_t VAR_34 = VAR_33 & VAR_22;

                VAR_32->sdio_func_count = FUNC_2(VAR_33);
                FUNC_0(VAR_25->ccb_h.path, VAR_2,
                          ("SDIO card: %d functions\n", VAR_32->sdio_func_count));
                if (VAR_34 == 0) {
                    FUNC_0(VAR_25->ccb_h.path, VAR_2,
                              ("SDIO OCR invalid?!\n"));
                    break;
                }

                if (VAR_34 != 0 && VAR_32->io_ocr == 0) {
                        VAR_32->io_ocr = VAR_34;
                        break;
                }
                FUNC_0(VAR_25->ccb_h.path, VAR_2,
                          ("SDIO OCR: %08x\n", VAR_32->io_ocr));

                if (VAR_33 & VAR_21) {

                        FUNC_1(VAR_26, 130);
                } else {

                        FUNC_1(VAR_26, 128);
                }
                break;
        }
        case 136:
        {
  VAR_29 = &VAR_25->mmcio;
  VAR_28 = VAR_29->cmd.error;
                struct mmc_params *VAR_35 = &VAR_27->device->mmc_ident_data;

  if (VAR_28 != VAR_11) {
   FUNC_0(VAR_25->ccb_h.path, VAR_2,
      ("MMC_INIT: error %d, resp %08x\n",
       VAR_28, VAR_29->cmd.resp[0]));
   FUNC_1(VAR_26, VAR_19);
                        break;
                }
                FUNC_0(VAR_25->ccb_h.path, VAR_2,
                          ("MMC card, OCR %08x\n", VAR_29->cmd.resp[0]));

                if (VAR_35->card_ocr == 0) {

                        VAR_35->card_ocr = VAR_29->cmd.resp[0];
                        FUNC_0(VAR_25->ccb_h.path, VAR_2,
                                  ("-> sending OCR to card\n"));
                        break;
                }

                if (!(VAR_29->cmd.resp[0] & VAR_12)) {
                        FUNC_0(VAR_25->ccb_h.path, VAR_2,
                                  ("Card is still powering up\n"));
                        break;
                }

                VAR_35->card_features |= VAR_6 | VAR_5;
                FUNC_1(VAR_26, 139);
                break;
        }
 case 130:
 {
  VAR_29 = &VAR_25->mmcio;
  VAR_28 = VAR_29->cmd.error;

  if (VAR_28 != VAR_11) {
   FUNC_0(VAR_25->ccb_h.path, VAR_2,
      ("APP_OP_COND: error %d, resp %08x\n",
       VAR_28, VAR_29->cmd.resp[0]));
   FUNC_1(VAR_26, 136);
                        break;
                }

                if (!(VAR_26->flags & VAR_18)) {

                        VAR_26->flags |= VAR_18;
                        break;
                }

                VAR_26->flags &= ~VAR_18;
                if ((VAR_29->cmd.resp[0] & VAR_12) ||
                    (VAR_29->cmd.arg & VAR_15) == 0) {
                        struct mmc_params *VAR_36 = &VAR_27->device->mmc_ident_data;
                        FUNC_0(VAR_25->ccb_h.path, VAR_2,
                                  ("Card OCR: %08x\n", VAR_29->cmd.resp[0]));
                        if (VAR_36->card_ocr == 0) {
                                VAR_36->card_ocr = VAR_29->cmd.resp[0];

                                FUNC_0(VAR_25->ccb_h.path, VAR_2,
                                          ("-> sending OCR to card\n"));
                        } else {



                                FUNC_1(VAR_26, 139);
                        }

                        VAR_36->card_features |= VAR_5;


                        if (VAR_29->cmd.resp[0] & VAR_13) {
                                FUNC_0(VAR_25->ccb_h.path, VAR_2,
                                          ("Card is SDHC\n"));
                                VAR_36->card_features |= VAR_8;
                        }


   if (VAR_29->cmd.resp[0] & VAR_14) {
    FUNC_0(VAR_25->ccb_h.path, VAR_2,
       ("Card supports 1.8V signaling\n"));
    VAR_36->card_features |= VAR_4;
   }
  } else {
   FUNC_0(VAR_25->ccb_h.path, VAR_2,
      ("Card not ready: %08x\n", VAR_29->cmd.resp[0]));

   FUNC_1(VAR_26, 130);
  }

                break;
 }
        case 139:
        {
  VAR_29 = &VAR_25->mmcio;
  VAR_28 = VAR_29->cmd.error;

  if (VAR_28 != VAR_11) {
   FUNC_0(VAR_25->ccb_h.path, VAR_2,
      ("PROBE_GET_CID: error %d\n", VAR_28));
   FUNC_1(VAR_26, VAR_19);
                        break;
                }

                struct mmc_params *VAR_37 = &VAR_27->device->mmc_ident_data;
                FUNC_6(VAR_37->card_cid, VAR_29->cmd.resp, 4 * sizeof(uint32_t));
                FUNC_0(VAR_25->ccb_h.path, VAR_2,
                          ("CID %08x%08x%08x%08x\n",
                           VAR_37->card_cid[0],
                           VAR_37->card_cid[1],
                           VAR_37->card_cid[2],
                           VAR_37->card_cid[3]));
  if (VAR_37->card_features & VAR_6)
   FUNC_1(VAR_26, 135);
  else
   FUNC_1(VAR_26, 128);
                break;
        }
        case 128: {
  VAR_29 = &VAR_25->mmcio;
  VAR_28 = VAR_29->cmd.error;
                struct mmc_params *VAR_38 = &VAR_27->device->mmc_ident_data;
                uint16_t VAR_39 = VAR_29->cmd.resp[0] >> 16;
                FUNC_0(VAR_25->ccb_h.path, VAR_2,
                          ("Card published RCA: %u\n", VAR_39));
                VAR_27->device->mmc_ident_data.card_rca = VAR_39;
  if (VAR_28 != VAR_11) {
   FUNC_0(VAR_25->ccb_h.path, VAR_2,
      ("PROBE_SEND_RELATIVE_ADDR: error %d\n", VAR_28));
   FUNC_1(VAR_26, VAR_19);
                        break;
                }


                if (VAR_38->card_features & VAR_5)
                        FUNC_1(VAR_26, 138);
                else
                        FUNC_1(VAR_26, 131);
  break;
        }
 case 135:
  VAR_29 = &VAR_25->mmcio;
  VAR_28 = VAR_29->cmd.error;
  if (VAR_28 != VAR_11) {
   FUNC_0(VAR_25->ccb_h.path, VAR_2,
       ("PROBE_MMC_SET_RELATIVE_ADDR: error %d\n", VAR_28));
   FUNC_1(VAR_26, VAR_19);
   break;
  }
  VAR_27->device->mmc_ident_data.card_rca = VAR_16;
  FUNC_1(VAR_26, 138);
  break;
        case 138: {
  VAR_29 = &VAR_25->mmcio;
  VAR_28 = VAR_29->cmd.error;

  if (VAR_28 != VAR_11) {
   FUNC_0(VAR_25->ccb_h.path, VAR_2,
      ("PROBE_GET_CSD: error %d\n", VAR_28));
   FUNC_1(VAR_26, VAR_19);
                        break;
                }

                struct mmc_params *VAR_40 = &VAR_27->device->mmc_ident_data;
                FUNC_6(VAR_40->card_csd, VAR_29->cmd.resp, 4 * sizeof(uint32_t));
                FUNC_0(VAR_25->ccb_h.path, VAR_2,
                          ("CSD %08x%08x%08x%08x\n",
                           VAR_40->card_csd[0],
                           VAR_40->card_csd[1],
                           VAR_40->card_csd[2],
                           VAR_40->card_csd[3]));
                FUNC_1(VAR_26, 131);
                break;
        }
        case 131: {
  VAR_29 = &VAR_25->mmcio;
  VAR_28 = VAR_29->cmd.error;
  if (VAR_28 != VAR_11) {
   FUNC_0(VAR_25->ccb_h.path, VAR_2,
      ("PROBE_SEND_RELATIVE_ADDR: error %d\n", VAR_28));
   FUNC_1(VAR_26, VAR_19);
                        break;
                }

  FUNC_1(VAR_26, VAR_17);
                break;
        }
 default:
  FUNC_0(VAR_25->ccb_h.path, VAR_2,
     ("mmc_probedone: invalid action state 0x%x\n", VAR_26->action));
  FUNC_7("default: case in mmc_probe_done()");
 }

        if (VAR_26->action == VAR_19 &&
            (VAR_27->device->flags & VAR_3) == 0) {
                FUNC_0(VAR_25->ccb_h.path, VAR_2,
     ("mmc_probedone: Should send AC_LOST_DEVICE but won't for now\n"));

        }

 FUNC_12(VAR_25);
        if (VAR_26->action != VAR_19)
                FUNC_13(VAR_24, VAR_30);

 int VAR_41 = FUNC_5(VAR_27, 0, 0, 0, VAR_10);
        FUNC_8("mmc_probedone: remaining freezecnt %d\n", VAR_41);

 if (VAR_26->action == VAR_17) {

  if (VAR_24->path->device->flags & VAR_3) {
   VAR_27->device->flags &= ~VAR_3;
   FUNC_9(VAR_27->device);
   VAR_25->ccb_h.func_code = VAR_23;
   FUNC_10(VAR_25);
   FUNC_11(VAR_0, VAR_27, VAR_25);
  }
 }
        if (VAR_26->action == VAR_17 || VAR_26->action == VAR_19) {
                FUNC_3(VAR_24);
                FUNC_4(VAR_24);
        }
}
