
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct sync_kloop_ring_args {scalar_t__ irq_ctx; scalar_t__ busy_wait; int direct; struct nm_csb_ktoa* csb_ktoa; struct nm_csb_atok* csb_atok; struct netmap_kring* kring; } ;
struct nm_csb_ktoa {int dummy; } ;
struct nm_csb_atok {int dummy; } ;
struct netmap_ring {scalar_t__ tail; int head; int flags; } ;
struct netmap_kring {scalar_t__ nkr_num_slots; scalar_t__ rtail; int (* nm_sync ) (struct netmap_kring*,int ) ;scalar_t__ rhead; int nr_hwtail; int nr_hwcur; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct nm_csb_atok*) ;
 int FUNC_2 (struct nm_csb_ktoa*,int) ;
 int FUNC_3 (scalar_t__,int) ;
 int VAR_2 ;
 int FUNC_4 (struct netmap_kring*) ;
 int FUNC_5 (struct netmap_kring*) ;
 int FUNC_6 (struct netmap_kring*,int,int *) ;
 int FUNC_7 (int,char*,scalar_t__,scalar_t__,int) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (struct netmap_kring*,struct netmap_ring*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct netmap_kring*,int ) ;
 int FUNC_12 (struct nm_csb_atok*,struct netmap_ring*,scalar_t__) ;
 int FUNC_13 (struct nm_csb_ktoa*,int ,scalar_t__) ;
 int FUNC_14 (char*,struct netmap_kring*) ;
 scalar_t__ FUNC_15 (struct netmap_kring*,int ) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static void
FUNC_17(const struct sync_kloop_ring_args *VAR_3)
{

 struct netmap_kring *VAR_4 = VAR_3->kring;
 struct nm_csb_atok *VAR_5 = VAR_3->csb_atok;
 struct nm_csb_ktoa *VAR_6 = VAR_3->csb_ktoa;
 struct netmap_ring VAR_7;
 int VAR_8 = 0;
 bool VAR_9 = 0;
 uint32_t VAR_10;

 if (FUNC_16(FUNC_6(VAR_4, 1, ((void*)0)))) {
  return;
 }

 VAR_10 = VAR_4->nkr_num_slots;


 VAR_10 = VAR_4->nkr_num_slots;


 if (!VAR_3->direct) {
  FUNC_2(VAR_6, 0);
 }

 FUNC_12(VAR_5, &VAR_7, VAR_10);

 for (;;) {
  uint32_t VAR_11;


  VAR_7.tail = VAR_4->rtail;
  if (FUNC_16(FUNC_9(VAR_4, &VAR_7) >= VAR_10)) {

   FUNC_4(VAR_4);
   if (!VAR_3->busy_wait) {
    FUNC_2(VAR_6, 1);
   }
   break;
  }

  if (FUNC_16(VAR_2 & VAR_0)) {
   FUNC_14("pre rxsync", VAR_4);
  }

  if (FUNC_16(VAR_4->nm_sync(VAR_4, VAR_7.flags))) {
   if (!VAR_3->busy_wait) {

    FUNC_2(VAR_6, 1);
   }
   FUNC_8("rxsync() failed");
   break;
  }





  VAR_11 = FUNC_0(VAR_4->nr_hwtail);
  FUNC_13(VAR_6, VAR_4->nr_hwcur, VAR_11);
  if (VAR_4->rtail != VAR_11) {
   VAR_4->rtail = VAR_11;
   VAR_9 = 1;
   VAR_8 = 0;
  } else {
   VAR_8++;
  }

  if (FUNC_16(VAR_2 & VAR_0)) {
   FUNC_14("post rxsync", VAR_4);
  }
  FUNC_12(VAR_5, &VAR_7, VAR_10);
  if (FUNC_15(VAR_4, VAR_7.head)) {
   if (VAR_3->busy_wait) {
    break;
   }






   FUNC_2(VAR_6, 1);

   FUNC_10();
   FUNC_12(VAR_5, &VAR_7, VAR_10);
   if (!FUNC_15(VAR_4, VAR_7.head)) {


    FUNC_2(VAR_6, 0);
    continue;
   }
   break;
  }

  VAR_11 = FUNC_0(VAR_4->nr_hwtail);
  if (FUNC_16(VAR_11 == VAR_4->rhead ||
     VAR_8 >= VAR_1)) {


   FUNC_7(1, "nr_hwtail: %d rhead: %d dry_cycles: %d",
     VAR_11, VAR_4->rhead, VAR_8);
   break;
  }
 }

 FUNC_5(VAR_4);







}
