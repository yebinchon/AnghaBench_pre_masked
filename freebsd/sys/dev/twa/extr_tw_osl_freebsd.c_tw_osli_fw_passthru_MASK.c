
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct twa_softc {int sg_size_factor; int bus_dev; } ;
struct tw_cl_passthru_req_packet {int sgl_entries; int cmd_pkt_length; int * cmd_pkt; } ;
struct TYPE_6__ {struct tw_cl_passthru_req_packet pt_req; } ;
struct tw_cl_req_packet {int status; TYPE_2__ gen_req_pkt; int flags; int tw_osl_callback; } ;
struct TYPE_5__ {struct tw_osli_req_context* osl_req_ctxt; } ;
struct tw_osli_req_context {int flags; int length; scalar_t__ state; int error_code; int * data; TYPE_3__* ctlr; int ioctl_wake_timeout_lock; struct tw_cl_req_packet req_pkt; int * orig_req; TYPE_1__ req_handle; } ;
struct TYPE_8__ {int buffer_length; int os_status; } ;
struct tw_osli_ioctl_no_data_buf {TYPE_4__ driver_pkt; scalar_t__ pdata; int cmd_pkt; } ;
struct tw_cl_command_packet {int dummy; } ;
struct TYPE_7__ {int ctlr_handle; } ;
typedef int TW_VOID ;
typedef int TW_UINT32 ;
typedef int TW_TIME ;
typedef int TW_INT8 ;
typedef int TW_INT32 ;


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
 scalar_t__ VAR_14 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,scalar_t__,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int ) ;
 int VAR_15 ;
 int * FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct tw_osli_req_context*,int ,int ,char*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_16 ;
 int FUNC_10 () ;
 int FUNC_11 (int,struct twa_softc*,char*) ;
 struct tw_osli_req_context* FUNC_12 (struct twa_softc*) ;
 int FUNC_13 (struct tw_osli_req_context*) ;
 int FUNC_14 (struct twa_softc*,char*,int ,int ,int,char*,...) ;
 int FUNC_15 (struct tw_osli_req_context*,int ) ;

TW_INT32
FUNC_16(struct twa_softc *VAR_17, TW_INT8 *VAR_18)
{
 struct tw_osli_req_context *VAR_19;
 struct tw_osli_ioctl_no_data_buf *VAR_20 =
  (struct tw_osli_ioctl_no_data_buf *)VAR_18;
 TW_TIME VAR_21;
 TW_UINT32 VAR_22 = 60;
 TW_UINT32 VAR_23;
 struct tw_cl_req_packet *VAR_24;
 struct tw_cl_passthru_req_packet *VAR_25;
 TW_INT32 VAR_26;

 FUNC_11(5, VAR_17, "ioctl: passthru");

 if ((VAR_19 = FUNC_12(VAR_17)) == ((void*)0))
  return(VAR_0);

 VAR_19->req_handle.osl_req_ctxt = VAR_19;
 VAR_19->orig_req = VAR_18;
 VAR_19->flags |= VAR_12;

 VAR_24 = &(VAR_19->req_pkt);
 VAR_24->status = 0;
 VAR_24->tw_osl_callback = VAR_16;

 VAR_24->flags |= VAR_6;

 VAR_25 = &(VAR_24->gen_req_pkt.pt_req);




 VAR_23 =
  (VAR_20->driver_pkt.buffer_length +
  (VAR_17->sg_size_factor - 1)) & ~(VAR_17->sg_size_factor - 1);
 if ((VAR_19->length = VAR_23)) {
  if ((VAR_19->data = FUNC_4(VAR_23,
   VAR_9, VAR_3)) == ((void*)0)) {
   VAR_26 = VAR_1;
   FUNC_14(VAR_17, "error = %d",
    VAR_7,
    VAR_5,
    0x2016,
    "Could not alloc mem for "
    "fw_passthru data_buf",
    VAR_26);
   goto fw_passthru_err;
  }

  if ((VAR_26 = FUNC_0((TW_VOID *)(VAR_20->pdata),
   VAR_19->data,
   VAR_20->driver_pkt.buffer_length)) != 0) {
   FUNC_14(VAR_17, "error = %d",
    VAR_7,
    VAR_5,
    0x2017,
    "Could not copyin fw_passthru data_buf",
    VAR_26);
   goto fw_passthru_err;
  }
  VAR_25->sgl_entries = 1;
  VAR_19->flags |= (VAR_10 |
   VAR_11);
 } else
  VAR_25->sgl_entries = 0;

 VAR_25->cmd_pkt = (TW_VOID *)(&(VAR_20->cmd_pkt));
 VAR_25->cmd_pkt_length = sizeof(struct tw_cl_command_packet);

 if ((VAR_26 = FUNC_13(VAR_19)))
  goto fw_passthru_err;

 VAR_21 = FUNC_10() + VAR_22;
 while (VAR_19->state != VAR_14) {
  FUNC_5(VAR_19->ioctl_wake_timeout_lock);
  VAR_19->flags |= VAR_13;

  VAR_26 = FUNC_6(VAR_19, VAR_19->ioctl_wake_timeout_lock, 0,
       "twa_passthru", VAR_22*VAR_15);
  FUNC_7(VAR_19->ioctl_wake_timeout_lock);

  if (!(VAR_19->flags & VAR_13))
   VAR_26 = 0;
  VAR_19->flags &= ~VAR_13;

  if (! VAR_26) {
   if (((VAR_26 = VAR_19->error_code)) ||
    ((VAR_26 = (VAR_19->state !=
    VAR_14))) ||
    ((VAR_26 = VAR_24->status)))
    goto fw_passthru_err;
   break;
  }

  if (VAR_24->status) {
   VAR_26 = VAR_24->status;
   goto fw_passthru_err;
  }

  if (VAR_26 == VAR_2) {

   if ((!(VAR_19->error_code)) &&
       (VAR_19->state == VAR_14) &&
       (!(VAR_24->status)) ) {
    VAR_26 = 0;
    break;
   }
   if (!(FUNC_8(&(VAR_19->ctlr->ctlr_handle)))) {
   FUNC_2((VAR_17)->bus_dev, "Passthru request timed out!\n");

    FUNC_9(&(VAR_19->ctlr->ctlr_handle));
   }

   VAR_26 = 0;
   VAR_21 = FUNC_10() + VAR_22;
   continue;





  }




  VAR_22 = (VAR_21 - FUNC_10());
 }


 if ((!VAR_26) && (VAR_19->length))
  if ((VAR_26 = FUNC_1(VAR_19->data, VAR_20->pdata,
   VAR_20->driver_pkt.buffer_length)))
   FUNC_14(VAR_17, "error = %d",
    VAR_7,
    VAR_5,
    0x2019,
    "Could not copyout fw_passthru data_buf",
    VAR_26);

fw_passthru_err:

 if (VAR_24->status == VAR_4)
  VAR_26 = VAR_0;

 VAR_20->driver_pkt.os_status = VAR_26;

 if (VAR_19->data)
  FUNC_3(VAR_19->data, VAR_9);
 FUNC_15(VAR_19, VAR_8);
 return(VAR_26);
}
