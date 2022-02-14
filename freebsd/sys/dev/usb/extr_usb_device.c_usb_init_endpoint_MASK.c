
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t usb_stream_t ;
typedef int uint8_t ;
struct usb_endpoint_ss_comp_descriptor {int bmAttributes; } ;
struct usb_endpoint_descriptor {int bmAttributes; } ;
struct usb_endpoint {int * methods; TYPE_1__* endpoint_q; int iface_index; struct usb_endpoint_ss_comp_descriptor* ecomp; struct usb_endpoint_descriptor* edesc; } ;
struct usb_device {scalar_t__ speed; TYPE_2__* bus; } ;
struct usb_bus_methods {int (* clear_stall ) (struct usb_device*,struct usb_endpoint*) ;int (* endpoint_init ) (struct usb_device*,struct usb_endpoint_descriptor*,struct usb_endpoint*) ;} ;
struct TYPE_5__ {struct usb_bus_methods* methods; } ;
struct TYPE_4__ {int * command; int head; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct usb_device*,struct usb_endpoint_descriptor*,struct usb_endpoint*) ;
 int FUNC_5 (struct usb_device*,struct usb_endpoint*) ;
 int VAR_6 ;
 int FUNC_6 (struct usb_device*,struct usb_endpoint*,int ) ;

__attribute__((used)) static void
FUNC_7(struct usb_device *VAR_7, uint8_t VAR_8,
    struct usb_endpoint_descriptor *VAR_9,
    struct usb_endpoint_ss_comp_descriptor *VAR_10,
    struct usb_endpoint *VAR_11)
{
 const struct usb_bus_methods *VAR_12;
 usb_stream_t VAR_13;

 VAR_12 = VAR_7->bus->methods;

 (VAR_12->endpoint_init) (VAR_7, VAR_9, VAR_11);


 VAR_11->edesc = VAR_9;
 VAR_11->ecomp = VAR_10;
 VAR_11->iface_index = VAR_8;


 for (VAR_13 = 0; VAR_13 != VAR_4; VAR_13++) {
  FUNC_0(&VAR_11->endpoint_q[VAR_13].head);
  VAR_11->endpoint_q[VAR_13].command = &VAR_6;
 }


  if (VAR_11->methods == ((void*)0))
  return;


 if (VAR_7->speed == VAR_5 && VAR_10 != ((void*)0) &&
     (VAR_9->bmAttributes & VAR_1) == VAR_0 &&
     (FUNC_1(VAR_10->bmAttributes) != 0)) {
  FUNC_6(VAR_7, VAR_11, VAR_3);
 } else {
  FUNC_6(VAR_7, VAR_11, VAR_2);
 }


 if (VAR_12->clear_stall != ((void*)0)) {
  FUNC_2(VAR_7->bus);
  (VAR_12->clear_stall) (VAR_7, VAR_11);
  FUNC_3(VAR_7->bus);
 }
}
