
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef scalar_t__ uint8_t ;
struct usb_interface_descriptor {int bNumEndpoints; } ;
struct usb_interface {scalar_t__ iface_index; scalar_t__ refcount_alloc; scalar_t__ iface_index_alt; scalar_t__ parent_iface_index; scalar_t__ alt_index; struct usb_interface_descriptor* idesc; } ;
struct usb_idesc_parse_state {scalar_t__ iface_index; scalar_t__ refcount_alloc; scalar_t__ iface_index_alt; scalar_t__ parent_iface_index; scalar_t__ alt_index; struct usb_interface_descriptor* idesc; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct usb_endpoint {scalar_t__ iface_index; scalar_t__ refcount_alloc; scalar_t__ iface_index_alt; scalar_t__ parent_iface_index; scalar_t__ alt_index; struct usb_interface_descriptor* idesc; } ;
struct usb_device {scalar_t__ endpoints_max; scalar_t__ ifaces_max; struct usb_interface* endpoints; struct usb_interface* ifaces; int bus; int * ep_curr; int cdesc; int enum_sx; } ;
typedef int ips ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (struct usb_interface*,int ) ;
 void* FUNC_5 (int,int ,int) ;
 int FUNC_6 (struct usb_interface*,int ,int) ;
 int FUNC_7 (int *,int ) ;
 void* FUNC_8 (int ,void*) ;
 struct usb_endpoint_descriptor* FUNC_9 (int ,struct usb_endpoint_descriptor*) ;
 struct usb_interface_descriptor* FUNC_10 (int ,struct usb_interface*) ;
 int FUNC_11 (struct usb_device*,scalar_t__,struct usb_endpoint_descriptor*,void*,struct usb_interface*) ;

__attribute__((used)) static usb_error_t
FUNC_12(struct usb_device *VAR_11, uint8_t VAR_12, uint8_t VAR_13)
{
 struct usb_idesc_parse_state VAR_14;
 struct usb_interface_descriptor *VAR_15;
 struct usb_endpoint_descriptor *VAR_16;
 struct usb_interface *VAR_17;
 struct usb_endpoint *VAR_18;
 usb_error_t VAR_19;
 uint8_t VAR_20;
 uint8_t VAR_21;
 uint8_t VAR_22;
 uint8_t VAR_23;
 uint8_t VAR_24;

 if (VAR_12 != VAR_9) {

  VAR_24 = VAR_13;
  VAR_13 = VAR_6;
 } else {

  VAR_24 = 0;
 }

 VAR_19 = 0;

 FUNC_1(5, "iface_index=%d cmd=%d\n",
     VAR_12, VAR_13);

 if (VAR_13 == VAR_5)
  goto cleanup;

 if (VAR_13 == VAR_6) {
  FUNC_7(&VAR_11->enum_sx, VAR_3);



  VAR_18 = VAR_11->endpoints;
  VAR_21 = VAR_11->endpoints_max;
  while (VAR_21--) {

   if ((VAR_12 == VAR_9) ||
       (VAR_12 == VAR_18->iface_index)) {
    if (VAR_18->refcount_alloc != 0) {




     VAR_19 = VAR_7;
    } else {

     FUNC_6(VAR_18, 0, sizeof(*VAR_18));

     VAR_18->iface_index = VAR_9;
    }
   }
   VAR_18++;
  }

  if (VAR_19)
   return (VAR_19);
 }

 FUNC_6(&VAR_14, 0, sizeof(VAR_14));

 VAR_20 = 0;
 VAR_21 = 0;

 while ((VAR_15 = FUNC_10(VAR_11->cdesc, &VAR_14))) {

  VAR_17 = VAR_11->ifaces + VAR_14.iface_index;



  if (VAR_13 == VAR_6) {
   if ((VAR_12 != VAR_9) &&
       (VAR_12 != VAR_14.iface_index)) {

    VAR_23 = 0;
   } else if (VAR_24 != VAR_14.iface_index_alt) {

    VAR_23 = 0;
   } else {

    VAR_23 = 1;
   }
  } else
   VAR_23 = 0;


  if (VAR_14.iface_index_alt == 0) {

   VAR_20 = VAR_21;
  }

  if (VAR_23) {

   VAR_17->idesc = VAR_15;

   VAR_17->alt_index = VAR_24;

   if (VAR_12 == VAR_9) {
    VAR_17->parent_iface_index =
        VAR_9;
   }
  }

  FUNC_1(5, "found idesc nendpt=%d\n", VAR_15->bNumEndpoints);

  VAR_16 = (struct usb_endpoint_descriptor *)VAR_15;

  VAR_22 = VAR_20;


  while ((VAR_16 = FUNC_9(VAR_11->cdesc, VAR_16))) {


   if (VAR_22 >= VAR_10) {
    FUNC_0("Endpoint limit reached\n");
    break;
   }

   VAR_18 = VAR_11->endpoints + VAR_22;

   if (VAR_23) {
    void *VAR_25;

    VAR_25 = FUNC_8(VAR_11->cdesc, (void *)VAR_16);
    if (VAR_25 != ((void*)0))
     FUNC_1(5, "Found endpoint companion descriptor\n");

    FUNC_11(VAR_11,
        VAR_14.iface_index, VAR_16, VAR_25, VAR_18);
   }

   VAR_22 ++;


   if (VAR_21 < VAR_22)
    VAR_21 = VAR_22;
  }
 }



 if (VAR_13 == VAR_4) {
  VAR_11->ifaces_max = VAR_14.iface_index;

  VAR_11->ifaces = ((void*)0);
  if (VAR_11->ifaces_max != 0) {
   VAR_11->ifaces = FUNC_5(sizeof(*VAR_17) * VAR_11->ifaces_max,
           VAR_0, VAR_1 | VAR_2);
   if (VAR_11->ifaces == ((void*)0)) {
    VAR_19 = VAR_8;
    goto done;
   }
  }


  if (VAR_21 != 0) {
   VAR_11->endpoints = FUNC_5(sizeof(*VAR_18) * VAR_21,
           VAR_0, VAR_1 | VAR_2);
   if (VAR_11->endpoints == ((void*)0)) {
    VAR_19 = VAR_8;
    goto done;
   }
  } else {
   VAR_11->endpoints = ((void*)0);
  }

  FUNC_2(VAR_11->bus);
  VAR_11->endpoints_max = VAR_21;

  VAR_11->ep_curr = ((void*)0);
  FUNC_3(VAR_11->bus);
 }

done:

 if (VAR_19) {
  if (VAR_13 == VAR_4) {
cleanup:
   FUNC_2(VAR_11->bus);
   VAR_11->endpoints_max = 0;

   VAR_11->ep_curr = ((void*)0);
   FUNC_3(VAR_11->bus);


   FUNC_4(VAR_11->ifaces, VAR_0);
   VAR_11->ifaces = ((void*)0);


   FUNC_4(VAR_11->endpoints, VAR_0);
   VAR_11->endpoints = ((void*)0);

   VAR_11->ifaces_max = 0;
  }
 }
 return (VAR_19);
}
