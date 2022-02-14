
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
 int FUNC_3 (int) ;




 scalar_t__ VAR_4 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct mtx*,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (struct usb_device*,struct mtx*,int ,int ) ;
 scalar_t__ FUNC_8 (struct usb_device*,struct mtx*,struct usb_port_status*,int ) ;
 scalar_t__ FUNC_9 (struct usb_device*,struct mtx*,int ,int ) ;

usb_error_t
FUNC_10(struct usb_device *VAR_7, struct mtx *VAR_8,
    uint8_t VAR_9)
{
 struct usb_port_status VAR_10;
 usb_error_t VAR_11;
 uint16_t VAR_12;
 uint16_t VAR_13;
 uint16_t VAR_14;

 FUNC_0("\n");

 VAR_11 = FUNC_8(VAR_7, VAR_8, &VAR_10, VAR_9);
 if (VAR_11)
  goto done;

 VAR_13 = FUNC_2(VAR_10.wPortStatus);

 switch (FUNC_3(VAR_13)) {
 case 128:
 case 131:
 case 130:
 case 129:
  break;
 default:
  FUNC_0("Wrong state for warm reset\n");
  return (0);
 }


 FUNC_7(VAR_7, VAR_8,
     VAR_9, VAR_1);


 VAR_11 = FUNC_9(VAR_7, VAR_8,
     VAR_9, VAR_0);
 if (VAR_11)
  goto done;

 VAR_12 = 0;
 while (1) {

  FUNC_5(VAR_8, FUNC_4(VAR_5));
  VAR_12 += VAR_5;
  VAR_11 = FUNC_8(VAR_7, VAR_8, &VAR_10, VAR_9);
  if (VAR_11)
   goto done;

  VAR_13 = FUNC_2(VAR_10.wPortStatus);
  VAR_14 = FUNC_2(VAR_10.wPortChange);


  if (!(VAR_13 & VAR_2))
   goto done;


  if (VAR_14 & VAR_3)
   break;


  if (VAR_12 > 1000) {
   VAR_12 = 0;
   break;
  }
 }


 VAR_11 = FUNC_7(
     VAR_7, VAR_8, VAR_9, VAR_1);
 if (VAR_11)
  goto done;


 if (VAR_12 == 0) {
  VAR_11 = VAR_4;
  goto done;
 }

 FUNC_5(VAR_8, FUNC_4(VAR_6));

done:
 FUNC_1(2, "port %d warm reset returning error=%s\n",
     VAR_9, FUNC_6(VAR_11));
 return (VAR_11);
}
