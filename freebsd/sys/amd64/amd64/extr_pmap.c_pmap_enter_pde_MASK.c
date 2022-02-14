
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef int u_int ;
struct spglist {int dummy; } ;
struct rwlock {int dummy; } ;
typedef int pt_entry_t ;
typedef TYPE_3__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_33__ {size_t wired_count; } ;
struct TYPE_35__ {scalar_t__ pm_type; TYPE_1__ pm_stats; } ;
struct TYPE_34__ {int ref_count; } ;


 int FUNC_0 (int ,char*,scalar_t__,TYPE_3__*) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (TYPE_3__*,int ) ;
 scalar_t__ VAR_14 ;
 int FUNC_5 (struct spglist*) ;
 scalar_t__ VAR_15 ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_16 ;
 int FUNC_7 (int *,int) ;
 TYPE_3__* VAR_17 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int*,int) ;
 TYPE_2__* FUNC_10 (TYPE_3__*,scalar_t__,struct rwlock**) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (TYPE_3__*) ;
 scalar_t__ FUNC_15 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*,scalar_t__) ;
 int FUNC_18 (TYPE_3__*,scalar_t__,int) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (TYPE_3__*,int) ;
 size_t FUNC_21 (scalar_t__) ;
 int VAR_18 ;
 int FUNC_22 (TYPE_3__*,scalar_t__) ;
 int FUNC_23 (TYPE_3__*,scalar_t__,int ) ;
 int FUNC_24 (TYPE_3__*,scalar_t__,int,int,struct rwlock**) ;
 int FUNC_25 (TYPE_3__*,int*,scalar_t__,struct spglist*,struct rwlock**) ;
 scalar_t__ FUNC_26 (TYPE_3__*,scalar_t__,scalar_t__,int*,struct spglist*,struct rwlock**) ;
 int FUNC_27 (TYPE_3__*,size_t) ;
 int FUNC_28 (TYPE_3__*) ;
 scalar_t__ FUNC_29 (TYPE_3__*,scalar_t__,TYPE_2__*,struct spglist*) ;
 int FUNC_30 (TYPE_3__*) ;
 int FUNC_31 (TYPE_2__*,int ) ;
 int FUNC_32 (struct spglist*,int) ;

__attribute__((used)) static int
FUNC_33(pmap_t VAR_19, vm_offset_t VAR_20, pd_entry_t VAR_21, u_int VAR_22,
    vm_page_t VAR_23, struct rwlock **VAR_24)
{
 struct spglist VAR_25;
 pd_entry_t VAR_26, *VAR_27;
 pt_entry_t VAR_28, VAR_29, VAR_30;
 vm_page_t VAR_31, VAR_32;

 FUNC_1(VAR_19 == VAR_17 || (VAR_21 & VAR_11) == 0,
     ("pmap_enter_pde: cannot create wired user mapping"));
 VAR_28 = FUNC_14(VAR_19);
 VAR_29 = FUNC_28(VAR_19);
 FUNC_1((VAR_21 & (FUNC_19(VAR_19) | VAR_29)) != VAR_29,
     ("pmap_enter_pde: newpde is missing PG_M"));
 VAR_30 = FUNC_30(VAR_19);
 FUNC_4(VAR_19, VAR_4);

 if (!FUNC_11(VAR_19, FUNC_20(VAR_19,
     VAR_21))) {
  FUNC_0(VAR_3, "pmap_enter_pde: 2m x blocked for va %#lx"
      " in pmap %p", VAR_20, VAR_19);
  return (VAR_0);
 }
 if ((VAR_32 = FUNC_10(VAR_19, VAR_20, (VAR_22 & VAR_13) != 0 ?
     ((void*)0) : VAR_24)) == ((void*)0)) {
  FUNC_0(VAR_3, "pmap_enter_pde: failure for va %#lx"
      " in pmap %p", VAR_20, VAR_19);
  return (VAR_1);
 }






 if (!FUNC_23(VAR_19, VAR_20, VAR_20 + VAR_5)) {
  FUNC_5(&VAR_25);
  if (FUNC_29(VAR_19, VAR_20, VAR_32, &VAR_25)) {
   FUNC_17(VAR_19, VAR_20);
   FUNC_32(&VAR_25, 1);
  }
  return (VAR_0);
 }
 if (VAR_20 < VAR_15 && VAR_19->pm_type == VAR_14) {
  VAR_21 &= ~VAR_16;
  VAR_21 |= FUNC_22(VAR_19, VAR_20);
 }

 VAR_27 = (pd_entry_t *)FUNC_2(FUNC_6(VAR_32));
 VAR_27 = &VAR_27[FUNC_21(VAR_20)];
 VAR_26 = *VAR_27;
 if ((VAR_26 & VAR_30) != 0) {
  FUNC_1(VAR_32->ref_count > 1,
      ("pmap_enter_pde: pdpg's reference count is too low"));
  if ((VAR_22 & VAR_12) != 0) {
   VAR_32->ref_count--;
   FUNC_0(VAR_3, "pmap_enter_pde: failure for va %#lx"
       " in pmap %p", VAR_20, VAR_19);
   return (VAR_0);
  }

  FUNC_5(&VAR_25);
  if ((VAR_26 & VAR_10) != 0) {






   (void)FUNC_25(VAR_19, VAR_27, VAR_20, &VAR_25, VAR_24);
   if ((VAR_26 & VAR_28) == 0)
    FUNC_18(VAR_19, VAR_20, VAR_26);
  } else {
   FUNC_13();
   if (FUNC_26(VAR_19, VAR_20, VAR_20 + VAR_5, VAR_27, &VAR_25,
       VAR_24))
                 FUNC_16(VAR_19);
   FUNC_12();
  }
  FUNC_32(&VAR_25, 1);
  if (VAR_20 >= VAR_15) {




   VAR_31 = FUNC_3(*VAR_27 & VAR_8);
   if (FUNC_15(VAR_19, VAR_31, 0))
    FUNC_8("pmap_enter_pde: trie insert failed");
  } else
   FUNC_1(*VAR_27 == 0, ("pmap_enter_pde: non-zero pde %p",
       VAR_27));
 }
 if ((VAR_21 & VAR_9) != 0) {



  if (!FUNC_24(VAR_19, VAR_20, VAR_21, VAR_22, VAR_24)) {
   FUNC_5(&VAR_25);
   if (FUNC_29(VAR_19, VAR_20, VAR_32, &VAR_25)) {






    FUNC_17(VAR_19, VAR_20);
    FUNC_32(&VAR_25, 1);
   }
   FUNC_0(VAR_3, "pmap_enter_pde: failure for va %#lx"
       " in pmap %p", VAR_20, VAR_19);
   return (VAR_1);
  }
  if ((VAR_21 & VAR_29) != 0) {
   for (VAR_31 = VAR_23; VAR_31 < &VAR_23[VAR_5 / VAR_6]; VAR_31++)
    FUNC_31(VAR_31, VAR_7);
  }
 }




 if ((VAR_21 & VAR_11) != 0)
  VAR_19->pm_stats.wired_count += VAR_5 / VAR_6;
 FUNC_27(VAR_19, VAR_5 / VAR_6);





 FUNC_9(VAR_27, VAR_21);

 FUNC_7(&VAR_18, 1);
 FUNC_0(VAR_3, "pmap_enter_pde: success for va %#lx"
     " in pmap %p", VAR_20, VAR_19);
 return (VAR_2);
}
