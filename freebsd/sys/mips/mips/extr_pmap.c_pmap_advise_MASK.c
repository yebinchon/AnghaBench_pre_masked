
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef scalar_t__ pd_entry_t ;
struct TYPE_5__ {int pv_flags; } ;
struct TYPE_6__ {TYPE_1__ md; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int) ;
 int * FUNC_5 (scalar_t__*,int) ;
 scalar_t__* FUNC_6 (scalar_t__*,int) ;
 scalar_t__* FUNC_7 (int ,int) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int VAR_11 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_2__*) ;

void
FUNC_13(pmap_t VAR_12, vm_offset_t VAR_13, vm_offset_t VAR_14, int VAR_15)
{
 pd_entry_t *VAR_16, *VAR_17;
 pt_entry_t *VAR_18;
 vm_offset_t VAR_19, VAR_20;
 vm_paddr_t VAR_21;
 vm_page_t VAR_22;

 if (VAR_15 != VAR_0 && VAR_15 != VAR_1)
  return;
 FUNC_10(&VAR_11);
 FUNC_1(VAR_12);
 for (; VAR_13 < VAR_14; VAR_13 = VAR_20) {
  VAR_17 = FUNC_7(VAR_12, VAR_13);
  VAR_20 = (VAR_13 + VAR_2) & ~VAR_5;
  if (VAR_20 < VAR_13)
   VAR_20 = VAR_14;

  VAR_16 = FUNC_6(VAR_17, VAR_13);
  if (*VAR_16 == ((void*)0))
   continue;






  if (VAR_20 > VAR_14)
   VAR_20 = VAR_14;

  VAR_19 = VAR_20;
  for (VAR_18 = FUNC_5(VAR_16, VAR_13); VAR_13 != VAR_20; VAR_18++,
      VAR_13 += VAR_4) {
   if (!FUNC_9(VAR_18, VAR_7 | VAR_8)) {
    if (VAR_19 != VAR_20) {
     FUNC_4(VAR_12, VAR_19, VAR_13);
     VAR_19 = VAR_20;
    }
    continue;
   }
   VAR_21 = FUNC_3(*VAR_18);
   VAR_22 = FUNC_0(VAR_21);
   VAR_22->md.pv_flags &= ~VAR_9;
   if (FUNC_9(VAR_18, VAR_6)) {
    if (VAR_15 == VAR_0) {





     FUNC_12(VAR_22);
    } else {
     FUNC_8(VAR_18, VAR_6);
     if (VAR_19 == VAR_20)
      VAR_19 = VAR_13;
    }
   } else {





    if (VAR_19 != VAR_20) {
     FUNC_4(VAR_12, VAR_19, VAR_13);
     VAR_19 = VAR_20;
    }
   }
  }
  if (VAR_19 != VAR_20)
   FUNC_4(VAR_12, VAR_19, VAR_13);
 }
 FUNC_11(&VAR_11);
 FUNC_2(VAR_12);
}
