
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wAvail ;
typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int uWord ;
struct uvisor_softc {int sc_flag; } ;
struct uvisor_palm_connection_info {int num_ports; TYPE_1__* connections; scalar_t__ endpoint_numbers_different; } ;
struct uvisor_connection_info {int num_ports; TYPE_1__* connections; scalar_t__ endpoint_numbers_different; } ;
struct usb_device_request {int wLength; int wIndex; int wValue; void* bRequest; void* bmRequestType; } ;
struct usb_device {int dummy; } ;
struct usb_config {int endpoint; } ;
struct TYPE_2__ {int port_function_id; int port; int end_point_info; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int) ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;




 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 void* VAR_16 ;
 scalar_t__ FUNC_3 (struct usb_device*,struct usb_device_request*,...) ;
 scalar_t__ FUNC_4 (struct usb_device*,int *,struct usb_device_request*,struct uvisor_palm_connection_info*,int ,scalar_t__*,int ) ;

__attribute__((used)) static usb_error_t
FUNC_5(struct uvisor_softc *VAR_17, struct usb_device *VAR_18, struct usb_config *VAR_19)
{
 usb_error_t VAR_20 = 0;
 struct usb_device_request VAR_21;
 struct uvisor_connection_info VAR_22;
 struct uvisor_palm_connection_info VAR_23;
 uint16_t VAR_24;
 uint8_t VAR_25[256];

 if (VAR_17->sc_flag & VAR_11) {
  FUNC_0("getting connection info\n");
  VAR_21.bmRequestType = VAR_7;
  VAR_21.bRequest = VAR_12;
  FUNC_2(VAR_21.wValue, 0);
  FUNC_2(VAR_21.wIndex, 0);
  FUNC_2(VAR_21.wLength, VAR_8);
  VAR_20 = FUNC_4(VAR_18, ((void*)0),
      &VAR_21, &VAR_22, VAR_4,
      &VAR_24, VAR_2);

  if (VAR_20) {
   goto done;
  }
 }
 if (VAR_17->sc_flag & VAR_10) {
  uint8_t VAR_26;


  VAR_21.bmRequestType = VAR_7;
  VAR_21.bRequest = VAR_13;
  FUNC_2(VAR_21.wValue, 0);
  FUNC_2(VAR_21.wIndex, 0);
  FUNC_2(VAR_21.wLength, VAR_14);

  VAR_20 = FUNC_4
      (VAR_18, ((void*)0), &VAR_21, &VAR_23, VAR_4,
      &VAR_24, VAR_2);

  if (VAR_20) {
   goto done;
  }
  if (VAR_24 < 12) {
   FUNC_0("too little data\n");
   VAR_20 = VAR_3;
   goto done;
  }
  if (VAR_23.endpoint_numbers_different) {
   VAR_26 = VAR_23.connections[0].end_point_info;
   VAR_19[0].endpoint = (VAR_26 & 0xF);
   VAR_19[1].endpoint = (VAR_26 >> 4);
  } else {
   VAR_26 = VAR_23.connections[0].port;
   VAR_19[0].endpoint = (VAR_26 & 0xF);
   VAR_19[1].endpoint = (VAR_26 & 0xF);
  }
 }
 if (VAR_17->sc_flag & VAR_9) {

  FUNC_0("getting config info\n");
  VAR_21.bmRequestType = VAR_5;
  VAR_21.bRequest = VAR_0;
  FUNC_2(VAR_21.wValue, 0);
  FUNC_2(VAR_21.wIndex, 0);
  FUNC_2(VAR_21.wLength, 1);

  VAR_20 = FUNC_3(VAR_18, ((void*)0), &VAR_21, VAR_25);
  if (VAR_20) {
   goto done;
  }

  FUNC_0("get the interface number\n");
  VAR_21.bmRequestType = VAR_6;
  VAR_21.bRequest = VAR_1;
  FUNC_2(VAR_21.wValue, 0);
  FUNC_2(VAR_21.wIndex, 0);
  FUNC_2(VAR_21.wLength, 1);
  VAR_20 = FUNC_3(VAR_18, ((void*)0), &VAR_21, VAR_25);
  if (VAR_20) {
   goto done;
  }
 }
 FUNC_0("done\n");
done:
 return (VAR_20);
}
