
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef int uint16_t ;
struct TYPE_4__ {int bIfaceIndex; } ;
struct usb_attach_arg {TYPE_1__ info; int device; } ;
struct TYPE_6__ {int rate; scalar_t__ level; scalar_t__ accelfactor; int * syncmask; int packetsize; int resolution; int protocol; } ;
struct TYPE_5__ {int buttons; scalar_t__ hwid; int model; int type; int iftype; } ;
struct atp_softc {scalar_t__ sc_expected_sensor_data_len; int sc_family; int sc_mutex; int sc_callout; scalar_t__ sc_ibtn; scalar_t__ sc_state; TYPE_3__ sc_mode; TYPE_2__ sc_hw; int sc_fifo; int sc_usb_device; int sc_xfer; int sensor_data_interpreter; int * sc_params; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned long) ;
 size_t FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int ,char*,struct atp_softc*) ;
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
 scalar_t__ VAR_19 ;
 unsigned long FUNC_4 (struct usb_attach_arg*) ;
 int FUNC_5 (int ) ;
 int VAR_20 ;
 scalar_t__ FUNC_6 (struct atp_softc*,int ) ;
 int VAR_21 ;
 int FUNC_7 (int *,int *,int ) ;
 struct usb_attach_arg* FUNC_8 (int ) ;
 struct atp_softc* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int * VAR_22 ;
 int VAR_23 ;
 int FUNC_12 (void*,int ) ;
 int VAR_24 ;
 scalar_t__ FUNC_13 (void*,int ,int ,int *) ;
 int FUNC_14 (int *,char*,int *,int) ;
 scalar_t__ FUNC_15 (int ,struct atp_softc*,int *,int *,int *,int ,int,int ,int ,int ,int) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (int ,int *,void**,int *,int ,int ) ;
 scalar_t__ FUNC_18 (int ,int *,int ,int ,int ,struct atp_softc*,int *) ;
 int * VAR_25 ;
 int VAR_26 ;

__attribute__((used)) static int
FUNC_19(device_t VAR_27)
{
 struct atp_softc *VAR_28 = FUNC_9(VAR_27);
 struct usb_attach_arg *VAR_29 = FUNC_8(VAR_27);
 usb_error_t VAR_30;
 void *VAR_31 = ((void*)0);
 uint16_t VAR_32;
 unsigned long VAR_33;

 FUNC_3(VAR_0, "sc=%p\n", VAR_28);

 VAR_28->sc_dev = VAR_27;
 VAR_28->sc_usb_device = VAR_29->device;


 if (FUNC_17(VAR_29->device, ((void*)0), &VAR_31,
     &VAR_32, VAR_16, VAR_29->info.bIfaceIndex) !=
     VAR_19)
  return (VAR_4);


 VAR_28->sc_expected_sensor_data_len = FUNC_13(VAR_31,
     VAR_32, VAR_24, ((void*)0));
 FUNC_12(VAR_31, VAR_16);

 if ((VAR_28->sc_expected_sensor_data_len <= 0) ||
     (VAR_28->sc_expected_sensor_data_len > VAR_2)) {
  FUNC_2("atp_attach: datalength invalid or too large: %d\n",
   VAR_28->sc_expected_sensor_data_len);
  return (VAR_4);
 }
 if ((VAR_30 = FUNC_6(VAR_28, VAR_17)) != 0) {
  FUNC_2("failed to set mode to 'RAW_SENSOR' (%d)\n", VAR_30);
  return (VAR_4);
 }

 FUNC_14(&VAR_28->sc_mutex, "atpmtx", ((void*)0), VAR_14 | VAR_15);

 VAR_33 = FUNC_4(VAR_29);

 VAR_28->sc_family = FUNC_0(VAR_33);

 switch(VAR_28->sc_family) {
 case 129:
  VAR_28->sc_params =
      &VAR_22[FUNC_1(VAR_33)];
  VAR_28->sensor_data_interpreter = VAR_23;
  break;
 case 128:
  VAR_28->sc_params =
      &VAR_25[FUNC_1(VAR_33)];
  VAR_28->sensor_data_interpreter = VAR_26;
  break;
 default:
  goto detach;
 }

 VAR_30 = FUNC_18(VAR_29->device,
     &VAR_29->info.bIfaceIndex, VAR_28->sc_xfer, VAR_21,
     VAR_1, VAR_28, &VAR_28->sc_mutex);
 if (VAR_30) {
  FUNC_2("error=%s\n", FUNC_16(VAR_30));
  goto detach;
 }

 if (FUNC_15(VAR_28->sc_usb_device, VAR_28, &VAR_28->sc_mutex,
     &VAR_20, &VAR_28->sc_fifo,
     FUNC_10(VAR_27), -1, VAR_29->info.bIfaceIndex,
     VAR_18, VAR_5, 0644)) {
  goto detach;
 }

 FUNC_11(VAR_27);

 VAR_28->sc_hw.buttons = 3;
 VAR_28->sc_hw.iftype = VAR_6;
 VAR_28->sc_hw.type = VAR_11;
 VAR_28->sc_hw.model = VAR_7;
 VAR_28->sc_hw.hwid = 0;
 VAR_28->sc_mode.protocol = VAR_12;
 VAR_28->sc_mode.rate = -1;
 VAR_28->sc_mode.resolution = VAR_13;
 VAR_28->sc_mode.packetsize = VAR_8;
 VAR_28->sc_mode.syncmask[0] = VAR_10;
 VAR_28->sc_mode.syncmask[1] = VAR_9;
 VAR_28->sc_mode.accelfactor = 0;
 VAR_28->sc_mode.level = 0;

 VAR_28->sc_state = 0;
 VAR_28->sc_ibtn = 0;

 FUNC_7(&VAR_28->sc_callout, &VAR_28->sc_mutex, 0);

 return (0);

detach:
 FUNC_5(VAR_27);
 return (VAR_3);
}
