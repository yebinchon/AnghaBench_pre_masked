
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_endpoint {TYPE_1__* edesc; } ;
struct usb_device {int bus; } ;
struct musbotg_softc {int dummy; } ;
struct TYPE_2__ {int bEndpointAddress; } ;


 int FUNC_0 (int,char*,struct usb_endpoint*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct musbotg_softc*,int ,int) ;
 struct musbotg_softc* FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct usb_device *VAR_8,
    struct usb_endpoint *VAR_9, uint8_t *VAR_10)
{
 struct musbotg_softc *VAR_11;
 uint8_t VAR_12;

 FUNC_3(VAR_8->bus, VAR_0);

 FUNC_0(4, "endpoint=%p\n", VAR_9);


 VAR_11 = FUNC_2(VAR_8->bus);

 VAR_12 = (VAR_9->edesc->bEndpointAddress & VAR_6);


 FUNC_1(VAR_11, VAR_3, VAR_12);

 if (VAR_9->edesc->bEndpointAddress & VAR_7) {
  FUNC_1(VAR_11, VAR_5,
      VAR_2);
 } else {
  FUNC_1(VAR_11, VAR_4,
      VAR_1);
 }
}
