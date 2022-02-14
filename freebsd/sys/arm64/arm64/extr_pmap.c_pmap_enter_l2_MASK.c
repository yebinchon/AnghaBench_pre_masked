
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef int u_int ;
struct spglist {int dummy; } ;
struct rwlock {int dummy; } ;
typedef TYPE_3__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_22__ {size_t wired_count; size_t resident_count; } ;
struct TYPE_24__ {TYPE_1__ pm_stats; } ;
struct TYPE_23__ {int ref_count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,scalar_t__,TYPE_3__*) ;
 int FUNC_1 (int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (scalar_t__) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (struct spglist*) ;
 scalar_t__ VAR_16 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int ) ;
 int VAR_17 ;
 int FUNC_9 (char*) ;
 TYPE_2__* FUNC_10 (TYPE_3__*,scalar_t__,struct rwlock**) ;
 int FUNC_11 (int*) ;
 scalar_t__ FUNC_12 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_13 (TYPE_3__*,scalar_t__) ;
 int* FUNC_14 (TYPE_3__*,scalar_t__) ;
 size_t FUNC_15 (scalar_t__) ;
 int VAR_18 ;
 scalar_t__ FUNC_16 (int*) ;
 int FUNC_17 (TYPE_3__*,scalar_t__,int,int,struct rwlock**) ;
 int FUNC_18 (TYPE_3__*,int*,scalar_t__,scalar_t__,struct spglist*,struct rwlock**) ;
 int FUNC_19 (TYPE_3__*,int,scalar_t__,scalar_t__,struct spglist*,struct rwlock**) ;
 int FUNC_20 (int*,int) ;
 scalar_t__ FUNC_21 (TYPE_3__*,scalar_t__,TYPE_2__*,struct spglist*) ;
 int FUNC_22 (TYPE_2__*,int ) ;
 int FUNC_23 (struct spglist*,int) ;

__attribute__((used)) static int
FUNC_24(pmap_t VAR_19, vm_offset_t VAR_20, pd_entry_t VAR_21, u_int VAR_22,
    vm_page_t VAR_23, struct rwlock **VAR_24)
{
 struct spglist VAR_25;
 pd_entry_t *VAR_26, VAR_27;
 vm_page_t VAR_28, VAR_29;

 FUNC_4(VAR_19, VAR_11);

 if ((VAR_28 = FUNC_10(VAR_19, VAR_20, (VAR_22 & VAR_15) != 0 ?
     ((void*)0) : VAR_24)) == ((void*)0)) {
  FUNC_0(VAR_8, "pmap_enter_l2: failure for va %#lx in pmap %p",
      VAR_20, VAR_19);
  return (VAR_6);
 }

 VAR_26 = (pd_entry_t *)FUNC_2(FUNC_6(VAR_28));
 VAR_26 = &VAR_26[FUNC_15(VAR_20)];
 if ((VAR_27 = FUNC_16(VAR_26)) != 0) {
  FUNC_1(VAR_28->ref_count > 1,
      ("pmap_enter_l2: l2pg's ref count is too low"));
  if ((VAR_22 & VAR_14) != 0) {
   VAR_28->ref_count--;
   FUNC_0(VAR_8,
       "pmap_enter_l2: failure for va %#lx in pmap %p",
       VAR_20, VAR_19);
   return (VAR_5);
  }
  FUNC_5(&VAR_25);
  if ((VAR_27 & VAR_0) == VAR_9)
   (void)FUNC_18(VAR_19, VAR_26, VAR_20,
       FUNC_16(FUNC_14(VAR_19, VAR_20)), &VAR_25, VAR_24);
  else
   FUNC_19(VAR_19, VAR_27, VAR_20, VAR_20 + VAR_10,
       &VAR_25, VAR_24);
  FUNC_23(&VAR_25, 1);
  if (VAR_20 >= VAR_16) {






   VAR_29 = FUNC_3(FUNC_16(VAR_26) & ~VAR_1);
   if (FUNC_12(VAR_19, VAR_29, 0))
    FUNC_9("pmap_enter_l2: trie insert failed");
   FUNC_11(VAR_26);
   FUNC_13(VAR_19, VAR_20);
  } else
   FUNC_1(FUNC_16(VAR_26) == 0,
       ("pmap_enter_l2: non-zero L2 entry %p", VAR_26));
 }

 if ((VAR_21 & VAR_3) != 0) {



  if (!FUNC_17(VAR_19, VAR_20, VAR_21, VAR_22, VAR_24)) {
   FUNC_5(&VAR_25);
   if (FUNC_21(VAR_19, VAR_20, VAR_28, &VAR_25)) {
    FUNC_13(VAR_19, VAR_20);
    FUNC_23(&VAR_25, 1);
   }
   FUNC_0(VAR_8,
       "pmap_enter_l2: failure for va %#lx in pmap %p",
       VAR_20, VAR_19);
   return (VAR_6);
  }
  if ((VAR_21 & VAR_2) != 0)
   for (VAR_29 = VAR_23; VAR_29 < &VAR_23[VAR_10 / VAR_12]; VAR_29++)
    FUNC_22(VAR_29, VAR_13);
 }




 if ((VAR_21 & VAR_4) != 0)
  VAR_19->pm_stats.wired_count += VAR_10 / VAR_12;
 VAR_19->pm_stats.resident_count += VAR_10 / VAR_12;




 FUNC_20(VAR_26, VAR_21);
 FUNC_8(VAR_17);

 FUNC_7(&VAR_18, 1);
 FUNC_0(VAR_8, "pmap_enter_l2: success for va %#lx in pmap %p",
     VAR_20, VAR_19);

 return (VAR_7);
}
