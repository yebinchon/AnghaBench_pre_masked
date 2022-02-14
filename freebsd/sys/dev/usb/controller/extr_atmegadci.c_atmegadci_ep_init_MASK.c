
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_endpoint_descriptor {int bmAttributes; int bEndpointAddress; } ;
struct usb_endpoint {int * methods; } ;
struct TYPE_2__ {int usb_mode; } ;
struct usb_device {scalar_t__ device_index; scalar_t__ speed; TYPE_1__ flags; int address; int bus; } ;
struct atmegadci_softc {scalar_t__ sc_rt_addr; } ;


 struct atmegadci_softc* FUNC_0 (int ) ;
 int FUNC_1 (int,char*,struct usb_endpoint*,int ,int ,int ,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(struct usb_device *VAR_5, struct usb_endpoint_descriptor *VAR_6,
    struct usb_endpoint *VAR_7)
{
 struct atmegadci_softc *VAR_8 = FUNC_0(VAR_5->bus);

 FUNC_1(2, "endpoint=%p, addr=%d, endpt=%d, mode=%d (%d,%d)\n",
     VAR_7, VAR_5->address,
     VAR_6->bEndpointAddress, VAR_5->flags.usb_mode,
     VAR_8->sc_rt_addr, VAR_5->device_index);

 if (VAR_5->device_index != VAR_8->sc_rt_addr) {

  if (VAR_5->speed != VAR_2) {

   return;
  }
  if ((VAR_6->bmAttributes & VAR_1) == VAR_0)
   VAR_7->methods = &VAR_3;
  else
   VAR_7->methods = &VAR_4;
 }
}
