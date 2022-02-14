
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int usb_error_t ;
typedef size_t uint16_t ;
struct usb_page_search {TYPE_2__* buffer; } ;
struct TYPE_14__ {int usbrev; int bus_mtx; int * methods; } ;
struct TYPE_10__ {int hcca_pc; int * intr_start_pc; int isoc_start_pc; int bulk_start_pc; int ctrl_start_pc; } ;
struct TYPE_12__ {TYPE_5__ sc_bus; TYPE_4__* sc_isoc_p_last; TYPE_4__** sc_intr_p_last; int sc_tmo_rhsc; TYPE_2__* sc_hcca_p; TYPE_1__ sc_hw; void* sc_bulk_p_last; void* sc_ctrl_p_last; int sc_eintrs; } ;
typedef TYPE_3__ ohci_softc_t ;
struct TYPE_13__ {int ed_self; int ed_next; struct TYPE_13__* next; } ;
typedef TYPE_4__ ohci_ed_t ;
struct TYPE_11__ {int * hcca_interrupt_table; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_4__*) ;
 void* FUNC_4 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (TYPE_5__*,int *) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int *,int ,struct usb_page_search*) ;

usb_error_t
FUNC_9(ohci_softc_t *VAR_9)
{
 struct usb_page_search VAR_10;
 uint16_t VAR_11;
 uint16_t VAR_12;
 uint16_t VAR_13;
 uint16_t VAR_14;

 FUNC_0("start\n");

 VAR_9->sc_eintrs = VAR_0;





 VAR_9->sc_ctrl_p_last =
     FUNC_4(&VAR_9->sc_hw.ctrl_start_pc);

 VAR_9->sc_bulk_p_last =
     FUNC_4(&VAR_9->sc_hw.bulk_start_pc);

 VAR_9->sc_isoc_p_last =
     FUNC_4(&VAR_9->sc_hw.isoc_start_pc);

 for (VAR_11 = 0; VAR_11 != VAR_1; VAR_11++) {
  VAR_9->sc_intr_p_last[VAR_11] =
      FUNC_4(VAR_9->sc_hw.intr_start_pc + VAR_11);
 }





 VAR_12 = VAR_1 / 2;
 while (VAR_12) {
  VAR_13 = VAR_12;
  while (VAR_13 & VAR_12) {
   ohci_ed_t *VAR_15;
   ohci_ed_t *VAR_16;

   VAR_14 = (VAR_13 ^ VAR_12) | (VAR_12 / 2);




   VAR_15 = VAR_9->sc_intr_p_last[VAR_13];
   VAR_16 = VAR_9->sc_intr_p_last[VAR_14];

   VAR_15->next = ((void*)0);
   VAR_15->ed_next = VAR_16->ed_self;

   VAR_13++;
  }
  VAR_12 >>= 1;
 }

 if (1) {

  ohci_ed_t *VAR_17;
  ohci_ed_t *VAR_18;

  VAR_17 = VAR_9->sc_intr_p_last[0];
  VAR_18 = VAR_9->sc_isoc_p_last;


  VAR_17->next = VAR_18;
  VAR_17->ed_next = VAR_18->ed_self;
 }
 FUNC_8(&VAR_9->sc_hw.hcca_pc, 0, &VAR_10);

 VAR_9->sc_hcca_p = VAR_10.buffer;





 for (VAR_11 = 0; VAR_11 != VAR_2; VAR_11++) {
  VAR_9->sc_hcca_p->hcca_interrupt_table[VAR_11] =
      VAR_9->sc_intr_p_last[VAR_11 | (VAR_1 / 2)]->ed_self;
 }


 FUNC_6(&VAR_9->sc_bus, &VAR_7);


 VAR_9->sc_bus.methods = &VAR_6;

 FUNC_7(&VAR_9->sc_tmo_rhsc, &VAR_9->sc_bus.bus_mtx, 0);
 VAR_9->sc_bus.usbrev = VAR_5;

 if (FUNC_1(VAR_9, 0) != 0)
  return (VAR_3);


 FUNC_2(&VAR_9->sc_bus);
 return (VAR_4);
}
