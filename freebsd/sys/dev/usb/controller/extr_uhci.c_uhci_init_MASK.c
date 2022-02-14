
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int usb_error_t ;
typedef void* uint32_t ;
typedef size_t uint16_t ;
struct TYPE_14__ {void* td_self; void* td_buffer; void* td_token; void* td_status; void* td_next; int * next; } ;
typedef TYPE_2__ uhci_td_t ;
struct TYPE_17__ {int * methods; int bus_mtx; } ;
struct TYPE_13__ {int pframes_pc; int * intr_start_pc; int * isoc_start_pc; int last_td_pc; int last_qh_pc; int bulk_start_pc; int fs_ctl_start_pc; int ls_ctl_start_pc; } ;
struct TYPE_15__ {TYPE_5__ sc_bus; TYPE_2__** sc_isoc_p_last; TYPE_1__ sc_hw; TYPE_2__* sc_last_td_p; TYPE_4__* sc_last_qh_p; TYPE_4__* sc_bulk_p_last; TYPE_4__* sc_fs_ctl_p_last; TYPE_4__* sc_ls_ctl_p_last; TYPE_4__** sc_intr_p_last; TYPE_4__* sc_reclaim_qh_p; int sc_root_intr; } ;
typedef TYPE_3__ uhci_softc_t ;
struct TYPE_16__ {void* qh_e_next; TYPE_2__* e_next; void* qh_h_next; struct TYPE_16__* h_next; void* qh_self; } ;
typedef TYPE_4__ uhci_qh_t ;
struct usb_page_search {void** buffer; } ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 void* FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_3__*) ;
 void* FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 int VAR_6 ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int VAR_7 ;
 int FUNC_10 (TYPE_5__*,int *) ;
 int FUNC_11 (int *,int *,int ) ;
 int FUNC_12 (int *,int ,struct usb_page_search*) ;

