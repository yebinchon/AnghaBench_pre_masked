
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ u_int ;
struct vm_page {int dummy; } ;
struct pv_entry {int pv_flags; } ;
struct l2_bucket {scalar_t__* l2b_kva; } ;
typedef scalar_t__ pt_entry_t ;
typedef TYPE_2__* pmap_t ;
struct TYPE_10__ {int resident_count; } ;
struct TYPE_11__ {TYPE_1__ pm_stats; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 struct vm_page* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 () ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 () ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 () ;
 int FUNC_14 (scalar_t__) ;
 size_t FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 int FUNC_18 (TYPE_2__*,struct l2_bucket*,scalar_t__) ;
 int FUNC_19 (struct pv_entry*) ;
 struct l2_bucket* FUNC_20 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_21 (TYPE_2__*) ;
 struct pv_entry* FUNC_22 (struct vm_page*,TYPE_2__*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;

void
FUNC_25(pmap_t VAR_3, vm_offset_t VAR_4, vm_offset_t VAR_5)
{
 struct l2_bucket *VAR_6;
 vm_offset_t VAR_7;
 pt_entry_t *VAR_8;
 u_int VAR_9;
 u_int VAR_10, VAR_11, VAR_12;
 int VAR_13 = 0;






 FUNC_23(&VAR_2);
 FUNC_2(VAR_3);
 VAR_9 = 0;
 while (VAR_4 < VAR_5) {



  VAR_7 = FUNC_0(VAR_4);
  if (VAR_7 > VAR_5)
   VAR_7 = VAR_5;

  VAR_6 = FUNC_20(VAR_3, VAR_4);
  if (VAR_6 == ((void*)0)) {
   VAR_4 = VAR_7;
   continue;
  }

  VAR_8 = &VAR_6->l2b_kva[FUNC_15(VAR_4)];
  VAR_10 = 0;

  while (VAR_4 < VAR_7) {
   struct vm_page *VAR_14;
   pt_entry_t VAR_15;
   vm_paddr_t VAR_16;

   VAR_15 = *VAR_8;

   if (VAR_15 == 0) {



    VAR_4 += VAR_0;
    VAR_8++;
    continue;
   }

   VAR_3->pm_stats.resident_count--;
   VAR_16 = FUNC_16(VAR_15);
   VAR_11 = 0;
   VAR_12 = 1;






   if ((VAR_14 = FUNC_1(VAR_16)) != ((void*)0)) {
    struct pv_entry *VAR_17;

    VAR_17 = FUNC_22(VAR_14, VAR_3, VAR_4);
    if (VAR_17) {
     VAR_11 = FUNC_5(VAR_17->pv_flags);
     VAR_12 = FUNC_6(VAR_17->pv_flags);
     FUNC_19(VAR_17);
    }
   }

   if (FUNC_17(VAR_15) && FUNC_21(VAR_3)) {
    if (VAR_9 < VAR_1) {
     VAR_9++;
        if (VAR_11) {
             FUNC_9(VAR_4,
          VAR_0);
      FUNC_11(VAR_4,
          VAR_0);
      FUNC_14(VAR_4);
        } else if (VAR_12) {
      FUNC_7(VAR_4,
          VAR_0);
      FUNC_11(VAR_4,
          VAR_0);
      FUNC_12(VAR_4);
     }
    } else if (VAR_9 == VAR_1) {



     FUNC_8();
     FUNC_10();
     VAR_13 = 1;
     VAR_9++;
    }
   }
   *VAR_8 = 0;
   FUNC_4(VAR_8);

   VAR_4 += VAR_0;
   VAR_8++;
   VAR_10++;
  }

  FUNC_18(VAR_3, VAR_6, VAR_10);
 }

 FUNC_24(&VAR_2);
 if (VAR_13)
  FUNC_13();
  FUNC_3(VAR_3);
}
