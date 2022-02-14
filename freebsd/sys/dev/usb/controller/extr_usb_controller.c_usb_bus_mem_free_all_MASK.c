
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* usb_bus_mem_cb_t ) (struct usb_bus*,int *) ;
struct usb_bus {int bus_spin_lock; int bus_mtx; int dma_parent_tag; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct usb_bus *VAR_1, usb_bus_mem_cb_t *VAR_2)
{







 FUNC_0(&VAR_1->bus_mtx);
 FUNC_0(&VAR_1->bus_spin_lock);
}
