
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef scalar_t__ uint16_t ;
struct LIBUSB20_CONTROL_SETUP_DECODED {scalar_t__ wLength; scalar_t__ wIndex; scalar_t__ wValue; void* bRequest; void* bmRequestType; } ;
typedef int libusb_device_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct LIBUSB20_CONTROL_SETUP_DECODED*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,struct LIBUSB20_CONTROL_SETUP_DECODED*,void**,scalar_t__*,unsigned int,int ) ;

int
FUNC_2(libusb_device_handle *VAR_7,
    uint8_t VAR_8, uint8_t VAR_9, uint16_t VAR_10, uint16_t VAR_11,
    uint8_t *VAR_12, uint16_t VAR_13, unsigned int VAR_14)
{
 struct LIBUSB20_CONTROL_SETUP_DECODED VAR_15;
 int VAR_16;
 uint16_t VAR_17;

 if (VAR_7 == ((void*)0))
  return (VAR_3);

 if ((VAR_13 != 0) && (VAR_12 == ((void*)0)))
  return (VAR_3);

 FUNC_0(VAR_0, &VAR_15);

 VAR_15.bmRequestType = VAR_8;
 VAR_15.bRequest = VAR_9;
 VAR_15.wValue = VAR_10;
 VAR_15.wIndex = VAR_11;
 VAR_15.wLength = VAR_13;

 VAR_16 = FUNC_1(VAR_7, &VAR_15, VAR_12,
     &VAR_17, VAR_14, 0);

 if (VAR_16 == VAR_1)
  return (VAR_5);
 else if (VAR_16 == VAR_2)
  return (VAR_6);
 else if (VAR_16)
  return (VAR_4);

 return (VAR_17);
}
