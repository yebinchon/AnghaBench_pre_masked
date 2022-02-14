
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ idVendor; scalar_t__ idProduct; } ;
struct usb_attach_arg {TYPE_1__ info; int device; struct drvdb_ent* driver_ivar; } ;
struct ndisusb_softc {int dummy; } ;
struct ndis_usb_type {scalar_t__ ndis_vid; scalar_t__ ndis_did; int * ndis_name; } ;
struct ndis_softc {int ndis_devidx; int ndisusb_dev; int ndis_iftype; int ndis_regvals; int ndis_dobj; int ndisusb_mtx; int ndis_dev; } ;
struct drvdb_ent {struct ndis_usb_type* windrv_devlist; int windrv_regvals; int windrv_object; } ;
typedef int driver_object ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct usb_attach_arg* FUNC_0 (int ) ;
 struct ndisusb_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int ,char*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_4)
{
 const struct drvdb_ent *VAR_5;
 struct ndisusb_softc *VAR_6 = FUNC_1(VAR_4);
 struct usb_attach_arg *VAR_7 = FUNC_0(VAR_4);
 struct ndis_softc *VAR_8;
 struct ndis_usb_type *VAR_9;
 driver_object *VAR_10;
 int VAR_11 = 0;

 FUNC_2(VAR_4);
 VAR_5 = VAR_7->driver_ivar;
 VAR_8 = (struct ndis_softc *)VAR_6;
 VAR_8->ndis_dev = VAR_4;
 FUNC_3(&VAR_8->ndisusb_mtx, "NDIS USB", VAR_2, VAR_1);
 VAR_8->ndis_dobj = VAR_5->windrv_object;
 VAR_8->ndis_regvals = VAR_5->windrv_regvals;
 VAR_8->ndis_iftype = VAR_3;
 VAR_8->ndisusb_dev = VAR_7->device;



 VAR_10 = FUNC_6(0, "USB Bus");
 FUNC_5(VAR_10, VAR_4);



 VAR_9 = VAR_5->windrv_devlist;

 while (VAR_9->ndis_name != ((void*)0)) {
  if ((VAR_7->info.idVendor == VAR_9->ndis_vid) &&
      (VAR_7->info.idProduct == VAR_9->ndis_did)) {
   VAR_8->ndis_devidx = VAR_11;
   break;
  }
  VAR_9++;
  VAR_11++;
 }

 if (FUNC_4(VAR_4) != 0)
  return (VAR_0);

 return (0);
}
