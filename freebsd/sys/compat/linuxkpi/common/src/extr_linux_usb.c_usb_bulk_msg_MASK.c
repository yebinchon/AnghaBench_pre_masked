
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_timeout_t ;
typedef int uint16_t ;
struct usb_host_endpoint {int dummy; } ;
struct usb_device {int dummy; } ;
struct urb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct urb* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct urb*,struct usb_device*,struct usb_host_endpoint*,void*,int,int ,int *) ;
 int FUNC_2 (struct urb*) ;
 int VAR_2 ;
 int FUNC_3 (struct usb_device*,struct usb_host_endpoint*,int) ;
 int FUNC_4 (struct urb*,int ,int *) ;

int
FUNC_5(struct usb_device *VAR_3, struct usb_host_endpoint *VAR_4,
    void *VAR_5, int VAR_6, uint16_t *VAR_7, usb_timeout_t VAR_8)
{
 struct urb *VAR_9;
 int VAR_10;

 if (VAR_4 == ((void*)0))
  return (-VAR_0);
 if (VAR_6 < 0)
  return (-VAR_0);

 VAR_10 = FUNC_3(VAR_3, VAR_4, 4096 );
 if (VAR_10)
  return (VAR_10);

 VAR_9 = FUNC_0(0, 0);
 if (VAR_9 == ((void*)0))
  return (-VAR_1);

 FUNC_1(VAR_9, VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_2, ((void*)0));

 VAR_10 = FUNC_4(VAR_9, VAR_8, VAR_7);

 FUNC_2(VAR_9);

 return (VAR_10);
}
