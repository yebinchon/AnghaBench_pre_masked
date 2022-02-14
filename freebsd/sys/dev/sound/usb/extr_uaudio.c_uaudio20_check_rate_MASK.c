
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct usb_device {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,char*,int ,int ,scalar_t__) ;
 int FUNC_2 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (struct usb_device*,int *,struct usb_device_request*,int *,int ,int*,int ) ;

__attribute__((used)) static usb_error_t
FUNC_8(struct usb_device *VAR_7, uint8_t VAR_8,
    uint8_t VAR_9, uint32_t VAR_10)
{
 struct usb_device_request VAR_11;
 usb_error_t VAR_12;

 uint8_t VAR_13[2 + 32 * 12];
 uint16_t VAR_14;
 uint16_t VAR_15;
 uint16_t VAR_16;

 FUNC_1(6, "ifaceno=%d clockid=%d rate=%u\n",
     VAR_8, VAR_9, VAR_10);

 VAR_11.bmRequestType = VAR_6;
 VAR_11.bRequest = VAR_0;
 FUNC_6(VAR_11.wValue, VAR_1, 0);
 FUNC_6(VAR_11.wIndex, VAR_9, VAR_8);




 FUNC_5(VAR_11.wLength, (2 + 1 * 12));

 VAR_12 = FUNC_7(VAR_7, ((void*)0), &VAR_11, VAR_13,
     VAR_5, &VAR_14, VAR_3);

 if (VAR_12 != 0 || VAR_14 < 2) {





  VAR_15 = FUNC_2(32, (255 - 2) / 12);
  VAR_12 = VAR_4;
 } else {
  VAR_15 = FUNC_4(VAR_13);

  if (VAR_15 > 32) {
   FUNC_0("Too many rates truncating to %d\n", 32);
   VAR_15 = 32;
   VAR_12 = VAR_4;
  } else if (VAR_15 > 1) {
   FUNC_0("Need to read full rate descriptor\n");
   VAR_12 = VAR_4;
  }
 }

 if (VAR_12 != 0) {



  VAR_14 = (2 + VAR_15 * 12);

  FUNC_5(VAR_11.wLength, VAR_14);

         VAR_12 = FUNC_7(VAR_7, ((void*)0), &VAR_11, VAR_13,
      VAR_5, &VAR_14, VAR_3);

  if (VAR_12 != 0 || VAR_14 < 2)
   return (VAR_4);

  VAR_15 = FUNC_4(VAR_13);
 }

 VAR_14 = (VAR_14 - 2) / 12;

 if (VAR_15 > VAR_14) {
  FUNC_0("Too many rates truncating to %d\n", VAR_14);
  VAR_15 = VAR_14;
 }

 for (VAR_16 = 0; VAR_16 != VAR_15; VAR_16++) {
  uint32_t VAR_17 = FUNC_3(VAR_13 + 2 + (12 * VAR_16));
  uint32_t VAR_18 = FUNC_3(VAR_13 + 6 + (12 * VAR_16));
  uint32_t VAR_19 = FUNC_3(VAR_13 + 10 + (12 * VAR_16));

  if (VAR_19 == 0) {
   FUNC_0("Zero residue\n");
   VAR_19 = 1;
  }

  if (VAR_17 > VAR_18) {
   FUNC_0("Swapped max and min\n");
   uint32_t VAR_20;
   VAR_20 = VAR_17;
   VAR_17 = VAR_18;
   VAR_18 = VAR_20;
  }

  if (VAR_10 >= VAR_17 && VAR_10 <= VAR_18 &&
      (((VAR_10 - VAR_17) % VAR_19) == 0)) {
   return (0);
  }
 }
 return (VAR_4);
}
