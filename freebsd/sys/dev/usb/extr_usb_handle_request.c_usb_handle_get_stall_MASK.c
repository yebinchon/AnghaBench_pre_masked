
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_endpoint {int is_stalled; } ;
struct usb_device {int bus; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct usb_endpoint* FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static uint8_t
FUNC_3(struct usb_device *VAR_0, uint8_t VAR_1)
{
 struct usb_endpoint *VAR_2;
 uint8_t VAR_3;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0)) {

  return (0);
 }
 FUNC_0(VAR_0->bus);
 VAR_3 = VAR_2->is_stalled;
 FUNC_1(VAR_0->bus);

 return (VAR_3);
}
