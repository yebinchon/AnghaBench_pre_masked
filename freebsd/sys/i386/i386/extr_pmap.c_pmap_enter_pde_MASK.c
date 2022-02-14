
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int * vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef int u_int ;
struct spglist {int dummy; } ;
typedef TYPE_2__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_14__ {size_t wired_count; size_t resident_count; } ;
struct TYPE_15__ {TYPE_1__ pm_stats; } ;


 int FUNC_0 (int ,char*,scalar_t__,TYPE_2__*) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * FUNC_2 (int) ;
 int VAR_16 ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int VAR_17 ;
 int FUNC_4 (struct spglist*) ;
 TYPE_2__* VAR_18 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int*,int) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int *,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,scalar_t__,int) ;
 int* FUNC_10 (TYPE_2__*,scalar_t__) ;
 int VAR_19 ;
 int FUNC_11 (TYPE_2__*,scalar_t__,int,int) ;
 int FUNC_12 (TYPE_2__*,int*,scalar_t__,struct spglist*) ;
 scalar_t__ FUNC_13 (TYPE_2__*,scalar_t__,scalar_t__,struct spglist*) ;
 int VAR_20 ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (struct spglist*,int) ;

__attribute__((used)) static int
FUNC_17(pmap_t VAR_21, vm_offset_t VAR_22, pd_entry_t VAR_23, u_int VAR_24,
    vm_page_t VAR_25)
{
 struct spglist VAR_26;
 pd_entry_t VAR_27, *VAR_28;
 vm_page_t VAR_29;

 FUNC_14(&VAR_20, VAR_17);
 FUNC_1((VAR_23 & (VAR_10 | VAR_13)) != VAR_13,
     ("pmap_enter_pde: newpde is missing PG_M"));
 FUNC_1(VAR_21 == VAR_18 || (VAR_23 & VAR_15) == 0,
     ("pmap_enter_pde: cannot create wired user mapping"));
 FUNC_3(VAR_21, VAR_4);
 VAR_28 = FUNC_10(VAR_21, VAR_22);
 VAR_27 = *VAR_28;
 if ((VAR_27 & VAR_14) != 0) {
  if ((VAR_24 & VAR_16) != 0) {
   FUNC_0(VAR_3, "pmap_enter_pde: failure for va %#lx"
       " in pmap %p", VAR_22, VAR_21);
   return (VAR_0);
  }

  FUNC_4(&VAR_26);
  if ((VAR_27 & VAR_12) != 0) {




   (void)FUNC_12(VAR_21, VAR_28, VAR_22, &VAR_26);
   if ((VAR_27 & VAR_9) == 0)
    FUNC_9(VAR_21, VAR_22, VAR_27);
  } else {
   if (FUNC_13(VAR_21, VAR_22, VAR_22 + VAR_5, &VAR_26))
                 FUNC_8(VAR_21);
  }
  FUNC_16(&VAR_26, 1);
  if (VAR_21 == VAR_18) {




   VAR_29 = FUNC_2(*VAR_28 & VAR_8);
   if (FUNC_7(VAR_21, VAR_29, 0))
    FUNC_5("pmap_enter_pde: trie insert failed");
  } else
   FUNC_1(*VAR_28 == 0, ("pmap_enter_pde: non-zero pde %p",
       VAR_28));
 }
 if ((VAR_23 & VAR_11) != 0) {



  if (!FUNC_11(VAR_21, VAR_22, VAR_23, VAR_24)) {
   FUNC_0(VAR_3, "pmap_enter_pde: failure for va %#lx"
       " in pmap %p", VAR_22, VAR_21);
   return (VAR_1);
  }
  if ((VAR_23 & VAR_13) != 0) {
   for (VAR_29 = VAR_25; VAR_29 < &VAR_25[VAR_5 / VAR_6]; VAR_29++)
    FUNC_15(VAR_29, VAR_7);
  }
 }




 if ((VAR_23 & VAR_15) != 0)
  VAR_21->pm_stats.wired_count += VAR_5 / VAR_6;
 VAR_21->pm_stats.resident_count += VAR_5 / VAR_6;





 FUNC_6(VAR_28, VAR_23);

 VAR_19++;
 FUNC_0(VAR_3, "pmap_enter_pde: success for va %#lx"
     " in pmap %p", VAR_22, VAR_21);
 return (VAR_2);
}
