
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
struct usb_port_status {int wPortStatus; } ;
struct usb_device {scalar_t__ refcount; int ref_cv; } ;
struct usb_bus {struct usb_device** devices; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct usb_bus* FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct usb_device*) ;
 int FUNC_8 (struct usb_device*) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (struct usb_device*,int *,int,int ) ;
 scalar_t__ FUNC_11 (struct usb_device*,int *,struct usb_port_status*,int) ;
 scalar_t__ FUNC_12 (struct usb_device*,int *,int,int ) ;

__attribute__((used)) static void
FUNC_13(int VAR_6)
{
 struct usb_port_status VAR_7;
 struct usb_bus *VAR_8;
 struct usb_device *VAR_9;
 usb_error_t VAR_10;
 int VAR_11, VAR_12;

 VAR_12 = FUNC_3(VAR_4);
 while (VAR_12 >= 0) {
  FUNC_5(&VAR_5);
  VAR_8 = FUNC_4(VAR_4, VAR_12);
  VAR_12--;

  if (VAR_8 == ((void*)0) || VAR_8->devices == ((void*)0) ||
      VAR_8->devices[VAR_3] == ((void*)0)) {
   FUNC_6(&VAR_5);
   continue;
  }

  VAR_9 = VAR_8->devices[VAR_3];

  if (VAR_9->refcount == VAR_2) {
   FUNC_6(&VAR_5);
   continue;
  }

  VAR_9->refcount++;
  FUNC_6(&VAR_5);

  VAR_11 = FUNC_7(VAR_9);
  if (VAR_11 > 1) {
   VAR_11 = 0;
   goto next;
  }

  VAR_10 = FUNC_11(VAR_9, ((void*)0), &VAR_7, 1);
  if (VAR_10 != 0) {
   FUNC_0("usbd_req_get_port_status() "
       "failed: %s\n", FUNC_9(VAR_10));
   goto next;
  }

  if ((FUNC_1(VAR_7.wPortStatus) & VAR_1) == 0)
   goto next;

  if (VAR_6) {
   VAR_10 = FUNC_12(VAR_9, ((void*)0), 1,
       VAR_0);
   if (VAR_10 != 0) {
    FUNC_0("usbd_req_set_port_feature() "
        "failed: %s\n", FUNC_9(VAR_10));
   }
  } else {
   VAR_10 = FUNC_10(VAR_9, ((void*)0), 1,
       VAR_0);
   if (VAR_10 != 0) {
    FUNC_0("usbd_req_clear_port_feature() "
        "failed: %s\n", FUNC_9(VAR_10));
   }
  }

next:
  FUNC_5(&VAR_5);
  if (VAR_11)
   FUNC_8(VAR_9);
  if (--(VAR_9->refcount) == 0)
   FUNC_2(&VAR_9->ref_cv);
  FUNC_6(&VAR_5);
 }
}
