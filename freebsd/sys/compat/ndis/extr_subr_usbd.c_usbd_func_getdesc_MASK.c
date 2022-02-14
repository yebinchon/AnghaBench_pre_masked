
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
struct TYPE_10__ {scalar_t__ bDescriptorType; int wTotalLength; } ;
typedef TYPE_2__ usb_config_descriptor_t ;
struct usbd_urb_control_descriptor_request {scalar_t__ ucd_desctype; void* ucd_trans_buflen; int ucd_idx; int ucd_langid; int ucd_trans_buf; } ;
union usbd_urb {struct usbd_urb_control_descriptor_request uu_ctldesc; } ;
typedef void* uint32_t ;
typedef void* uint16_t ;
struct ndis_softc {int ndisusb_mtx; int ndisusb_dev; } ;
struct TYPE_9__ {void* isb_info; } ;
struct TYPE_11__ {TYPE_1__ irp_iostat; } ;
typedef TYPE_3__ irp ;
typedef int int32_t ;
typedef int device_t ;


 int FUNC_0 (TYPE_3__*) ;
 void* FUNC_1 (int ,void*) ;
 int VAR_0 ;
 int FUNC_2 (struct ndis_softc*) ;
 int FUNC_3 (struct ndis_softc*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct ndis_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,scalar_t__) ;
 int FUNC_7 (int ,TYPE_2__*,void*) ;
 TYPE_2__* FUNC_8 (int ) ;
 union usbd_urb* FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (int ,int *,void**,int ,int,void*,int ,scalar_t__,int ,int ) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static int32_t
FUNC_12(irp *VAR_5)
{

 device_t VAR_6 = FUNC_0(VAR_5);
 struct ndis_softc *VAR_7 = FUNC_5(VAR_6);
 struct usbd_urb_control_descriptor_request *VAR_8;
 uint16_t VAR_9;
 uint32_t VAR_10;
 union usbd_urb *VAR_11;
 usb_config_descriptor_t *VAR_12;
 usb_error_t VAR_13;

 VAR_11 = FUNC_9(VAR_5);
 VAR_8 = &VAR_11->uu_ctldesc;
 if (VAR_8->ucd_desctype == VAR_1) {




  VAR_12 = FUNC_8(VAR_7->ndisusb_dev);
  if (VAR_12 == ((void*)0)) {
   VAR_13 = VAR_3;
   goto exit;
  }
  if (VAR_12->bDescriptorType != VAR_1) {
   FUNC_6(VAR_6, "bad desc %d\n",
       VAR_12->bDescriptorType);
   VAR_13 = VAR_3;
   goto exit;
  }

  VAR_10 = FUNC_1(FUNC_4(VAR_12->wTotalLength), VAR_8->ucd_trans_buflen);

  FUNC_7(VAR_8->ucd_trans_buf, VAR_12, VAR_10);

  VAR_9 = VAR_10;
  VAR_13 = VAR_4;
 } else {
  FUNC_2(VAR_7);
  VAR_13 = FUNC_10(VAR_7->ndisusb_dev, &VAR_7->ndisusb_mtx,
      &VAR_9, VAR_8->ucd_trans_buf, 2,
      VAR_8->ucd_trans_buflen, VAR_8->ucd_langid,
      VAR_8->ucd_desctype, VAR_8->ucd_idx,
      3);
  FUNC_3(VAR_7);
 }
exit:
 if (VAR_13 != VAR_4) {
  VAR_8->ucd_trans_buflen = 0;
  return FUNC_11(VAR_13);
 }

 VAR_8->ucd_trans_buflen = VAR_9;
 VAR_5->irp_iostat.isb_info = VAR_9;

 return (VAR_2);

}
