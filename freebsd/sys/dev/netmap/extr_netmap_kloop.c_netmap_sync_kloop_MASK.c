
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct sync_kloop_ring_args {int busy_wait; int direct; int num_entries; int num_tx_rings; int num_rings; int next_entry; struct sync_kloop_poll_entry* entries; int wait_table; int * next_wake_fun; struct file* irq_ctx; struct nm_csb_ktoa* csb_ktoa; struct nm_csb_atok* csb_atok; void* kring; } ;
struct sync_kloop_poll_entry {scalar_t__ filp; scalar_t__ irq_filp; struct file* irq_ctx; int wait; scalar_t__ wqh; struct sync_kloop_ring_args* args; struct sync_kloop_ring_args* parent; } ;
struct sync_kloop_poll_ctx {int busy_wait; int direct; int num_entries; int num_tx_rings; int num_rings; int next_entry; struct sync_kloop_poll_entry* entries; int wait_table; int * next_wake_fun; struct file* irq_ctx; struct nm_csb_ktoa* csb_ktoa; struct nm_csb_atok* csb_atok; void* kring; } ;
struct nmreq_sync_kloop_start {int sleep_us; } ;
struct nmreq_option {int nro_status; int nro_size; } ;
struct nmreq_opt_sync_kloop_mode {int mode; } ;
struct nmreq_opt_sync_kloop_eventfds {TYPE_1__* eventfds; } ;
struct nmreq_header {scalar_t__ nr_body; } ;
struct nm_csb_ktoa {int dummy; } ;
struct nm_csb_atok {int dummy; } ;
struct netmap_priv_d {int np_kloop_state; int* np_qlast; int* np_qfirst; scalar_t__ np_filp; int * np_si; struct nm_csb_ktoa* np_csb_ktoa_base; struct nm_csb_atok* np_csb_atok_base; struct netmap_adapter* np_na; int * np_nifp; } ;
struct netmap_adapter {int na_flags; int name; } ;
struct file {TYPE_2__* f_op; } ;
struct eventfd_ctx {TYPE_2__* f_op; } ;
typedef int args ;
struct TYPE_4__ {unsigned long (* poll ) (struct file*,int *) ;} ;
struct TYPE_3__ {scalar_t__ ioeventfd; scalar_t__ irqfd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 void** FUNC_3 (struct netmap_adapter*,size_t) ;
 int FUNC_4 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 unsigned long VAR_14 ;
 int FUNC_5 (struct file*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (int ) ;
 struct file* FUNC_7 (struct file*) ;
 int FUNC_8 (struct file*) ;
 struct file* FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct sync_kloop_ring_args*) ;
 int FUNC_15 (struct sync_kloop_ring_args*) ;
 int FUNC_16 (struct netmap_adapter*) ;
 int FUNC_17 (struct sync_kloop_ring_args*) ;
 struct sync_kloop_ring_args* FUNC_18 (int) ;
 int FUNC_19 (char*,int ) ;
 int FUNC_20 (char*,int,int,int,int) ;
 struct nmreq_option* FUNC_21 (struct nmreq_header*,int ) ;
 int FUNC_22 (scalar_t__,int ,int *) ;
 int FUNC_23 (scalar_t__,int *) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 unsigned long FUNC_26 (struct file*,int *) ;
 int VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;
 scalar_t__ FUNC_27 (int) ;
 int FUNC_28 (int,int) ;

int
FUNC_29(struct netmap_priv_d *VAR_22, struct nmreq_header *VAR_23)
{
 struct nmreq_sync_kloop_start *VAR_24 =
  (struct nmreq_sync_kloop_start *)(uintptr_t)VAR_23->nr_body;
 struct nmreq_opt_sync_kloop_eventfds *VAR_25 = ((void*)0);



 int VAR_26, VAR_27, VAR_28;
 struct sync_kloop_ring_args *VAR_29 = ((void*)0);
 uint32_t VAR_30 = VAR_24->sleep_us;
 struct nm_csb_atok* VAR_31;
 struct nm_csb_ktoa* VAR_32;
 struct netmap_adapter *VAR_33;
 struct nmreq_option *VAR_34;
 bool VAR_35 = 0;
 bool VAR_36 = 1;
 bool VAR_37 = 0;
 bool VAR_38 = 0;
 int VAR_39 = 0;
 int VAR_40;

 if (VAR_30 > 1000000) {

  return VAR_1;
 }

 if (VAR_22->np_nifp == ((void*)0)) {
  return VAR_3;
 }
 FUNC_12();

 VAR_33 = VAR_22->np_na;
 if (!FUNC_16(VAR_33)) {
  return VAR_3;
 }

 FUNC_1();

 if (!VAR_22->np_csb_atok_base || !VAR_22->np_csb_ktoa_base) {
  FUNC_2();
  FUNC_19("sync-kloop on %s requires "
    "NETMAP_REQ_OPT_CSB option", VAR_33->name);
  return VAR_1;
 }

 VAR_31 = VAR_22->np_csb_atok_base;
 VAR_32 = VAR_22->np_csb_ktoa_base;


 if (VAR_22->np_kloop_state & VAR_10) {
  VAR_39 = VAR_0;
 }
 VAR_22->np_kloop_state |= VAR_10;
 FUNC_2();
 if (VAR_39) {
  return VAR_39;
 }

 VAR_26 = VAR_22->np_qlast[VAR_12] - VAR_22->np_qfirst[VAR_12];
 VAR_27 = VAR_22->np_qlast[VAR_13] - VAR_22->np_qfirst[VAR_13];
 VAR_28 = VAR_27 + VAR_26;

 VAR_29 = FUNC_18(VAR_28 * sizeof(VAR_29[0]));
 if (!VAR_29) {
  VAR_39 = VAR_2;
  goto out;
 }



 for (VAR_40 = 0; VAR_40 < VAR_27; VAR_40++) {
  struct sync_kloop_ring_args *VAR_41 = VAR_29 + VAR_40;

  VAR_41->kring = FUNC_3(VAR_33, VAR_13)[VAR_40 + VAR_22->np_qfirst[VAR_13]];
  VAR_41->csb_atok = VAR_31 + VAR_40;
  VAR_41->csb_ktoa = VAR_32 + VAR_40;
  VAR_41->busy_wait = VAR_36;
  VAR_41->direct = VAR_37;
 }
 for (VAR_40 = 0; VAR_40 < VAR_26; VAR_40++) {
  struct sync_kloop_ring_args *VAR_42 = VAR_29 + VAR_27 + VAR_40;

  VAR_42->kring = FUNC_3(VAR_33, VAR_12)[VAR_40 + VAR_22->np_qfirst[VAR_12]];
  VAR_42->csb_atok = VAR_31 + VAR_27 + VAR_40;
  VAR_42->csb_ktoa = VAR_32 + VAR_27 + VAR_40;
  VAR_42->busy_wait = VAR_36;
  VAR_42->direct = VAR_38;
 }


 VAR_34 = FUNC_21(VAR_23, VAR_7);
 if (VAR_34 != ((void*)0)) {
  struct nmreq_opt_sync_kloop_mode *VAR_43 =
      (struct nmreq_opt_sync_kloop_mode *)VAR_34;

  VAR_37 = !!(VAR_43->mode & VAR_9);
  VAR_38 = !!(VAR_43->mode & VAR_8);
  if (VAR_43->mode & ~(VAR_9 |
      VAR_8)) {
   VAR_34->nro_status = VAR_39 = VAR_1;
   goto out;
  }
  VAR_34->nro_status = 0;
 }
 VAR_34 = FUNC_21(VAR_23, VAR_6);
 if (VAR_34 != ((void*)0)) {
  if (VAR_34->nro_size != sizeof(*VAR_25) +
   sizeof(VAR_25->eventfds[0]) * VAR_28) {


   VAR_34->nro_status = VAR_39 = VAR_1;
   goto out;
  }
  VAR_34->nro_status = VAR_4;
  goto out;

 }

 FUNC_20("kloop busy_wait %u, direct_tx %u, direct_rx %u, "
     "na_could_sleep %u", VAR_36, VAR_37, VAR_38,
     VAR_35);


 for (;;) {
  if (FUNC_27(FUNC_4(VAR_22->np_kloop_state) & VAR_11)) {
   break;
  }
  for (VAR_40 = 0; !VAR_37 && VAR_40 < VAR_27; VAR_40++) {
   struct sync_kloop_ring_args *VAR_44 = VAR_29 + VAR_40;
   FUNC_15(VAR_44);
  }


  for (VAR_40 = 0; !VAR_38 && VAR_40 < VAR_26; VAR_40++) {
   struct sync_kloop_ring_args *VAR_45 = VAR_29 + VAR_27 + VAR_40;
   FUNC_14(VAR_45);
  }

  if (VAR_36) {

   FUNC_28(VAR_30, VAR_30);
  }







 }
out:
 if (VAR_29) {
  FUNC_17(VAR_29);
  VAR_29 = ((void*)0);
 }


 FUNC_1();
 VAR_22->np_kloop_state = 0;
 if (VAR_35) {
  VAR_33->na_flags |= VAR_5;
 }
 FUNC_2();

 return VAR_39;
}
