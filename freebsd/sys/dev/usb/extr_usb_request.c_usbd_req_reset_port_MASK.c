
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct usb_port_status {int wPortChange; int wPortStatus; } ;
struct usb_device {int dummy; } ;
struct mtx {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct mtx*,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (struct usb_device*,struct mtx*,int ,int ) ;
 scalar_t__ FUNC_7 (struct usb_device*,struct mtx*,struct usb_port_status*,int ) ;
 scalar_t__ FUNC_8 (struct usb_device*,struct mtx*,int ,int ) ;

usb_error_t
FUNC_9(struct usb_device *VAR_8, struct mtx *VAR_9, uint8_t VAR_10)
{
 struct usb_port_status VAR_11;
 usb_error_t VAR_12;
 uint16_t VAR_13;
 uint16_t VAR_14;
 uint16_t VAR_15;

 FUNC_0("\n");


 FUNC_6(
     VAR_8, VAR_9, VAR_10, VAR_0);


 VAR_12 = FUNC_8(
     VAR_8, VAR_9, VAR_10, VAR_1);


 if (VAR_12)
  goto done;
 VAR_13 = 0;
 while (1) {

  FUNC_4(VAR_9, FUNC_3(VAR_6));
  VAR_13 += VAR_6;
  VAR_12 = FUNC_7(VAR_8, VAR_9, &VAR_11, VAR_10);
  if (VAR_12)
   goto done;

  VAR_14 = FUNC_2(VAR_11.wPortStatus);
  VAR_15 = FUNC_2(VAR_11.wPortChange);


  if (!(VAR_14 & VAR_2))
   goto done;


  if (VAR_15 & VAR_3)
   break;






  if (!(VAR_14 & VAR_4))
   break;


  if (VAR_13 > 1000) {
   VAR_13 = 0;
   break;
  }
 }


 VAR_12 = FUNC_6(
     VAR_8, VAR_9, VAR_10, VAR_0);
 if (VAR_12)
  goto done;


 if (VAR_13 == 0) {
  VAR_12 = VAR_5;
  goto done;
 }

 FUNC_4(VAR_9, FUNC_3(VAR_7));

done:
 FUNC_1(2, "port %d reset returning error=%s\n",
     VAR_10, FUNC_5(VAR_12));
 return (VAR_12);
}
