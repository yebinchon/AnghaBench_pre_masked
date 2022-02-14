
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef size_t vm_pindex_t ;
typedef TYPE_1__* vm_page_t ;
struct rwlock {int dummy; } ;
typedef TYPE_2__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_16__ {int* pm_l0; } ;
struct TYPE_15__ {int flags; int ref_count; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct rwlock**) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int VAR_14 ;
 int FUNC_8 (int*) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (int*,int) ;
 int FUNC_11 (TYPE_1__*) ;
 TYPE_1__* FUNC_12 (int *,size_t,int) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static vm_page_t
FUNC_16(pmap_t VAR_15, vm_pindex_t VAR_16, struct rwlock **VAR_17)
{
 vm_page_t VAR_18, VAR_19, VAR_20;

 FUNC_3(VAR_15, VAR_7);




 if ((VAR_18 = FUNC_12(((void*)0), VAR_16, VAR_11 |
     VAR_12 | VAR_13)) == ((void*)0)) {
  if (VAR_17 != ((void*)0)) {
   FUNC_5(VAR_17);
   FUNC_4(VAR_15);
   FUNC_15(((void*)0));
   FUNC_2(VAR_15);
  }





  return (((void*)0));
 }
 if ((VAR_18->flags & VAR_10) == 0)
  FUNC_11(VAR_18);
 FUNC_7(VAR_14);






 if (VAR_16 >= (VAR_9 + VAR_8)) {
  pd_entry_t *VAR_21;
  vm_pindex_t VAR_22;

  VAR_22 = VAR_16 - (VAR_9 + VAR_8);
  VAR_21 = &VAR_15->pm_l0[VAR_22];
  FUNC_10(VAR_21, FUNC_6(VAR_18) | VAR_2);
 } else if (VAR_16 >= VAR_9) {
  vm_pindex_t VAR_23, VAR_24;
  pd_entry_t *VAR_25, *VAR_26;
  pd_entry_t VAR_27;

  VAR_24 = VAR_16 - VAR_9;
  VAR_23 = VAR_24 >> VAR_1;

  VAR_25 = &VAR_15->pm_l0[VAR_23];
  VAR_27 = FUNC_8(VAR_25);
  if (VAR_27 == 0) {

   if (FUNC_16(VAR_15, VAR_9 + VAR_8 + VAR_23,
       VAR_17) == ((void*)0)) {
    FUNC_14(VAR_18);
    FUNC_13(VAR_18);
    return (((void*)0));
   }
  } else {
   VAR_19 = FUNC_1(VAR_27 & ~VAR_0);
   VAR_19->ref_count++;
  }

  VAR_26 = (pd_entry_t *)FUNC_0(FUNC_8(VAR_25) & ~VAR_0);
  VAR_26 = &VAR_26[VAR_16 & VAR_5];
  FUNC_10(VAR_26, FUNC_6(VAR_18) | VAR_3);
 } else {
  vm_pindex_t VAR_28, VAR_29;
  pd_entry_t *VAR_30, *VAR_31, *VAR_32;
  pd_entry_t VAR_33, VAR_34;

  VAR_29 = VAR_16 >> VAR_6;
  VAR_28 = VAR_29 >> VAR_1;

  VAR_30 = &VAR_15->pm_l0[VAR_28];
  VAR_33 = FUNC_8(VAR_30);
  if (VAR_33 == 0) {

   if (FUNC_16(VAR_15, VAR_9 + VAR_29,
       VAR_17) == ((void*)0)) {
    FUNC_14(VAR_18);
    FUNC_13(VAR_18);
    return (((void*)0));
   }
   VAR_33 = FUNC_8(VAR_30);
   VAR_31 = (pd_entry_t *)FUNC_0(VAR_33 & ~VAR_0);
   VAR_31 = &VAR_31[VAR_29 & VAR_5];
  } else {
   VAR_31 = (pd_entry_t *)FUNC_0(VAR_33 & ~VAR_0);
   VAR_31 = &VAR_31[VAR_29 & VAR_5];
   VAR_34 = FUNC_8(VAR_31);
   if (VAR_34 == 0) {

    if (FUNC_16(VAR_15, VAR_9 + VAR_29,
        VAR_17) == ((void*)0)) {
     FUNC_14(VAR_18);
     FUNC_13(VAR_18);
     return (((void*)0));
    }
   } else {
    VAR_20 = FUNC_1(VAR_34 & ~VAR_0);
    VAR_20->ref_count++;
   }
  }

  VAR_32 = (pd_entry_t *)FUNC_0(FUNC_8(VAR_31) & ~VAR_0);
  VAR_32 = &VAR_32[VAR_16 & VAR_5];
  FUNC_10(VAR_32, FUNC_6(VAR_18) | VAR_4);
 }

 FUNC_9(VAR_15, 1);

 return (VAR_18);
}
