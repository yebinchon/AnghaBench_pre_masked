
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vm_offset_t ;
struct spglist {int dummy; } ;
struct rwlock {int dummy; } ;
typedef int pt_entry_t ;
typedef TYPE_2__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_10__ {scalar_t__ resident_count; } ;
struct TYPE_11__ {TYPE_1__ pm_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct spglist*) ;
 int * FUNC_3 (TYPE_2__*,int *,int,struct rwlock**) ;
 int * FUNC_4 (TYPE_2__*,int) ;
 int * FUNC_5 (int *,int) ;
 int * FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,int *,int,int,struct spglist*,struct rwlock**) ;
 int FUNC_9 (TYPE_2__*,int,int,int,struct spglist*,struct rwlock**) ;
 int FUNC_10 (struct rwlock*) ;
 int FUNC_11 (struct spglist*,int) ;

void
FUNC_12(pmap_t VAR_9, vm_offset_t VAR_10, vm_offset_t VAR_11)
{
 struct rwlock *VAR_12;
 vm_offset_t VAR_13;
 pd_entry_t *VAR_14, *VAR_15, *VAR_16;
 pt_entry_t VAR_17;
 struct spglist VAR_18;




 if (VAR_9->pm_stats.resident_count == 0)
  return;

 FUNC_2(&VAR_18);

 FUNC_0(VAR_9);

 VAR_12 = ((void*)0);
 for (; VAR_10 < VAR_11; VAR_10 = VAR_13) {

  if (VAR_9->pm_stats.resident_count == 0)
   break;

  VAR_14 = FUNC_4(VAR_9, VAR_10);
  if (FUNC_7(VAR_14) == 0) {
   VAR_13 = (VAR_10 + VAR_2) & ~VAR_1;
   if (VAR_13 < VAR_10)
    VAR_13 = VAR_11;
   continue;
  }

  VAR_15 = FUNC_5(VAR_14, VAR_10);
  if (FUNC_7(VAR_15) == 0) {
   VAR_13 = (VAR_10 + VAR_4) & ~VAR_3;
   if (VAR_13 < VAR_10)
    VAR_13 = VAR_11;
   continue;
  }




  VAR_13 = (VAR_10 + VAR_7) & ~VAR_6;
  if (VAR_13 < VAR_10)
   VAR_13 = VAR_11;

  VAR_16 = FUNC_6(VAR_15, VAR_10);
  if (VAR_16 == ((void*)0))
   continue;

  VAR_17 = FUNC_7(VAR_16);

  if ((VAR_17 & VAR_0) == VAR_5) {
   if (VAR_10 + VAR_7 == VAR_13 && VAR_11 >= VAR_13) {
    FUNC_8(VAR_9, VAR_16, VAR_10, FUNC_7(VAR_15),
        &VAR_18, &VAR_12);
    continue;
   } else if (FUNC_3(VAR_9, VAR_16, VAR_10,
       &VAR_12) == ((void*)0))
    continue;
   VAR_17 = FUNC_7(VAR_16);
  }




  if ((VAR_17 & VAR_0) != VAR_8)
   continue;






  if (VAR_13 > VAR_11)
   VAR_13 = VAR_11;

  FUNC_9(VAR_9, VAR_17, VAR_10, VAR_13, &VAR_18,
      &VAR_12);
 }
 if (VAR_12 != ((void*)0))
  FUNC_10(VAR_12);
 FUNC_1(VAR_9);
 FUNC_11(&VAR_18, 1);
}
