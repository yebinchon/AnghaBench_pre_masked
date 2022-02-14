
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int bIfaceIndex; } ;
struct usb_attach_arg {int device; TYPE_3__ info; } ;
struct ugold_softc {int* sc_iface_index; int sc_mtx; int * sc_xfer; int * sc_valid; int * sc_calib; int * sc_sensor; int sc_report_id; int sc_callout; TYPE_2__* sc_readout_msg; int sc_udev; } ;
struct sysctl_oid {int dummy; } ;
typedef int device_t ;
struct TYPE_4__ {int * pm_callback; } ;
struct TYPE_5__ {struct ugold_softc* sc; TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid* FUNC_2 (int ,int ,int ,char*,int ,int *,char*) ;
 int FUNC_3 (struct sysctl_oid*) ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int FUNC_4 (int *,int *,int ) ;
 struct usb_attach_arg* FUNC_5 (int ) ;
 struct ugold_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct sysctl_oid* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (void*,int ) ;
 int VAR_11 ;
 int FUNC_11 (void*,int ,int ,int *) ;
 int FUNC_12 (int *,char*,int *,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int VAR_12 ;
 int FUNC_15 (int ) ;
 int VAR_13 ;
 int FUNC_16 (struct ugold_softc*) ;
 int FUNC_17 (int) ;
 int * FUNC_18 (int ,int) ;
 int FUNC_19 (int ,int *,void**,int *,int ,int) ;
 int FUNC_20 (int ,int,int) ;
 int FUNC_21 (int ,int*,int *,int ,int ,struct ugold_softc*,int *) ;
 int FUNC_22 (int ) ;

__attribute__((used)) static int
FUNC_23(device_t VAR_14)
{
 struct ugold_softc *VAR_15 = FUNC_6(VAR_14);
 struct usb_attach_arg *VAR_16 = FUNC_5(VAR_14);
 struct sysctl_oid *VAR_17;
 uint16_t VAR_18;
 void *VAR_19;
 int VAR_20;
 int VAR_21;

 VAR_15->sc_udev = VAR_16->device;
 VAR_15->sc_readout_msg[0].hdr.pm_callback = &VAR_13;
 VAR_15->sc_readout_msg[0].sc = VAR_15;
 VAR_15->sc_readout_msg[1].hdr.pm_callback = &VAR_13;
 VAR_15->sc_readout_msg[1].sc = VAR_15;
 VAR_15->sc_iface_index[0] = VAR_16->info.bIfaceIndex;
 VAR_15->sc_iface_index[1] = VAR_16->info.bIfaceIndex + 1;

 FUNC_9(VAR_14);
 FUNC_12(&VAR_15->sc_mtx, "ugold lock", ((void*)0), VAR_3 | VAR_4);
 FUNC_4(&VAR_15->sc_callout, &VAR_15->sc_mtx, 0);


 for (VAR_21 = 0;; VAR_21++) {
  if (VAR_21 == VAR_16->info.bIfaceIndex)
   continue;
  if (FUNC_18(VAR_16->device, VAR_21) == ((void*)0))
   break;

  FUNC_20(VAR_16->device, VAR_21, VAR_16->info.bIfaceIndex);
 }


 VAR_20 = FUNC_19(VAR_16->device, ((void*)0),
     &VAR_19, &VAR_18, VAR_5, VAR_16->info.bIfaceIndex);

 if (VAR_20)
  goto detach;

 (void)FUNC_11(VAR_19, VAR_18, VAR_11, &VAR_15->sc_report_id);

 FUNC_10(VAR_19, VAR_5);

 VAR_20 = FUNC_21(VAR_16->device,
     VAR_15->sc_iface_index, VAR_15->sc_xfer, VAR_12,
     VAR_9, VAR_15, &VAR_15->sc_mtx);
 if (VAR_20)
  goto detach;

 VAR_17 = FUNC_2(FUNC_7(VAR_14),
     FUNC_3(FUNC_8(VAR_14)), VAR_6, "sensors",
     VAR_0, ((void*)0), "");

 if (VAR_17 == ((void*)0)) {
  VAR_20 = VAR_2;
  goto detach;
 }
 FUNC_1(FUNC_7(VAR_14),
     FUNC_3(VAR_17),
     VAR_6, "inner", VAR_0, &VAR_15->sc_sensor[VAR_7], 0,
     "Inner temperature in microCelcius");

 FUNC_1(FUNC_7(VAR_14),
     FUNC_3(VAR_17),
     VAR_6, "inner_valid", VAR_0, &VAR_15->sc_valid[VAR_7], 0,
     "Inner temperature is valid");

 FUNC_1(FUNC_7(VAR_14),
     FUNC_3(VAR_17),
     VAR_6, "inner_calib", VAR_1, &VAR_15->sc_calib[VAR_7], 0,
     "Inner calibration temperature in microCelcius");

 FUNC_1(FUNC_7(VAR_14),
     FUNC_3(VAR_17),
     VAR_6, "outer", VAR_0, &VAR_15->sc_sensor[VAR_10], 0,
     "Outer temperature in microCelcius");

 FUNC_1(FUNC_7(VAR_14),
     FUNC_3(VAR_17),
     VAR_6, "outer_calib", VAR_1, &VAR_15->sc_calib[VAR_10], 0,
     "Outer calibration temperature in microCelcius");

 FUNC_1(FUNC_7(VAR_14),
     FUNC_3(VAR_17),
     VAR_6, "outer_valid", VAR_0, &VAR_15->sc_valid[VAR_10], 0,
     "Outer temperature is valid");

 FUNC_13(&VAR_15->sc_mtx);
 FUNC_22(VAR_15->sc_xfer[VAR_8]);
 FUNC_16(VAR_15);
 FUNC_14(&VAR_15->sc_mtx);

 return (0);

detach:
 FUNC_0("error=%s\n", FUNC_17(VAR_20));
 FUNC_15(VAR_14);
 return (VAR_20);
}
