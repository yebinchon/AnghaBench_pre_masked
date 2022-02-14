
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct usb_device_request {int wLength; int wIndex; int wValue; int bRequest; int bmRequestType; } ;
struct usb_device {int dummy; } ;
struct mtx {int dummy; } ;


 int FUNC_0 (int,char*,int,int,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (void*,int ,int) ;
 int FUNC_4 (struct mtx*,int) ;
 scalar_t__ FUNC_5 (struct usb_device*,struct mtx*,struct usb_device_request*,void*,int ,int *,int) ;

usb_error_t
FUNC_6(struct usb_device *VAR_6,
    struct mtx *VAR_7, uint16_t *VAR_8, void *VAR_9,
    uint16_t VAR_10, uint16_t VAR_11,
    uint16_t VAR_12, uint8_t VAR_13, uint8_t VAR_14,
    uint8_t VAR_15)
{
 struct usb_device_request VAR_16;
 uint8_t *VAR_17 = VAR_9;
 usb_error_t VAR_18;

 FUNC_0(4, "id=%d, type=%d, index=%d, max_len=%d\n",
     VAR_12, VAR_13, VAR_14, VAR_11);

 VAR_16.bmRequestType = VAR_4;
 VAR_16.bRequest = VAR_0;
 FUNC_2(VAR_16.wValue, VAR_13, VAR_14);
 FUNC_1(VAR_16.wIndex, VAR_12);

 while (1) {

  if ((VAR_10 < 2) || (VAR_11 < 2)) {
   VAR_18 = VAR_1;
   goto done;
  }
  FUNC_1(VAR_16.wLength, VAR_10);

  VAR_18 = FUNC_5(VAR_6, VAR_7, &VAR_16,
      VAR_9, 0, ((void*)0), 500 );

  if (VAR_18 != 0 && VAR_18 != VAR_2 &&
      VAR_10 != VAR_11) {

   FUNC_3(VAR_9, 0, VAR_11);


   FUNC_1(VAR_16.wLength, VAR_11);

   VAR_18 = FUNC_5(VAR_6, VAR_7, &VAR_16,
       VAR_9, VAR_3, ((void*)0), 500 );

   if (VAR_18 == 0) {

    if (VAR_17[0] > VAR_11)
     VAR_17[0] = VAR_11;
    else if (VAR_17[0] < 2)
     VAR_18 = VAR_1;

    VAR_10 = VAR_17[0];


    VAR_17[1] = VAR_13;
    goto done;
   }
  }

  if (VAR_18) {
   if (!VAR_15) {
    goto done;
   }
   VAR_15--;

   FUNC_4(VAR_7, VAR_5 / 5);

   continue;
  }

  if (VAR_10 == VAR_11) {


   if ((VAR_17[0] > VAR_10) && (VAR_8 == ((void*)0)))
    VAR_17[0] = VAR_10;


   VAR_17[1] = VAR_13;

   goto done;
  }


  if (VAR_11 > VAR_17[0]) {
   VAR_11 = VAR_17[0];
  }


  while (VAR_10 > VAR_11) {
   VAR_10--;
   VAR_17[VAR_10] = 0;
  }



  VAR_10 = VAR_11;
 }
done:
 if (VAR_8 != ((void*)0)) {
  if (VAR_18)
   *VAR_8 = 0;
  else
   *VAR_8 = VAR_10;
 }
 return (VAR_18);
}
