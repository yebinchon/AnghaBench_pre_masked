
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef TYPE_2__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
struct spglist {int dummy; } ;
struct rwlock {int dummy; } ;
struct md_page {int pv_list; } ;
typedef int pt_entry_t ;
typedef TYPE_3__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_17__ {int wired_count; } ;
struct TYPE_19__ {TYPE_1__ pm_stats; } ;
struct TYPE_16__ {int pv_list; } ;
struct TYPE_18__ {int flags; TYPE_10__ md; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct rwlock* FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 struct md_page* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,scalar_t__,scalar_t__) ;
 int* FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int*) ;
 int FUNC_11 (int*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (TYPE_10__*,TYPE_3__*,scalar_t__) ;
 int FUNC_14 (TYPE_3__*,int) ;
 scalar_t__ FUNC_15 (TYPE_3__*,scalar_t__,int ,struct spglist*) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;
 int FUNC_18 (struct rwlock*) ;
 int FUNC_19 (struct rwlock*) ;
 int FUNC_20 (TYPE_2__*,int ) ;
 int FUNC_21 (TYPE_2__*,int ) ;
 int FUNC_22 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_23(pmap_t VAR_10, pd_entry_t VAR_11, vm_offset_t VAR_12,
    vm_offset_t VAR_13, struct spglist *VAR_14, struct rwlock **VAR_15)
{
 struct md_page *VAR_16;
 struct rwlock *VAR_17;
 pt_entry_t *VAR_18, VAR_19;
 vm_offset_t VAR_20;
 vm_page_t VAR_21;

 FUNC_3(VAR_10, VAR_6);
 FUNC_0(FUNC_16(VAR_12, VAR_4) + VAR_4 == FUNC_17(VAR_13, VAR_4),
     ("pmap_remove_l3_range: range crosses an L3 page table boundary"));
 VAR_20 = VAR_13;
 for (VAR_18 = FUNC_8(&VAR_11, VAR_12); VAR_12 != VAR_13; VAR_18++, VAR_12 += VAR_5) {
  if (!FUNC_9(FUNC_10(VAR_18))) {
   if (VAR_20 != VAR_13) {
    FUNC_7(VAR_10, VAR_20, VAR_12);
    VAR_20 = VAR_13;
   }
   continue;
  }
  VAR_19 = FUNC_11(VAR_18);
  if ((VAR_19 & VAR_3) != 0)
   VAR_10->pm_stats.wired_count--;
  FUNC_14(VAR_10, 1);
  if ((VAR_19 & VAR_2) != 0) {
   VAR_21 = FUNC_2(VAR_19 & ~VAR_1);
   if (FUNC_12(VAR_19))
    FUNC_22(VAR_21);
   if ((VAR_19 & VAR_0) != 0)
    FUNC_21(VAR_21, VAR_7);
   VAR_17 = FUNC_1(FUNC_5(VAR_21));
   if (VAR_17 != *VAR_15) {
    if (*VAR_15 != ((void*)0)) {
     if (VAR_20 != VAR_13) {
      FUNC_7(VAR_10, VAR_20,
          VAR_12);
      VAR_20 = VAR_13;
     }
     FUNC_19(*VAR_15);
    }
    *VAR_15 = VAR_17;
    FUNC_18(*VAR_15);
   }
   FUNC_13(&VAR_21->md, VAR_10, VAR_12);
   if (FUNC_4(&VAR_21->md.pv_list) &&
       (VAR_21->flags & VAR_9) == 0) {
    VAR_16 = FUNC_6(FUNC_5(VAR_21));
    if (FUNC_4(&VAR_16->pv_list))
     FUNC_20(VAR_21, VAR_8);
   }
  }
  if (VAR_20 == VAR_13)
   VAR_20 = VAR_12;
  if (FUNC_15(VAR_10, VAR_12, VAR_11, VAR_14)) {
   VAR_12 += VAR_5;
   break;
  }
 }
 if (VAR_20 != VAR_13)
  FUNC_7(VAR_10, VAR_20, VAR_12);
}