usb_error_t
FUNC_13(uhci_softc_t *VAR_8)
{
 uint16_t VAR_9;
 uint16_t VAR_10;
 uint16_t VAR_11;

 FUNC_0("start\n");

 FUNC_11(&VAR_8->sc_root_intr, &VAR_8->sc_bus.bus_mtx, 0);
 VAR_8->sc_ls_ctl_p_last =
     FUNC_6(&VAR_8->sc_hw.ls_ctl_start_pc);

 VAR_8->sc_fs_ctl_p_last =
     FUNC_6(&VAR_8->sc_hw.fs_ctl_start_pc);

 VAR_8->sc_bulk_p_last =
     FUNC_6(&VAR_8->sc_hw.bulk_start_pc);





 VAR_8->sc_reclaim_qh_p =
     VAR_8->sc_bulk_p_last;


 VAR_8->sc_last_qh_p =
     FUNC_6(&VAR_8->sc_hw.last_qh_pc);

 VAR_8->sc_last_td_p =
     FUNC_7(&VAR_8->sc_hw.last_td_pc);

 for (VAR_10 = 0; VAR_10 != VAR_4; VAR_10++) {
  VAR_8->sc_isoc_p_last[VAR_10] =
      FUNC_7(VAR_8->sc_hw.isoc_start_pc + VAR_10);
 }

 for (VAR_10 = 0; VAR_10 != VAR_1; VAR_10++) {
  VAR_8->sc_intr_p_last[VAR_10] =
      FUNC_6(VAR_8->sc_hw.intr_start_pc + VAR_10);
 }





 VAR_9 = VAR_1 / 2;
 while (VAR_9) {
  VAR_10 = VAR_9;
  while (VAR_10 & VAR_9) {
   uhci_qh_t *VAR_12;
   uhci_qh_t *VAR_13;

   VAR_11 = (VAR_10 ^ VAR_9) | (VAR_9 / 2);




   VAR_12 = VAR_8->sc_intr_p_last[VAR_10];
   VAR_13 = VAR_8->sc_intr_p_last[VAR_11];

   VAR_12->h_next = ((void*)0);
   VAR_12->qh_h_next = VAR_13->qh_self;
   VAR_12->e_next = ((void*)0);
   VAR_12->qh_e_next = FUNC_3(VAR_2);
   VAR_10++;
  }
  VAR_9 >>= 1;
 }

 if (1) {
  uhci_qh_t *VAR_14;
  uhci_qh_t *VAR_15;

  VAR_14 = VAR_8->sc_ls_ctl_p_last;
  VAR_15 = VAR_8->sc_intr_p_last[0];


  VAR_15->h_next = VAR_14;
  VAR_15->qh_h_next = VAR_14->qh_self;
  VAR_15->e_next = 0;
  VAR_15->qh_e_next = FUNC_3(VAR_2);
 }
 for (VAR_10 = 0; VAR_10 != VAR_4; VAR_10++) {

  uhci_td_t *VAR_16;
  uhci_qh_t *VAR_17;

  VAR_16 = VAR_8->sc_isoc_p_last[VAR_10];
  VAR_17 = VAR_8->sc_intr_p_last[VAR_10 | (VAR_1 / 2)];


  VAR_16->next = ((void*)0);
  VAR_16->td_next = VAR_17->qh_self;
  VAR_16->td_status = FUNC_3(VAR_3);
  VAR_16->td_token = FUNC_3(0);
  VAR_16->td_buffer = FUNC_3(0);
 }

 if (1) {
  uhci_qh_t *VAR_18;
  uhci_qh_t *VAR_19;

  VAR_18 = VAR_8->sc_ls_ctl_p_last;
  VAR_19 = VAR_8->sc_fs_ctl_p_last;


  VAR_18->h_next = VAR_19;
  VAR_18->qh_h_next = VAR_19->qh_self;
  VAR_18->e_next = 0;
  VAR_18->qh_e_next = FUNC_3(VAR_2);
 }
 if (1) {
  uhci_qh_t *VAR_20;
  uhci_qh_t *VAR_21;
  uhci_qh_t *VAR_22;
  uhci_td_t *VAR_23;

  VAR_20 = VAR_8->sc_fs_ctl_p_last;
  VAR_21 = VAR_8->sc_bulk_p_last;


  VAR_20->h_next = VAR_21;
  VAR_20->qh_h_next = VAR_21->qh_self;
  VAR_20->e_next = 0;
  VAR_20->qh_e_next = FUNC_3(VAR_2);

  VAR_22 = VAR_8->sc_last_qh_p;


  VAR_21->h_next = VAR_22;
  VAR_21->qh_h_next = VAR_22->qh_self;
  VAR_21->e_next = 0;
  VAR_21->qh_e_next = FUNC_3(VAR_2);

  VAR_23 = VAR_8->sc_last_td_p;


  VAR_22->h_next = 0;
  VAR_22->qh_h_next = FUNC_3(VAR_2);
  VAR_22->e_next = VAR_23;
  VAR_22->qh_e_next = VAR_23->td_self;





  VAR_23->next = 0;
  VAR_23->td_next = FUNC_3(VAR_2);
  VAR_23->td_status = FUNC_3(0);
  VAR_23->td_token = FUNC_3(0);
  VAR_23->td_buffer = FUNC_3(0);
 }
 if (1) {
  struct usb_page_search VAR_24;
  uint32_t *VAR_25;

  FUNC_12(&VAR_8->sc_hw.pframes_pc, 0, &VAR_24);

  VAR_25 = VAR_24.buffer;
  for (VAR_10 = 0; VAR_10 != VAR_0; VAR_10++) {
   VAR_25[VAR_10] =
       VAR_8->sc_isoc_p_last[VAR_10 % VAR_4]->td_self;
  }
 }


 FUNC_10(&VAR_8->sc_bus, &VAR_6);


 VAR_8->sc_bus.methods = &VAR_5;

 FUNC_1(&VAR_8->sc_bus);

 FUNC_8(VAR_8);


 FUNC_9(VAR_8);
 FUNC_2(&VAR_8->sc_bus);


 FUNC_4(&VAR_8->sc_bus);

 return (0);
}
