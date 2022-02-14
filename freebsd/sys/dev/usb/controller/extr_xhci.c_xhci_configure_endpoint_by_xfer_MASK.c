
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t usb_stream_t ;
typedef int usb_error_t ;
typedef scalar_t__ uint64_t ;
struct xhci_trb {int dummy; } ;
struct xhci_endpoint_ext {int page_cache; TYPE_1__* trb; scalar_t__ physaddr; } ;
struct usb_xfer {TYPE_3__* endpoint; int max_frame_size; int max_packet_size; int max_packet_count; int interval; TYPE_2__* xroot; } ;
struct usb_endpoint_ss_comp_descriptor {int bmAttributes; } ;
struct TYPE_6__ {int ep_mode; int edesc; struct usb_endpoint_ss_comp_descriptor* ecomp; } ;
struct TYPE_5__ {int udev; } ;
struct TYPE_4__ {scalar_t__ dwTrb3; scalar_t__ dwTrb2; int qwTrb0; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_xfer*) ;
 int FUNC_4 (int ,int ,struct xhci_endpoint_ext*,int ,int ,int,int ,int ,int ,int ) ;
 struct xhci_endpoint_ext* FUNC_5 (int ,int ) ;

__attribute__((used)) static usb_error_t
FUNC_6(struct usb_xfer *VAR_3)
{
 struct xhci_endpoint_ext *VAR_4;
 struct usb_endpoint_ss_comp_descriptor *VAR_5;
 usb_stream_t VAR_6;

 VAR_4 = FUNC_5(VAR_3->xroot->udev,
     VAR_3->endpoint->edesc);

 VAR_5 = VAR_3->endpoint->ecomp;

 for (VAR_6 = 0; VAR_6 != VAR_0; VAR_6++) {
  uint64_t VAR_7;


  VAR_4->trb[VAR_6 * VAR_1].dwTrb3 = 0;


  VAR_7 = VAR_4->physaddr +
      (VAR_6 * VAR_1 * sizeof(struct xhci_trb)) +
      VAR_2;


  VAR_4->trb[(VAR_1 *
      VAR_0) + VAR_6].qwTrb0 = FUNC_1(VAR_7);


  VAR_4->trb[(VAR_1 *
                    VAR_0) + VAR_6].dwTrb2 = 0;
  VAR_4->trb[(VAR_1 *
      VAR_0) + VAR_6].dwTrb3 = 0;
 }
 FUNC_2(VAR_4->page_cache);

 return (FUNC_4(VAR_3->xroot->udev,
     VAR_3->endpoint->edesc, VAR_4,
     VAR_3->interval, VAR_3->max_packet_count,
     (VAR_5 != ((void*)0)) ? FUNC_0(VAR_5->bmAttributes) + 1 : 1,
     FUNC_3(VAR_3), VAR_3->max_packet_size,
     VAR_3->max_frame_size, VAR_3->endpoint->ep_mode));
}
