
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
struct l2_bucket {int* l2b_kva; } ;
typedef int pt_entry_t ;
typedef int pmap_t ;
typedef int boolean_t ;
struct TYPE_4__ {int pvh_attrs; } ;
struct TYPE_5__ {int oflags; TYPE_1__ md; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 struct l2_bucket* FUNC_6 (int ,int ) ;

int
FUNC_7(pmap_t VAR_8, vm_offset_t VAR_9, vm_paddr_t *VAR_10)
{
 struct l2_bucket *VAR_11;
 pt_entry_t *VAR_12, VAR_13;
 vm_paddr_t VAR_14;
 vm_page_t VAR_15;
 int VAR_16;
 boolean_t VAR_17;

 FUNC_1(VAR_8);
 VAR_11 = FUNC_6(VAR_8, VAR_9);
        if (VAR_11 == ((void*)0)) {
  FUNC_2(VAR_8);
  return (0);
        }
 VAR_12 = &VAR_11->l2b_kva[FUNC_3(VAR_9)];
 VAR_13 = *VAR_12;
 if (!FUNC_5(VAR_13)) {
  FUNC_2(VAR_8);
  return (0);
 }
 VAR_16 = VAR_1;
 if (VAR_13 & VAR_0)
  VAR_16 |= VAR_2 | VAR_3;
        VAR_17 = 0;
 VAR_14 = FUNC_4(VAR_13);
        VAR_15 = FUNC_0(VAR_14);
        if (VAR_15 != ((void*)0) && !(VAR_15->oflags & VAR_7))
                VAR_17 = 1;
 if (VAR_17) {
  if ((VAR_15->md.pvh_attrs & VAR_6) != 0)
   VAR_16 |= VAR_4 | VAR_5;
 }
 if ((VAR_16 & (VAR_3 | VAR_5)) !=
     (VAR_3 | VAR_5) && VAR_17) {
  *VAR_10 = VAR_14;
 }
 FUNC_2(VAR_8);
 return (VAR_16);
}
