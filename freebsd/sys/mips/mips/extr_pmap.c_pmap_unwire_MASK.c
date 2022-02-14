
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uintmax_t ;
typedef scalar_t__ pt_entry_t ;
typedef TYPE_2__* pmap_t ;
typedef int * pd_entry_t ;
struct TYPE_7__ {int wired_count; } ;
struct TYPE_8__ {TYPE_1__ pm_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,int ) ;
 scalar_t__* FUNC_3 (int **,int) ;
 int ** FUNC_4 (int **,int) ;
 int ** FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (scalar_t__*,int ) ;
 int FUNC_7 (scalar_t__*,int ) ;

void
FUNC_8(pmap_t VAR_7, vm_offset_t VAR_8, vm_offset_t VAR_9)
{
 pd_entry_t *VAR_10, *VAR_11;
 pt_entry_t *VAR_12;
 vm_offset_t VAR_13;

 FUNC_0(VAR_7);
 for (; VAR_8 < VAR_9; VAR_8 = VAR_13) {
  VAR_11 = FUNC_5(VAR_7, VAR_8);
  VAR_13 = (VAR_8 + VAR_0) & ~VAR_3;
  if (VAR_13 < VAR_8)
   VAR_13 = VAR_9;
  VAR_10 = FUNC_4(VAR_11, VAR_8);
  if (*VAR_10 == ((void*)0))
   continue;
  if (VAR_13 > VAR_9)
   VAR_13 = VAR_9;
  for (VAR_12 = FUNC_3(VAR_10, VAR_8); VAR_8 != VAR_13; VAR_12++,
      VAR_8 += VAR_2) {
   if (!FUNC_7(VAR_12, VAR_4))
    continue;
   if (!FUNC_7(VAR_12, VAR_5))
    FUNC_2("pmap_unwire: pte %#jx is missing PG_W",
        (uintmax_t)*VAR_12);
   FUNC_6(VAR_12, VAR_5);
   VAR_7->pm_stats.wired_count--;
  }
 }
 FUNC_1(VAR_7);
}
