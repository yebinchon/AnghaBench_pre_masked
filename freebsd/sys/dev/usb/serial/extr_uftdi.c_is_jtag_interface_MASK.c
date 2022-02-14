
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device_id {int driver_info; } ;
struct TYPE_2__ {scalar_t__ bIfaceIndex; } ;
struct usb_attach_arg {int device; TYPE_1__ info; } ;
struct jtag_by_name {int jtag_interfaces; int product_name; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct jtag_by_name* VAR_3 ;
 int FUNC_1 (struct jtag_by_name*) ;
 int * FUNC_2 (char const*,int ) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static boolean_t
FUNC_4(struct usb_attach_arg *VAR_4, const struct usb_device_id *VAR_5)
{
 int VAR_6, VAR_7;
 const char * VAR_8;
 const struct jtag_by_name *VAR_9;


 if (VAR_4->info.bIfaceIndex >= VAR_1)
  return (0);
 VAR_7 = FUNC_0(VAR_4->info.bIfaceIndex);






 if ((VAR_5->driver_info & VAR_2) == VAR_0) {
  VAR_8 = FUNC_3(VAR_4->device);
  for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_3); VAR_6++) {
   VAR_9 = &VAR_3[VAR_6];
   if (FUNC_2(VAR_8, VAR_9->product_name) != ((void*)0) &&
       (VAR_9->jtag_interfaces & VAR_7) != 0)
    return (1);
  }
 } else if ((VAR_5->driver_info & VAR_7) != 0)
  return (1);

 return (0);
}
