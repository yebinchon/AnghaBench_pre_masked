
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
typedef TYPE_1__ usb_device_request_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ u_char ;
struct run_softc {int mac_ver; int sc_flags; int sc_dev; int sc_mtx; int sc_udev; } ;
struct firmware {int datasize; scalar_t__* data; } ;


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
 int FUNC_0 (struct run_softc*) ;
 int FUNC_1 (struct run_softc*) ;
 int FUNC_2 (int ,int) ;
 int VAR_15 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,char*,...) ;
 struct firmware* FUNC_5 (char*) ;
 int FUNC_6 (struct firmware const*,int ) ;
 int FUNC_7 (struct run_softc*,int) ;
 int FUNC_8 (struct run_softc*,int ,int ) ;
 int FUNC_9 (struct run_softc*,int ,int*) ;
 int FUNC_10 (struct run_softc*,int ,int) ;
 int FUNC_11 (struct run_softc*,int ,scalar_t__ const*,int) ;
 int FUNC_12 (int ,int *,TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_13(struct run_softc *VAR_16)
{
 usb_device_request_t VAR_17;
 const struct firmware *VAR_18;
 const u_char *VAR_19;
 uint32_t VAR_20;
 int VAR_21, VAR_22;
 const uint64_t *VAR_23;
 uint64_t VAR_24;

 FUNC_1(VAR_16);
 VAR_18 = FUNC_5("runfw");
 FUNC_0(VAR_16);
 if (VAR_18 == ((void*)0)) {
  FUNC_4(VAR_16->sc_dev,
      "failed loadfirmware of file %s\n", "runfw");
  return VAR_1;
 }

 if (VAR_18->datasize != 8192) {
  FUNC_4(VAR_16->sc_dev,
      "invalid firmware size (should be 8KB)\n");
  VAR_22 = VAR_0;
  goto fail;
 }







 VAR_19 = VAR_18->data;
 if ((VAR_16->mac_ver) != 0x2860 &&
     (VAR_16->mac_ver) != 0x2872 &&
     (VAR_16->mac_ver) != 0x3070) {
  VAR_19 += 4096;
 }


 VAR_23 = VAR_18->data;
 VAR_24 = *VAR_23;
 if (VAR_24 != FUNC_3(0xffffff0210280210ULL)) {
  FUNC_4(VAR_16->sc_dev, "firmware checksum failed\n");
  VAR_22 = VAR_0;
  goto fail;
 }


 if (VAR_16->sc_flags & VAR_14) {
  FUNC_11(VAR_16, VAR_12, VAR_19, 4096);
  FUNC_10(VAR_16, VAR_7, 0xffffffff);
  FUNC_10(VAR_16, VAR_8, 0xffffffff);
 }

 VAR_17.bmRequestType = VAR_15;
 VAR_17.bRequest = VAR_13;
 FUNC_2(VAR_17.wValue, 8);
 FUNC_2(VAR_17.wIndex, 0);
 FUNC_2(VAR_17.wLength, 0);
 if ((VAR_22 = FUNC_12(VAR_16->sc_udev, &VAR_16->sc_mtx, &VAR_17, ((void*)0)))
     != 0) {
  FUNC_4(VAR_16->sc_dev, "firmware reset failed\n");
  goto fail;
 }

 FUNC_7(VAR_16, 10);

 FUNC_10(VAR_16, VAR_4, 0);
 FUNC_10(VAR_16, VAR_6, 0);
 FUNC_10(VAR_16, VAR_5, 0);
 if ((VAR_22 = FUNC_8(VAR_16, VAR_9, 0)) != 0)
  goto fail;


 for (VAR_21 = 0; VAR_21 < 1000; VAR_21++) {
  if ((VAR_22 = FUNC_9(VAR_16, VAR_11, &VAR_20)) != 0)
   goto fail;
  if (VAR_20 & VAR_10)
   break;
  FUNC_7(VAR_16, 10);
 }
 if (VAR_21 == 1000) {
  FUNC_4(VAR_16->sc_dev,
      "timeout waiting for MCU to initialize\n");
  VAR_22 = VAR_2;
  goto fail;
 }
 FUNC_4(VAR_16->sc_dev, "firmware %s ver. %u.%u loaded\n",
     (VAR_19 == VAR_18->data) ? "RT2870" : "RT3071",
     *(VAR_19 + 4092), *(VAR_19 + 4093));

fail:
 FUNC_6(VAR_18, VAR_3);
 return (VAR_22);
}
