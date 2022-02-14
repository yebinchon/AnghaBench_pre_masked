
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int (* usb_bus_mem_cb_t ) (struct usb_bus*,int *) ;
typedef int uint8_t ;
struct TYPE_2__ {int head; } ;
struct usb_bus {int alloc_failed; scalar_t__ devices_max; int * devices; int dma_bits; int bus_mtx; int dma_tags; int dma_parent_tag; TYPE_1__ intr_q; int power_wdog; int parent; int bus_spin_lock; } ;
typedef int bus_dma_tag_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,char*,int) ;
 int VAR_6 ;
 int FUNC_4 (struct usb_bus*,int (*) (struct usb_bus*,int *)) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int ,int ,int ,int *,int *,int ,int ) ;

uint8_t
FUNC_7(struct usb_bus *VAR_7, bus_dma_tag_t VAR_8,
    usb_bus_mem_cb_t *VAR_9)
{
 VAR_7->alloc_failed = 0;

 FUNC_3(&VAR_7->bus_mtx, FUNC_2(VAR_7->parent),
     "usb_def_mtx", VAR_0 | VAR_1);

 FUNC_3(&VAR_7->bus_spin_lock, FUNC_2(VAR_7->parent),
     "usb_spin_mtx", VAR_2 | VAR_1);

 FUNC_5(&VAR_7->power_wdog,
     &VAR_7->bus_mtx, 0);

 FUNC_1(&VAR_7->intr_q.head);





 if ((VAR_7->devices_max > VAR_4) ||
     (VAR_7->devices_max < VAR_5) ||
     (VAR_7->devices == ((void*)0))) {
  FUNC_0(0, "Devices field has not been "
      "initialised properly\n");
  VAR_7->alloc_failed = 1;
 }





 if (VAR_7->alloc_failed) {
  FUNC_4(VAR_7, VAR_9);
 }
 return (VAR_7->alloc_failed);
}
