
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct libusb_transfer {int type; unsigned int timeout; int length; int actual_length; int status; int callback; void* user_data; int * buffer; int endpoint; int * dev_handle; } ;
typedef int libusb_device_handle ;
typedef int libusb_context ;
struct TYPE_2__ {int * ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int VAR_7 ;
 struct libusb_transfer* FUNC_0 (int ) ;
 int FUNC_1 (struct libusb_transfer*) ;
 int FUNC_2 (struct libusb_transfer*) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct libusb_transfer*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(libusb_device_handle *VAR_8,
    uint8_t VAR_9, uint8_t *VAR_10, int VAR_11,
    int *VAR_12, unsigned int VAR_13, int VAR_14)
{
 libusb_context *VAR_15;
 struct libusb_transfer *VAR_16;
 int VAR_17;
 int VAR_18;

 if (VAR_8 == ((void*)0))
  return (VAR_0);

 if ((VAR_11 != 0) && (VAR_10 == ((void*)0)))
  return (VAR_0);

 VAR_16 = FUNC_0(0);
 if (VAR_16 == ((void*)0))
  return (VAR_2);

 VAR_15 = FUNC_3(VAR_8)->ctx;

 VAR_16->dev_handle = VAR_8;
 VAR_16->endpoint = VAR_9;
 VAR_16->type = VAR_14;
 VAR_16->timeout = VAR_13;
 VAR_16->buffer = VAR_10;
 VAR_16->length = VAR_11;
 VAR_16->user_data = (void *)&VAR_17;
 VAR_16->callback = VAR_7;
 VAR_17 = 0;

 if ((VAR_18 = FUNC_5(VAR_16)) < 0) {
  FUNC_2(VAR_16);
  return (VAR_18);
 }
 while (VAR_17 == 0) {
  if ((VAR_18 = FUNC_4(VAR_15)) < 0) {
   FUNC_1(VAR_16);
   FUNC_6(1000);
  }
 }

 *VAR_12 = VAR_16->actual_length;

 switch (VAR_16->status) {
 case 132:
  VAR_18 = 0;
  break;
 case 128:
  VAR_18 = VAR_6;
  break;
 case 130:
  VAR_18 = VAR_4;
  break;
 case 129:
  VAR_18 = VAR_5;
  break;
 case 131:
  VAR_18 = VAR_1;
  break;
 default:
  VAR_18 = VAR_3;
  break;
 }

 FUNC_2(VAR_16);
 return (VAR_18);
}
