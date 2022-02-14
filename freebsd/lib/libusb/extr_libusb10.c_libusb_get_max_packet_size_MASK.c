
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct libusb_interface_descriptor {int bNumEndpoints; struct libusb_endpoint_descriptor* endpoint; } ;
struct libusb_interface {int num_altsetting; struct libusb_interface_descriptor* altsetting; } ;
struct libusb_endpoint_descriptor {scalar_t__ bEndpointAddress; int wMaxPacketSize; } ;
struct libusb_config_descriptor {int bNumInterfaces; struct libusb_interface* interface; } ;
typedef int libusb_device ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct libusb_config_descriptor*) ;
 int FUNC_1 (int *,struct libusb_config_descriptor**) ;

int
FUNC_2(libusb_device *VAR_2, uint8_t VAR_3)
{
 struct libusb_config_descriptor *VAR_4;
 struct libusb_interface *VAR_5;
 struct libusb_interface_descriptor *VAR_6;
 struct libusb_endpoint_descriptor *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 if (VAR_2 == ((void*)0))
  return (VAR_1);

 VAR_11 = FUNC_1(VAR_2, &VAR_4);
 if (VAR_11 < 0)
  return (VAR_11);

 VAR_11 = VAR_0;
 for (VAR_8 = 0; VAR_8 < VAR_4->bNumInterfaces; VAR_8++) {
  VAR_5 = &VAR_4->interface[VAR_8];
  for (VAR_9 = 0; VAR_9 < VAR_5->num_altsetting; VAR_9++) {
   VAR_6 = &VAR_5->altsetting[VAR_9];
   for (VAR_10 = 0; VAR_10 < VAR_6->bNumEndpoints; VAR_10++) {
    VAR_7 = &VAR_6->endpoint[VAR_10];
    if (VAR_7->bEndpointAddress == VAR_3) {
     VAR_11 = VAR_7->wMaxPacketSize;
     goto out;
    }
   }
  }
 }

out:
 FUNC_0(VAR_4);
 return (VAR_11);
}
