
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ idVendor; scalar_t__ idProduct; } ;
struct usb_attach_arg {TYPE_1__ info; } ;
struct ndis_usb_type {scalar_t__ ndis_vid; scalar_t__ ndis_did; int * ndis_name; } ;
typedef scalar_t__ interface_type ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct usb_attach_arg* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int
FUNC_2(interface_type VAR_3, struct ndis_usb_type *VAR_4, device_t VAR_5)
{
 struct usb_attach_arg *VAR_6;

 if (VAR_3 != VAR_1)
  return (VAR_0);

 VAR_6 = FUNC_0(VAR_5);

 while (VAR_4->ndis_name != ((void*)0)) {
  if ((VAR_6->info.idVendor == VAR_4->ndis_vid) &&
      (VAR_6->info.idProduct == VAR_4->ndis_did)) {
   FUNC_1(VAR_5, VAR_4->ndis_name);
   return (VAR_2);
  }
  VAR_4++;
 }

 return (VAR_0);
}
