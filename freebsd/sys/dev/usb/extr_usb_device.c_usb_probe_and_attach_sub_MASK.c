
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_interface {scalar_t__ parent_iface_index; int * subdev; } ;
struct TYPE_2__ {scalar_t__ peer_suspended; } ;
struct usb_device {TYPE_1__ flags; int * parent_dev; } ;
struct usb_attach_arg {int * temp_dev; struct usb_interface* iface; } ;
typedef int * device_t ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int * FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct usb_attach_arg*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static uint8_t
FUNC_9(struct usb_device *VAR_1,
    struct usb_attach_arg *VAR_2)
{
 struct usb_interface *VAR_3;
 device_t VAR_4;
 int VAR_5;

 VAR_3 = VAR_2->iface;
 if (VAR_3->parent_iface_index != VAR_0) {

  return (0);
 }
 VAR_4 = VAR_3->subdev;
 if (VAR_4) {



  if (FUNC_3(VAR_4)) {

   return (0);
  }


  VAR_3->subdev = ((void*)0);

  if (FUNC_2(VAR_1->parent_dev, VAR_4)) {






   FUNC_8("device_delete_child() failed\n");
  }
 }
 if (VAR_2->temp_dev == ((void*)0)) {


  VAR_2->temp_dev = FUNC_1(VAR_1->parent_dev, ((void*)0), -1);
  if (VAR_2->temp_dev == ((void*)0)) {
   FUNC_4(VAR_1->parent_dev,
       "Device creation failed\n");
   return (1);
  }
  FUNC_7(VAR_2->temp_dev, VAR_2);
  FUNC_6(VAR_2->temp_dev);
 }




 VAR_3->subdev = VAR_2->temp_dev;

 if (FUNC_5(VAR_3->subdev) == 0) {




  VAR_2->temp_dev = ((void*)0);
  FUNC_7(VAR_3->subdev, ((void*)0));

  if (VAR_1->flags.peer_suspended) {
   VAR_5 = FUNC_0(VAR_3->subdev);
   if (VAR_5)
    FUNC_4(VAR_3->subdev, "Suspend failed\n");
  }
  return (0);
 } else {

  VAR_3->subdev = ((void*)0);
 }
 return (1);
}
