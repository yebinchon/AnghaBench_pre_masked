
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int vm_offset_t ;
struct spglist {int dummy; } ;
struct rwlock {int dummy; } ;
typedef int pt_entry_t ;
typedef int pml4_entry_t ;
typedef TYPE_2__* pmap_t ;
typedef int pdp_entry_t ;
typedef int pd_entry_t ;
struct TYPE_16__ {scalar_t__ resident_count; } ;
struct TYPE_17__ {TYPE_1__ pm_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_2 (struct spglist*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,int*,int,struct rwlock**) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int* FUNC_8 (TYPE_2__*,int) ;
 int* FUNC_9 (int*,int) ;
 int FUNC_10 (TYPE_2__*,int,int) ;
 int* FUNC_11 (TYPE_2__*,int) ;
 int* FUNC_12 (int*,int) ;
 int FUNC_13 (TYPE_2__*,int,int*,struct spglist*) ;
 int FUNC_14 (TYPE_2__*,int*,int,struct spglist*,struct rwlock**) ;
 scalar_t__ FUNC_15 (TYPE_2__*,int,int,int*,struct spglist*,struct rwlock**) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (struct rwlock*) ;
 int FUNC_18 (struct spglist*,int) ;

void
FUNC_19(pmap_t VAR_8, vm_offset_t VAR_9, vm_offset_t VAR_10)
{
 struct rwlock *VAR_11;
 vm_offset_t VAR_12;
 pml4_entry_t *VAR_13;
 pdp_entry_t *VAR_14;
 pd_entry_t VAR_15, *VAR_16;
 pt_entry_t VAR_17, VAR_18;
 struct spglist VAR_19;
 int VAR_20;

 VAR_17 = FUNC_6(VAR_8);
 VAR_18 = FUNC_16(VAR_8);




 if (VAR_8->pm_stats.resident_count == 0)
  return;

 VAR_20 = 0;
 FUNC_2(&VAR_19);

 FUNC_4();
 FUNC_0(VAR_8);
 FUNC_10(VAR_8, VAR_9, VAR_10);






 if (VAR_9 + VAR_3 == VAR_10) {
  VAR_16 = FUNC_8(VAR_8, VAR_9);
  if (VAR_16 && (*VAR_16 & VAR_6) == 0) {
   FUNC_13(VAR_8, VAR_9, VAR_16, &VAR_19);
   goto out;
  }
 }

 VAR_11 = ((void*)0);
 for (; VAR_9 < VAR_10; VAR_9 = VAR_12) {

  if (VAR_8->pm_stats.resident_count == 0)
   break;

  VAR_13 = FUNC_11(VAR_8, VAR_9);
  if ((*VAR_13 & VAR_18) == 0) {
   VAR_12 = (VAR_9 + VAR_2) & ~VAR_7;
   if (VAR_12 < VAR_9)
    VAR_12 = VAR_10;
   continue;
  }

  VAR_14 = FUNC_12(VAR_13, VAR_9);
  if ((*VAR_14 & VAR_18) == 0) {
   VAR_12 = (VAR_9 + VAR_0) & ~VAR_4;
   if (VAR_12 < VAR_9)
    VAR_12 = VAR_10;
   continue;
  }




  VAR_12 = (VAR_9 + VAR_1) & ~VAR_5;
  if (VAR_12 < VAR_9)
   VAR_12 = VAR_10;

  VAR_16 = FUNC_9(VAR_14, VAR_9);
  VAR_15 = *VAR_16;




  if (VAR_15 == 0)
   continue;




  if ((VAR_15 & VAR_6) != 0) {




   if (VAR_9 + VAR_1 == VAR_12 && VAR_10 >= VAR_12) {




    if ((VAR_15 & VAR_17) == 0)
     VAR_20 = 1;
    FUNC_14(VAR_8, VAR_16, VAR_9, &VAR_19, &VAR_11);
    continue;
   } else if (!FUNC_5(VAR_8, VAR_16, VAR_9,
       &VAR_11)) {

    continue;
   } else
    VAR_15 = *VAR_16;
  }






  if (VAR_12 > VAR_10)
   VAR_12 = VAR_10;

  if (FUNC_15(VAR_8, VAR_9, VAR_12, VAR_16, &VAR_19, &VAR_11))
   VAR_20 = 1;
 }
 if (VAR_11 != ((void*)0))
  FUNC_17(VAR_11);
out:
 if (VAR_20)
  FUNC_7(VAR_8);
 FUNC_1(VAR_8);
 FUNC_3();
 FUNC_18(&VAR_19, 1);
}
