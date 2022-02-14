
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {struct usb_device* parent_hub; TYPE_1__* bus; } ;
typedef int phandle_t ;
typedef int device_t ;
struct TYPE_2__ {int parent; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int,struct usb_device*) ;
 int FUNC_2 (struct usb_device**) ;
 int FUNC_3 (int ) ;

phandle_t
FUNC_4(device_t VAR_1, struct usb_device *VAR_2)
{
 struct usb_device *VAR_3;
 struct usb_device *VAR_4[VAR_0];
 phandle_t VAR_5, VAR_6;
 int VAR_7;






 if ((VAR_5 = FUNC_3(VAR_2->bus->parent)) == -1)
  return (-1);







 for (VAR_3 = VAR_2, VAR_7 = 0; VAR_3->parent_hub != ((void*)0); VAR_3 = VAR_3->parent_hub) {
  FUNC_0(VAR_7 < FUNC_2(VAR_4), ("Too many hubs"));
  VAR_4[VAR_7++] = VAR_3;
 }
 for (VAR_6 = VAR_5;;) {
  VAR_6 = FUNC_1(VAR_6, VAR_4[--VAR_7]);
  if (VAR_7 == 0 || VAR_6 == -1)
   break;
 }
 return (VAR_6);
}
