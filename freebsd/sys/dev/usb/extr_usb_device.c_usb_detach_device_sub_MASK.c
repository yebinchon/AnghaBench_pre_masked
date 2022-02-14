
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ peer_suspended; } ;
struct usb_device {int parent_dev; TYPE_1__ flags; int address; int port_no; } ;
typedef int * device_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_7(struct usb_device *VAR_2, device_t *VAR_3,
    char **VAR_4, uint8_t VAR_5)
{
 device_t VAR_6;
 char *VAR_7;
 int VAR_8;

 VAR_6 = *VAR_3;
 if (VAR_6) {





  *VAR_3 = ((void*)0);

  if (!VAR_1) {
   FUNC_4(VAR_6, "at %s, port %d, addr %d "
       "(disconnected)\n",
       FUNC_2(VAR_2->parent_dev),
       VAR_2->port_no, VAR_2->address);
  }

  if (FUNC_3(VAR_6)) {
   if (VAR_2->flags.peer_suspended) {
    VAR_8 = FUNC_0(VAR_6);
    if (VAR_8) {
     FUNC_4(VAR_6, "Resume failed\n");
    }
   }
  }

  if (FUNC_1(VAR_2->parent_dev, VAR_6)) {
   goto error;
  }
 }

 VAR_7 = *VAR_4;
 if (VAR_7 != ((void*)0)) {
  *VAR_4 = ((void*)0);
  FUNC_5(VAR_7, VAR_0);
 }
 return;

error:

 FUNC_6("usb_detach_device_sub: A USB driver would not detach\n");
}
