
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sync_kloop_ring_args {scalar_t__ irq_ctx; scalar_t__ busy_wait; int direct; struct nm_csb_ktoa* csb_ktoa; struct nm_csb_atok* csb_atok; struct netmap_kring* kring; } ;
struct nm_csb_ktoa {int dummy; } ;
struct nm_csb_atok {int dummy; } ;
struct netmap_ring {int head; scalar_t__ tail; int flags; } ;
struct netmap_kring {int nkr_num_slots; int nr_hwcur; scalar_t__ rtail; int (* nm_sync ) (struct netmap_kring*,int ) ;scalar_t__ nr_hwtail; scalar_t__ rhead; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct nm_csb_atok*) ;
 int FUNC_2 (struct nm_csb_ktoa*,int) ;
 int FUNC_3 (scalar_t__,int) ;
 int VAR_2 ;
 int FUNC_4 (struct netmap_kring*) ;
 int FUNC_5 (struct netmap_kring*) ;
 int FUNC_6 (struct netmap_kring*,int,int *) ;
 scalar_t__ FUNC_7 (struct netmap_kring*) ;
 int FUNC_8 (struct netmap_kring*) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (char*) ;
 int FUNC_11 () ;
 int FUNC_12 (struct netmap_kring*,struct netmap_ring*) ;
 int FUNC_13 (struct netmap_kring*,int ) ;
 int FUNC_14 (struct nm_csb_atok*,struct netmap_ring*,int) ;
 int FUNC_15 (struct nm_csb_ktoa*,int,scalar_t__) ;
 int FUNC_16 (char*,struct netmap_kring*) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static void
FUNC_18(const struct sync_kloop_ring_args *VAR_3)
{
 struct netmap_kring *VAR_4 = VAR_3->kring;
 struct nm_csb_atok *VAR_5 = VAR_3->csb_atok;
 struct nm_csb_ktoa *VAR_6 = VAR_3->csb_ktoa;
 struct netmap_ring VAR_7;
 bool VAR_8 = 0;
 uint32_t VAR_9;
 int VAR_10;

 if (FUNC_17(FUNC_6(VAR_4, 1, ((void*)0)))) {
  return;
 }

 VAR_9 = VAR_4->nkr_num_slots;


 if (!VAR_3->direct) {
  FUNC_2(VAR_6, 0);
 }

 FUNC_14(VAR_5, &VAR_7, VAR_9);

 for (;;) {
  VAR_10 = VAR_7.head - VAR_4->nr_hwcur;
  if (VAR_10 < 0)
   VAR_10 += VAR_9;
  if (FUNC_8(VAR_4) <= (VAR_9 >> 1)) {
   VAR_7.flags |= VAR_0;
  }


  VAR_7.tail = VAR_4->rtail;
  if (FUNC_17(FUNC_12(VAR_4, &VAR_7) >= VAR_9)) {

   FUNC_4(VAR_4);
   if (!VAR_3->busy_wait) {
    FUNC_2(VAR_6, 1);
   }
   break;
  }

  if (FUNC_17(VAR_2 & VAR_1)) {
   FUNC_16("pre txsync", VAR_4);
  }

  if (FUNC_17(VAR_4->nm_sync(VAR_4, VAR_7.flags))) {
   if (!VAR_3->busy_wait) {

    FUNC_2(VAR_6, 1);
   }
   FUNC_10("txsync() failed");
   break;
  }






  FUNC_15(VAR_6, VAR_4->nr_hwcur,
    VAR_4->nr_hwtail);
  if (VAR_4->rtail != VAR_4->nr_hwtail) {

   VAR_4->rtail = VAR_4->nr_hwtail;
   VAR_8 = 1;
  }

  if (FUNC_17(VAR_2 & VAR_1)) {
   FUNC_16("post txsync", VAR_4);
  }
  FUNC_14(VAR_5, &VAR_7, VAR_9);
  if (VAR_7.head == VAR_4->rhead) {
   if (VAR_3->busy_wait) {
    break;
   }






   FUNC_2(VAR_6, 1);

   FUNC_11();
   FUNC_14(VAR_5, &VAR_7, VAR_9);
   if (VAR_7.head != VAR_4->rhead) {


    FUNC_2(VAR_6, 0);
    continue;
   }
   break;
  }

  if (FUNC_7(VAR_4)) {


   FUNC_9(1, "TX ring");
   break;
  }
 }

 FUNC_5(VAR_4);






}
