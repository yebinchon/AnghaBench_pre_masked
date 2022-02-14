
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uintmax_t ;
typedef int pt_entry_t ;
typedef int pml4_entry_t ;
typedef TYPE_2__* pmap_t ;
typedef int pdp_entry_t ;
typedef int pd_entry_t ;
struct TYPE_9__ {scalar_t__ wired_count; } ;
struct TYPE_10__ {TYPE_1__ pm_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_2__*,int*,int) ;
 int* FUNC_5 (int*,int) ;
 int* FUNC_6 (int*,int) ;
 int* FUNC_7 (TYPE_2__*,int) ;
 int* FUNC_8 (int*,int) ;
 int FUNC_9 (TYPE_2__*) ;

void
FUNC_10(pmap_t VAR_9, vm_offset_t VAR_10, vm_offset_t VAR_11)
{
 vm_offset_t VAR_12;
 pml4_entry_t *VAR_13;
 pdp_entry_t *VAR_14;
 pd_entry_t *VAR_15;
 pt_entry_t *VAR_16, VAR_17;

 VAR_17 = FUNC_9(VAR_9);
 FUNC_0(VAR_9);
 for (; VAR_10 < VAR_11; VAR_10 = VAR_12) {
  VAR_13 = FUNC_7(VAR_9, VAR_10);
  if ((*VAR_13 & VAR_17) == 0) {
   VAR_12 = (VAR_10 + VAR_2) & ~VAR_8;
   if (VAR_12 < VAR_10)
    VAR_12 = VAR_11;
   continue;
  }
  VAR_14 = FUNC_8(VAR_13, VAR_10);
  if ((*VAR_14 & VAR_17) == 0) {
   VAR_12 = (VAR_10 + VAR_0) & ~VAR_4;
   if (VAR_12 < VAR_10)
    VAR_12 = VAR_11;
   continue;
  }
  VAR_12 = (VAR_10 + VAR_1) & ~VAR_5;
  if (VAR_12 < VAR_10)
   VAR_12 = VAR_11;
  VAR_15 = FUNC_6(VAR_14, VAR_10);
  if ((*VAR_15 & VAR_17) == 0)
   continue;
  if ((*VAR_15 & VAR_6) != 0) {
   if ((*VAR_15 & VAR_7) == 0)
    FUNC_3("pmap_unwire: pde %#jx is missing PG_W",
        (uintmax_t)*VAR_15);





   if (VAR_10 + VAR_1 == VAR_12 && VAR_11 >= VAR_12) {
    FUNC_2(VAR_15, VAR_7);
    VAR_9->pm_stats.wired_count -= VAR_1 /
        VAR_3;
    continue;
   } else if (!FUNC_4(VAR_9, VAR_15, VAR_10))
    FUNC_3("pmap_unwire: demotion failed");
  }
  if (VAR_12 > VAR_11)
   VAR_12 = VAR_11;
  for (VAR_16 = FUNC_5(VAR_15, VAR_10); VAR_10 != VAR_12; VAR_16++,
      VAR_10 += VAR_3) {
   if ((*VAR_16 & VAR_17) == 0)
    continue;
   if ((*VAR_16 & VAR_7) == 0)
    FUNC_3("pmap_unwire: pte %#jx is missing PG_W",
        (uintmax_t)*VAR_16);






   FUNC_2(VAR_16, VAR_7);
   VAR_9->pm_stats.wired_count--;
  }
 }
 FUNC_1(VAR_9);
}
