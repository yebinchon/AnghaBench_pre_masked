
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef size_t vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
struct rwlock {int dummy; } ;
typedef int pt_entry_t ;
typedef int pml4_entry_t ;
typedef TYPE_2__* pmap_t ;
typedef int pdp_entry_t ;
typedef int pd_entry_t ;
struct TYPE_20__ {int* pm_pml4; int* pm_pml4u; scalar_t__ pm_ucr3; } ;
struct TYPE_19__ {int flags; int ref_count; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct rwlock**) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_14 ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_1__*) ;
 TYPE_1__* FUNC_14 (int *,size_t,int) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static vm_page_t
FUNC_18(pmap_t VAR_15, vm_pindex_t VAR_16, struct rwlock **VAR_17)
{
 vm_page_t VAR_18, VAR_19, VAR_20;
 pt_entry_t VAR_21, VAR_22, VAR_23, VAR_24;

 FUNC_4(VAR_15, VAR_0);

 VAR_21 = FUNC_8(VAR_15);
 VAR_22 = FUNC_9(VAR_15);
 VAR_24 = FUNC_12(VAR_15);
 VAR_23 = FUNC_11(VAR_15);




 if ((VAR_18 = FUNC_14(((void*)0), VAR_16, VAR_11 |
     VAR_12 | VAR_13)) == ((void*)0)) {
  if (VAR_17 != ((void*)0)) {
   FUNC_6(VAR_17);
   FUNC_5(VAR_15);
   FUNC_2();
   FUNC_17(((void*)0));
   FUNC_3(VAR_15);
  }





  return (((void*)0));
 }
 if ((VAR_18->flags & VAR_9) == 0)
  FUNC_13(VAR_18);






 if (VAR_16 >= (VAR_4 + VAR_5)) {
  pml4_entry_t *VAR_25, *VAR_26;
  vm_pindex_t VAR_27;


  VAR_27 = VAR_16 - (VAR_4 + VAR_5);
  VAR_25 = &VAR_15->pm_pml4[VAR_27];
  *VAR_25 = FUNC_7(VAR_18) | VAR_8 | VAR_23 | VAR_24 | VAR_21 | VAR_22;
  if (VAR_15->pm_pml4u != ((void*)0) && VAR_27 < VAR_6) {







   if (VAR_15->pm_ucr3 != VAR_10)
    *VAR_25 |= VAR_14;

   VAR_26 = &VAR_15->pm_pml4u[VAR_27];
   *VAR_26 = FUNC_7(VAR_18) | VAR_8 | VAR_23 | VAR_24 |
       VAR_21 | VAR_22;
  }

 } else if (VAR_16 >= VAR_4) {
  vm_pindex_t VAR_28;
  vm_pindex_t VAR_29;
  pml4_entry_t *VAR_30;
  pdp_entry_t *VAR_31;


  VAR_29 = VAR_16 - VAR_4;
  VAR_28 = VAR_29 >> VAR_3;

  VAR_30 = &VAR_15->pm_pml4[VAR_28];
  if ((*VAR_30 & VAR_24) == 0) {

   if (FUNC_18(VAR_15, VAR_4 + VAR_5 + VAR_28,
       VAR_17) == ((void*)0)) {
    FUNC_16(VAR_18);
    FUNC_15(VAR_18);
    return (((void*)0));
   }
  } else {

   VAR_19 = FUNC_1(*VAR_30 & VAR_7);
   VAR_19->ref_count++;
  }
  VAR_31 = (pdp_entry_t *)FUNC_0(*VAR_30 & VAR_7);


  VAR_31 = &VAR_31[VAR_29 & ((1ul << VAR_2) - 1)];
  *VAR_31 = FUNC_7(VAR_18) | VAR_8 | VAR_23 | VAR_24 | VAR_21 | VAR_22;

 } else {
  vm_pindex_t VAR_32;
  vm_pindex_t VAR_33;
  pml4_entry_t *VAR_34;
  pdp_entry_t *VAR_35;
  pd_entry_t *VAR_36;


  VAR_33 = VAR_16 >> VAR_2;
  VAR_32 = VAR_33 >> VAR_3;


  VAR_34 = &VAR_15->pm_pml4[VAR_32];
  if ((*VAR_34 & VAR_24) == 0) {

   if (FUNC_18(VAR_15, VAR_4 + VAR_33,
       VAR_17) == ((void*)0)) {
    FUNC_16(VAR_18);
    FUNC_15(VAR_18);
    return (((void*)0));
   }
   VAR_35 = (pdp_entry_t *)FUNC_0(*VAR_34 & VAR_7);
   VAR_35 = &VAR_35[VAR_33 & ((1ul << VAR_2) - 1)];
  } else {
   VAR_35 = (pdp_entry_t *)FUNC_0(*VAR_34 & VAR_7);
   VAR_35 = &VAR_35[VAR_33 & ((1ul << VAR_2) - 1)];
   if ((*VAR_35 & VAR_24) == 0) {

    if (FUNC_18(VAR_15, VAR_4 + VAR_33,
        VAR_17) == ((void*)0)) {
     FUNC_16(VAR_18);
     FUNC_15(VAR_18);
     return (((void*)0));
    }
   } else {

    VAR_20 = FUNC_1(*VAR_35 & VAR_7);
    VAR_20->ref_count++;
   }
  }
  VAR_36 = (pd_entry_t *)FUNC_0(*VAR_35 & VAR_7);


  VAR_36 = &VAR_36[VAR_16 & ((1ul << VAR_1) - 1)];
  *VAR_36 = FUNC_7(VAR_18) | VAR_8 | VAR_23 | VAR_24 | VAR_21 | VAR_22;
 }

 FUNC_10(VAR_15, 1);

 return (VAR_18);
}
