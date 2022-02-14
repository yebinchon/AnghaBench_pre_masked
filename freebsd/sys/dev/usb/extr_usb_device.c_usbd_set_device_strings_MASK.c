
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct usb_knowndev {char* vendorname; scalar_t__ vendor; scalar_t__ product; int flags; char* productname; } ;
struct usb_device_descriptor {int iProduct; int iManufacturer; int iSerialNumber; int idProduct; int idVendor; } ;
struct TYPE_2__ {scalar_t__ data; } ;
struct usb_device {int * product; int * manufacturer; struct usb_device_descriptor ddesc; void* serial; TYPE_1__ scratch; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,size_t,char*,scalar_t__) ;
 void* FUNC_2 (char*,int ) ;
 struct usb_knowndev* VAR_2 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct usb_device*) ;
 int FUNC_5 (struct usb_device*) ;
 int FUNC_6 (struct usb_device*,int *,char*,size_t,int ) ;

__attribute__((used)) static void
FUNC_7(struct usb_device *VAR_3)
{
 struct usb_device_descriptor *VAR_4 = &VAR_3->ddesc;



 char *VAR_5;
 size_t VAR_6;
 uint16_t VAR_7;
 uint16_t VAR_8;
 uint8_t VAR_9;


 VAR_9 = FUNC_4(VAR_3);

 VAR_5 = (char *)VAR_3->scratch.data;
 VAR_6 = sizeof(VAR_3->scratch.data);

 VAR_7 = FUNC_0(VAR_4->idVendor);
 VAR_8 = FUNC_0(VAR_4->idProduct);


 FUNC_6(VAR_3, ((void*)0), VAR_5, VAR_6,
     VAR_3->ddesc.iSerialNumber);
 VAR_3->serial = FUNC_2(VAR_5, VAR_0);


 FUNC_6(VAR_3, ((void*)0), VAR_5, VAR_6,
     VAR_3->ddesc.iManufacturer);
 FUNC_3(VAR_5);
 if (VAR_5[0] != '\0')
  VAR_3->manufacturer = FUNC_2(VAR_5, VAR_0);


 FUNC_6(VAR_3, ((void*)0), VAR_5, VAR_6,
     VAR_3->ddesc.iProduct);
 FUNC_3(VAR_5);
 if (VAR_5[0] != '\0')
  VAR_3->product = FUNC_2(VAR_5, VAR_0);
 if (VAR_3->manufacturer == ((void*)0)) {
  FUNC_1(VAR_5, VAR_6, "vendor 0x%04x", VAR_7);
  VAR_3->manufacturer = FUNC_2(VAR_5, VAR_0);
 }
 if (VAR_3->product == ((void*)0)) {
  FUNC_1(VAR_5, VAR_6, "product 0x%04x", VAR_8);
  VAR_3->product = FUNC_2(VAR_5, VAR_0);
 }

 if (VAR_9)
  FUNC_5(VAR_3);
}
