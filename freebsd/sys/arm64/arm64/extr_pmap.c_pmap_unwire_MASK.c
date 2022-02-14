
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uintmax_t ;
typedef int pt_entry_t ;
typedef TYPE_2__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_8__ {scalar_t__ wired_count; } ;
struct TYPE_9__ {TYPE_1__ pm_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *,int) ;
 int * FUNC_5 (TYPE_2__*,int *,int) ;
 int * FUNC_6 (TYPE_2__*,int) ;
 int * FUNC_7 (int *,int) ;
 int * FUNC_8 (int *,int) ;
 int * FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;

void
FUNC_11(pmap_t VAR_12, vm_offset_t VAR_13, vm_offset_t VAR_14)
{
 vm_offset_t VAR_15;
 pd_entry_t *VAR_16, *VAR_17, *VAR_18;
 pt_entry_t *VAR_19;

 FUNC_1(VAR_12);
 for (; VAR_13 < VAR_14; VAR_13 = VAR_15) {
  VAR_16 = FUNC_6(VAR_12, VAR_13);
  if (FUNC_10(VAR_16) == 0) {
   VAR_15 = (VAR_13 + VAR_3) & ~VAR_2;
   if (VAR_15 < VAR_13)
    VAR_15 = VAR_14;
   continue;
  }

  VAR_17 = FUNC_7(VAR_16, VAR_13);
  if (FUNC_10(VAR_17) == 0) {
   VAR_15 = (VAR_13 + VAR_5) & ~VAR_4;
   if (VAR_15 < VAR_13)
    VAR_15 = VAR_14;
   continue;
  }

  VAR_15 = (VAR_13 + VAR_8) & ~VAR_7;
  if (VAR_15 < VAR_13)
   VAR_15 = VAR_14;

  VAR_18 = FUNC_8(VAR_17, VAR_13);
  if (FUNC_10(VAR_18) == 0)
   continue;

  if ((FUNC_10(VAR_18) & VAR_0) == VAR_6) {
   if ((FUNC_10(VAR_18) & VAR_1) == 0)
    FUNC_3("pmap_unwire: l2 %#jx is missing "
        "ATTR_SW_WIRED", (uintmax_t)FUNC_10(VAR_18));





   if (VAR_13 + VAR_8 == VAR_15 && VAR_14 >= VAR_15) {
    FUNC_4(VAR_18, VAR_1);
    VAR_12->pm_stats.wired_count -= VAR_8 /
        VAR_11;
    continue;
   } else if (FUNC_5(VAR_12, VAR_18, VAR_13) == ((void*)0))
    FUNC_3("pmap_unwire: demotion failed");
  }
  FUNC_0((FUNC_10(VAR_18) & VAR_0) == VAR_9,
      ("pmap_unwire: Invalid l2 entry after demotion"));

  if (VAR_15 > VAR_14)
   VAR_15 = VAR_14;
  for (VAR_19 = FUNC_9(VAR_18, VAR_13); VAR_13 != VAR_15; VAR_19++,
      VAR_13 += VAR_10) {
   if (FUNC_10(VAR_19) == 0)
    continue;
   if ((FUNC_10(VAR_19) & VAR_1) == 0)
    FUNC_3("pmap_unwire: l3 %#jx is missing "
        "ATTR_SW_WIRED", (uintmax_t)FUNC_10(VAR_19));






   FUNC_4(VAR_19, VAR_1);
   VAR_12->pm_stats.wired_count--;
  }
 }
 FUNC_2(VAR_12);
}
