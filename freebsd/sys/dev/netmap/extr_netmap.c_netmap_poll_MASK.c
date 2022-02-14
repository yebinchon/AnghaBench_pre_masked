
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct netmap_ring {scalar_t__ cur; scalar_t__ tail; scalar_t__ head; } ;
struct netmap_priv_d {int np_sync_flags; int np_csb_atok_base; size_t* np_qfirst; size_t* np_qlast; scalar_t__ np_txpoll; int ** np_si; struct netmap_adapter* np_na; int * np_nifp; } ;
struct netmap_kring {scalar_t__ rhead; scalar_t__ nr_hwcur; scalar_t__ nkr_num_slots; scalar_t__ rcur; scalar_t__ rtail; int nr_kflags; int (* nm_notify ) (struct netmap_kring*,int ) ;scalar_t__ (* nm_sync ) (struct netmap_kring*,int) ;struct netmap_ring* ring; } ;
struct netmap_adapter {int ifp; struct netmap_kring** rx_rings; struct netmap_kring** tx_rings; int name; } ;
struct mbq {int dummy; } ;
typedef enum txrx { ____Placeholder_txrx } txrx ;
typedef int NM_SELRECORD_T ;
typedef int NM_SELINFO_T ;


 struct netmap_kring** FUNC_0 (struct netmap_adapter*,int const) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 () ;
 int FUNC_2 (struct mbq*) ;
 scalar_t__ FUNC_3 (struct mbq*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct netmap_kring*,struct mbq*,int ) ;
 int FUNC_5 (struct netmap_kring*) ;
 int FUNC_6 (int ,struct mbq*) ;
 int FUNC_7 (struct netmap_kring*) ;
 int FUNC_8 (struct netmap_kring*,int,size_t*) ;
 scalar_t__ FUNC_9 (struct netmap_kring*) ;
 int FUNC_10 (struct netmap_adapter*) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int ,int) ;
 scalar_t__ FUNC_14 (struct netmap_kring*,struct netmap_ring*) ;
 int FUNC_15 (struct netmap_kring*) ;
 scalar_t__ FUNC_16 (struct netmap_kring*,struct netmap_ring*) ;
 int FUNC_17 (struct netmap_ring*) ;
 scalar_t__ FUNC_18 (struct netmap_kring*,int) ;
 int FUNC_19 (struct netmap_kring*,int ) ;
 scalar_t__ FUNC_20 (struct netmap_kring*,int) ;
 int FUNC_21 (struct netmap_kring*,int ) ;
 scalar_t__ FUNC_22 (int) ;
 int VAR_12 ;
 int VAR_13 ;

int
FUNC_23(struct netmap_priv_d *VAR_14, int VAR_15, NM_SELRECORD_T *VAR_16)
{
 struct netmap_adapter *VAR_17;
 struct netmap_kring *VAR_18;
 struct netmap_ring *VAR_19;
 u_int VAR_20, VAR_21[VAR_4], VAR_22 = 0;
 NM_SELINFO_T *VAR_23[VAR_4];


 struct mbq VAR_24;






 int VAR_25 = 1, VAR_26 = 1;







 int VAR_27 = 0;
 int VAR_28 = VAR_14->np_sync_flags;

 FUNC_2(&VAR_24);

 if (FUNC_22(VAR_14->np_nifp == ((void*)0))) {
  return VAR_5;
 }
 FUNC_1();

 VAR_17 = VAR_14->np_na;

 if (FUNC_22(!FUNC_10(VAR_17)))
  return VAR_5;

 if (FUNC_22(VAR_14->np_csb_atok_base)) {
  FUNC_12("Invalid poll in CSB mode");
  return VAR_5;
 }

 if (VAR_10 & VAR_0)
  FUNC_13("device %s events 0x%x", VAR_17->name, VAR_15);
 VAR_21[VAR_3] = VAR_15 & (VAR_7 | VAR_9);
 VAR_21[VAR_2] = VAR_15 & (VAR_6 | VAR_8);
 VAR_23[VAR_2] = VAR_14->np_si[VAR_2];
 VAR_23[VAR_3] = VAR_14->np_si[VAR_3];
 FUNC_11(VAR_16, VAR_23[VAR_2]);
 FUNC_11(VAR_16, VAR_23[VAR_3]);
 if (VAR_14->np_txpoll || VAR_21[VAR_3]) {






flush_tx:
  for (VAR_20 = VAR_14->np_qfirst[VAR_3]; VAR_20 < VAR_14->np_qlast[VAR_3]; VAR_20++) {
   int VAR_29 = 0;

   VAR_18 = VAR_17->tx_rings[VAR_20];
   VAR_19 = VAR_18->ring;







   if (!VAR_27 && !VAR_21[VAR_3] && VAR_19->head == VAR_18->nr_hwcur)
    continue;

   if (FUNC_8(VAR_18, 1, &VAR_22))
    continue;

   if (FUNC_16(VAR_18, VAR_19) >= VAR_18->nkr_num_slots) {
    FUNC_5(VAR_18);
    VAR_22 |= VAR_5;
   } else {
    if (VAR_18->nm_sync(VAR_18, VAR_28))
     VAR_22 |= VAR_5;
    else
     FUNC_15(VAR_18);
   }







   VAR_29 = VAR_18->rcur != VAR_18->rtail;
   FUNC_7(VAR_18);
   if (VAR_29) {
    VAR_22 |= VAR_21[VAR_3];
    VAR_21[VAR_3] = 0;



   }
  }

  VAR_27 = 0;
  if (VAR_21[VAR_3] && VAR_25 && VAR_16) {



   VAR_25 = 0;
   goto flush_tx;
  }
 }





 if (VAR_21[VAR_2]) {

do_retry_rx:
  for (VAR_20 = VAR_14->np_qfirst[VAR_2]; VAR_20 < VAR_14->np_qlast[VAR_2]; VAR_20++) {
   int VAR_30 = 0;

   VAR_18 = VAR_17->rx_rings[VAR_20];
   VAR_19 = VAR_18->ring;

   if (FUNC_22(FUNC_8(VAR_18, 1, &VAR_22)))
    continue;

   if (FUNC_14(VAR_18, VAR_19) >= VAR_18->nkr_num_slots) {
    FUNC_5(VAR_18);
    VAR_22 |= VAR_5;
   }






   if (FUNC_9(VAR_18)) {
    FUNC_4(VAR_18, &VAR_24, VAR_11);
   }




   VAR_18->nr_kflags &= ~VAR_1;
   if (VAR_18->nm_sync(VAR_18, VAR_28))
    VAR_22 |= VAR_5;
   else
    FUNC_15(VAR_18);
   VAR_27 |= (VAR_18->nr_kflags & VAR_1);
   FUNC_17(VAR_19);
   VAR_30 = VAR_18->rcur != VAR_18->rtail;
   FUNC_7(VAR_18);
   if (VAR_30) {
    VAR_22 |= VAR_21[VAR_2];
    VAR_26 = 0;



   }
  }






  if (VAR_27 || VAR_26) {
   VAR_26 = 0;
   if (VAR_27)
    goto flush_tx;
   else
    goto do_retry_rx;
  }
 }







 if (FUNC_3(&VAR_24)) {
  FUNC_6(VAR_17->ifp, &VAR_24);
 }

 return (VAR_22);


}
