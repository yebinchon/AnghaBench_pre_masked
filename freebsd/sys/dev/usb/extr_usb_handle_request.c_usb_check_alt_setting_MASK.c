
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef scalar_t__ uint8_t ;
struct usb_interface {int idesc; } ;
struct usb_device {int cdesc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct usb_device*) ;
 int FUNC_1 (struct usb_device*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static usb_error_t
FUNC_3(struct usb_device *VAR_1,
     struct usb_interface *VAR_2, uint8_t VAR_3)
{
 uint8_t VAR_4;
 usb_error_t VAR_5 = 0;


 VAR_4 = FUNC_0(VAR_1);

 if (VAR_3 >= FUNC_2(VAR_1->cdesc, VAR_2->idesc))
  VAR_5 = VAR_0;

 if (VAR_4)
  FUNC_1(VAR_1);

 return (VAR_5);
}
