
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef TYPE_2__* pmap_t ;
typedef scalar_t__ pd_entry_t ;
struct TYPE_10__ {scalar_t__ resident_count; } ;
struct TYPE_11__ {TYPE_1__ pm_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 int * FUNC_3 (scalar_t__*,int) ;
 scalar_t__* FUNC_4 (scalar_t__*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int *,int,scalar_t__) ;
 scalar_t__* FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (int *,int ) ;
 int VAR_6 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void
FUNC_11(pmap_t VAR_7, vm_offset_t VAR_8, vm_offset_t VAR_9)
{
 pd_entry_t *VAR_10, *VAR_11;
 pt_entry_t *VAR_12;
 vm_offset_t VAR_13, VAR_14;




 if (VAR_7->pm_stats.resident_count == 0)
  return;

 FUNC_9(&VAR_6);
 FUNC_0(VAR_7);





 if ((VAR_8 + VAR_2) == VAR_9) {
  FUNC_5(VAR_7, VAR_8);
  goto out;
 }
 for (; VAR_8 < VAR_9; VAR_8 = VAR_14) {
  VAR_11 = FUNC_7(VAR_7, VAR_8);
  VAR_14 = (VAR_8 + VAR_0) & ~VAR_3;
  if (VAR_14 < VAR_8)
   VAR_14 = VAR_9;

  VAR_10 = FUNC_4(VAR_11, VAR_8);
  if (*VAR_10 == ((void*)0))
   continue;






  if (VAR_14 > VAR_9)
   VAR_14 = VAR_9;

  VAR_13 = VAR_14;
  for (VAR_12 = FUNC_3(VAR_10, VAR_8); VAR_8 != VAR_14; VAR_12++,
      VAR_8 += VAR_2) {
   if (!FUNC_8(VAR_12, VAR_4)) {
    if (VAR_13 != VAR_14) {
     FUNC_2(VAR_7, VAR_13, VAR_8);
     VAR_13 = VAR_14;
    }
    continue;
   }
   if (VAR_13 == VAR_14)
    VAR_13 = VAR_8;
   if (FUNC_6(VAR_7, VAR_12, VAR_8, *VAR_10)) {
    VAR_8 += VAR_2;
    break;
   }
  }
  if (VAR_13 != VAR_14)
   FUNC_2(VAR_7, VAR_13, VAR_8);
 }
out:
 FUNC_10(&VAR_6);
 FUNC_1(VAR_7);
}
