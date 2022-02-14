
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ usb_timeout_t ;
typedef scalar_t__ uint8_t ;
struct usb_xfer_root {int memory_base; int cv_drain; int dma_parent_tag; struct usb_page_cache* xfer_page_cache_end; struct usb_page_cache* xfer_page_cache_start; struct usb_page_cache* dma_page_cache_end; struct usb_page_cache* dma_page_cache_start; TYPE_1__* bus; int * done_m; int done_p; int udev; } ;
struct usb_page_cache {int dummy; } ;
struct TYPE_3__ {int bus_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct usb_page_cache*) ;
 int FUNC_8 (struct usb_page_cache*) ;
 int FUNC_9 (int ,int *,int *) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(struct usb_xfer_root *VAR_2, uint8_t VAR_3)
{




 FUNC_0(VAR_2->bus, VAR_0);



 if (VAR_3) {
  usb_timeout_t VAR_4;
  VAR_4 = FUNC_10(VAR_2->udev);
  if (VAR_4 != 0) {
   FUNC_6(&VAR_2->bus->bus_mtx,
       FUNC_2(VAR_4));
  }
 }


 FUNC_9(VAR_2->done_p, &VAR_2->done_m[0], &VAR_2->done_m[1]);

 FUNC_1(VAR_2->bus);
 FUNC_3(&VAR_2->cv_drain);





 FUNC_4(VAR_2->memory_base, VAR_1);
}
