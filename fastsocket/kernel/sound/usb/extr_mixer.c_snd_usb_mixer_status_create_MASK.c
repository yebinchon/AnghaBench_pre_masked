
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_mixer_interface {int urb; TYPE_1__* chip; int hostif; } ;
struct usb_endpoint_descriptor {int bInterval; int wMaxPacketSize; } ;
struct TYPE_4__ {int bNumEndpoints; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_endpoint_descriptor* FUNC_0 (int ,int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct usb_endpoint_descriptor*) ;
 unsigned int FUNC_7 (struct usb_endpoint_descriptor*) ;
 int FUNC_8 (struct usb_endpoint_descriptor*) ;
 int FUNC_9 (int ,int ,int ,void*,int,int ,struct usb_mixer_interface*,int ) ;
 int FUNC_10 (int ,unsigned int) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(struct usb_mixer_interface *VAR_3)
{
 struct usb_endpoint_descriptor *VAR_4;
 void *VAR_5;
 int VAR_6;
 unsigned int VAR_7;


 if (FUNC_1(VAR_3->hostif)->bNumEndpoints < 1)
  return 0;
 VAR_4 = FUNC_0(VAR_3->hostif, 0);
 if (!FUNC_6(VAR_4) || !FUNC_8(VAR_4))
  return 0;

 VAR_7 = FUNC_7(VAR_4);
 VAR_6 = FUNC_4(VAR_4->wMaxPacketSize);
 VAR_5 = FUNC_3(VAR_6, VAR_1);
 if (!VAR_5)
  return -VAR_0;
 VAR_3->urb = FUNC_5(0, VAR_1);
 if (!VAR_3->urb) {
  FUNC_2(VAR_5);
  return -VAR_0;
 }
 FUNC_9(VAR_3->urb, VAR_3->chip->dev,
    FUNC_10(VAR_3->chip->dev, VAR_7),
    VAR_5, VAR_6,
    VAR_2, VAR_3, VAR_4->bInterval);
 FUNC_11(VAR_3->urb, VAR_1);
 return 0;
}
