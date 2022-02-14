
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
struct ndisusb_xferdone {int nd_donelist; int nd_status; struct ndisusb_xfer* nd_xfer; } ;
struct ndisusb_xfer {int dummy; } ;
struct ndisusb_ep {int dummy; } ;
struct ndis_softc {int ndisusb_xferdoneitem; int ndisusb_xferdonelock; int ndisusb_xferdonelist; int ndis_dev; } ;
typedef int io_workitem_func ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ,int ,struct ndis_softc*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,char*) ;
 struct ndisusb_xferdone* FUNC_5 (int,int ,int) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_6(struct ndis_softc *VAR_5, struct ndisusb_ep *VAR_6,
    struct ndisusb_xfer *VAR_7, usb_error_t VAR_8)
{
 struct ndisusb_xferdone *VAR_9;
 uint8_t VAR_10;

 VAR_9 = FUNC_5(sizeof(struct ndisusb_xferdone), VAR_1,
     VAR_0 | VAR_2);
 if (VAR_9 == ((void*)0)) {
  FUNC_4(VAR_5->ndis_dev, "out of memory");
  return;
 }
 VAR_9->nd_xfer = VAR_7;
 VAR_9->nd_status = VAR_8;

 FUNC_2(&VAR_5->ndisusb_xferdonelock, &VAR_10);
 FUNC_0((&VAR_5->ndisusb_xferdonelist), (&VAR_9->nd_donelist));
 FUNC_3(&VAR_5->ndisusb_xferdonelock, VAR_10);

 FUNC_1(VAR_5->ndisusb_xferdoneitem,
     (io_workitem_func)VAR_4, VAR_3, VAR_5);
}
