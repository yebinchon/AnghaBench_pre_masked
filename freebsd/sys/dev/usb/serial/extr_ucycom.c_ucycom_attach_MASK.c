
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int bIfaceNum; } ;
struct usb_attach_arg {int device; TYPE_1__ info; } ;
struct ucycom_softc {scalar_t__ sc_model; int sc_flen; int sc_ilen; int sc_olen; int sc_super_ucom; int sc_mtx; int sc_ucom; int sc_xfer; int sc_iface_no; int sc_oid; int sc_iid; int sc_fid; int sc_udev; } ;
typedef scalar_t__ int32_t ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct usb_attach_arg*) ;
 struct usb_attach_arg* FUNC_2 (int ) ;
 struct ucycom_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_7 (void*,int ,int ,int *) ;
 int FUNC_8 (int *,char*,int *,int ) ;
 scalar_t__ FUNC_9 (int *,int *,int,struct ucycom_softc*,int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (int ,int *,void**,int *,int ,int ) ;
 scalar_t__ FUNC_15 (int ,int *,int ,int ,int ,struct ucycom_softc*,int *) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_11)
{
 struct usb_attach_arg *VAR_12 = FUNC_2(VAR_11);
 struct ucycom_softc *VAR_13 = FUNC_3(VAR_11);
 void *VAR_14 = ((void*)0);
 int32_t VAR_15;
 uint16_t VAR_16;
 uint8_t VAR_17;

 VAR_13->sc_udev = VAR_12->device;

 FUNC_5(VAR_11);
 FUNC_8(&VAR_13->sc_mtx, "ucycom", ((void*)0), VAR_1);
 FUNC_10(&VAR_13->sc_super_ucom);

 FUNC_0("\n");


 VAR_13->sc_model = FUNC_1(VAR_12);
 if (VAR_13->sc_model == 0) {
  FUNC_4(VAR_11, "unsupported device\n");
  goto detach;
 }
 FUNC_4(VAR_11, "Cypress CY7C%X USB to RS232 bridge\n", VAR_13->sc_model);



 VAR_15 = FUNC_14(VAR_12->device, ((void*)0),
     &VAR_14, &VAR_16, VAR_2,
     VAR_3);

 if (VAR_15) {
  FUNC_4(VAR_11, "failed to get report "
      "descriptor: %s\n",
      FUNC_13(VAR_15));
  goto detach;
 }


 VAR_13->sc_flen = FUNC_7(VAR_14, VAR_16, VAR_6, &VAR_13->sc_fid);
 VAR_13->sc_ilen = FUNC_7(VAR_14, VAR_16, VAR_7, &VAR_13->sc_iid);
 VAR_13->sc_olen = FUNC_7(VAR_14, VAR_16, VAR_8, &VAR_13->sc_oid);

 if ((VAR_13->sc_ilen > VAR_4) || (VAR_13->sc_ilen < 1) ||
     (VAR_13->sc_olen > VAR_4) || (VAR_13->sc_olen < 2) ||
     (VAR_13->sc_flen > VAR_4) || (VAR_13->sc_flen < 5)) {
  FUNC_4(VAR_11, "invalid report size i=%d, o=%d, f=%d, max=%d\n",
      VAR_13->sc_ilen, VAR_13->sc_olen, VAR_13->sc_flen,
      VAR_4);
  goto detach;
 }
 VAR_13->sc_iface_no = VAR_12->info.bIfaceNum;

 VAR_17 = VAR_3;
 VAR_15 = FUNC_15(VAR_12->device, &VAR_17,
     VAR_13->sc_xfer, VAR_10, VAR_5,
     VAR_13, &VAR_13->sc_mtx);
 if (VAR_15) {
  FUNC_4(VAR_11, "allocating USB "
      "transfers failed\n");
  goto detach;
 }
 VAR_15 = FUNC_9(&VAR_13->sc_super_ucom, &VAR_13->sc_ucom, 1, VAR_13,
     &VAR_9, &VAR_13->sc_mtx);
 if (VAR_15) {
  goto detach;
 }
 FUNC_11(&VAR_13->sc_super_ucom, VAR_11);

 if (VAR_14) {
  FUNC_6(VAR_14, VAR_2);
 }

 return (0);

detach:
 if (VAR_14) {
  FUNC_6(VAR_14, VAR_2);
 }
 FUNC_12(VAR_11);
 return (VAR_0);
}
