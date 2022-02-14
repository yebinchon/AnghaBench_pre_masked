
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vmem_size_t ;
typedef int vmem_addr_t ;
typedef TYPE_1__* vm_page_t ;
typedef int u_long ;
struct pmap_preinit_mapping {scalar_t__ va; scalar_t__ pa; scalar_t__ sz; int mode; } ;
struct TYPE_14__ {int* pm_pml4; } ;
struct TYPE_13__ {int pvc_list; int pvc_lock; } ;
struct TYPE_12__ {int ref_count; scalar_t__ phys_addr; scalar_t__ pindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int,char*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_3 (scalar_t__) ;
 TYPE_1__* FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_5__*) ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int*) ;
 scalar_t__ VAR_28 ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_10 (int) ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 int VAR_40 ;
 TYPE_5__* VAR_41 ;
 int * VAR_42 ;
 int VAR_43 ;
 int FUNC_11 (int *,char*,int *,int ) ;
 int VAR_44 ;
 scalar_t__* VAR_45 ;
 int FUNC_12 (char*) ;
 int VAR_46 ;
 int VAR_47 ;
 int FUNC_13 () ;
 int FUNC_14 (int ,scalar_t__,int ) ;
 int FUNC_15 () ;
 int VAR_48 ;
 scalar_t__ FUNC_16 (TYPE_5__*,TYPE_1__*,int) ;
 TYPE_1__* FUNC_17 () ;
 scalar_t__ FUNC_18 (int ) ;
 struct pmap_preinit_mapping* VAR_49 ;
 int FUNC_19 (char*,...) ;
 scalar_t__ FUNC_20 (int) ;
 TYPE_3__* VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 scalar_t__ VAR_53 ;
 TYPE_1__* VAR_54 ;
 size_t VAR_55 ;
 int FUNC_21 (scalar_t__,scalar_t__) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int ,int ,int,int *) ;
 int * FUNC_24 (char*,int ,int,int ,int ,int) ;
 int VAR_56 ;

void
FUNC_25(void)
{
 struct pmap_preinit_mapping *VAR_57;
 vm_page_t VAR_58, VAR_59;
 int VAR_60, VAR_61, VAR_62, VAR_63;


 FUNC_21(0, VAR_34);


 if (VAR_53 == VAR_28 && VAR_38 == VAR_8 &&
     FUNC_0(VAR_37) == 0x6 && FUNC_1(VAR_37) == 0x55) {
  VAR_63 = 1;
  FUNC_8("hw.skz63_enable", &VAR_63);
  if (VAR_63 != 0) {
   if (VAR_34)
    FUNC_19("SKZ63: skipping 4M RAM starting "
        "at physical 1G\n");
   for (VAR_61 = 0; VAR_61 < FUNC_10(0x400000); VAR_61++) {
    VAR_62 = FUNC_21(0x40000000 +
        FUNC_20(VAR_61), VAR_9);
    if (!VAR_62 && VAR_34)
     FUNC_19("page at %#lx already used\n",
         0x40000000 + FUNC_20(VAR_61));
   }
  }
 }


 FUNC_13();





 FUNC_5(VAR_41);
 for (VAR_61 = 0; VAR_61 < VAR_44; VAR_61++) {
  VAR_59 = FUNC_4(VAR_12 + (VAR_61 << VAR_23));
  FUNC_2(VAR_59 >= VAR_54 &&
      VAR_59 < &VAR_54[VAR_55],
      ("pmap_init: page table page is out of range"));
  VAR_59->pindex = FUNC_18(VAR_10) + VAR_61;
  VAR_59->phys_addr = VAR_12 + (VAR_61 << VAR_23);
  VAR_59->ref_count = 1;





  if (VAR_61 << VAR_25 < VAR_11 &&
      FUNC_16(VAR_41, VAR_59, 0))
   FUNC_12("pmap_init: pmap_insert_pt_page failed");
 }
 FUNC_6(VAR_41);
 FUNC_22(VAR_44);
 if (VAR_53 != VAR_28 && (VAR_35 & VAR_7) == 0 &&
     (VAR_36 & (VAR_5 | VAR_4 | VAR_2 |
     VAR_3 | VAR_6)) == 0 && (VAR_33 & (VAR_1 |
     VAR_0)) == 0)
  VAR_56 = 1;




 FUNC_8("vm.pmap.pg_ps_enabled", &VAR_47);
 if (VAR_47) {
  FUNC_2(VAR_16 > 1 && VAR_45[1] == 0,
      ("pmap_init: can't assign to pagesizes[1]"));
  VAR_45[1] = VAR_21;
 }




 for (VAR_61 = 0; VAR_61 < VAR_26; VAR_61++) {
  FUNC_11(&VAR_50[VAR_61].pvc_lock, "pmap pv chunk list", ((void*)0), VAR_17);
  FUNC_7(&VAR_50[VAR_61].pvc_list);
 }
 FUNC_15();

 VAR_48 = 1;
 for (VAR_61 = 0; VAR_61 < VAR_27; VAR_61++) {
  VAR_57 = VAR_49 + VAR_61;
  if (VAR_57->va == 0)
   continue;

  if (VAR_57->pa < VAR_39 && VAR_57->pa + VAR_57->sz <= VAR_39) {
   (void)FUNC_14(FUNC_3(VAR_57->pa),
       VAR_57->sz, VAR_57->mode);
  }
  if (!VAR_34)
   continue;
  FUNC_19("PPIM %u: PA=%#lx, VA=%#lx, size=%#lx, mode=%#x\n", VAR_61,
      VAR_57->pa, VAR_57->va, VAR_57->sz, VAR_57->mode);
 }

 FUNC_11(&VAR_52, "qfrmlk", ((void*)0), VAR_18);
 VAR_60 = FUNC_23(VAR_40, VAR_24, VAR_19 | VAR_20,
     (vmem_addr_t *)&VAR_51);
 if (VAR_60 != 0)
  FUNC_12("qframe allocation failed");

 VAR_43 = 8;
 FUNC_8("vm.pmap.large_map_pml4_entries", &VAR_43);
 if (VAR_43 > VAR_14 - VAR_15 + 1)
  VAR_43 = VAR_14 - VAR_15 + 1;
 if (VAR_34)
  FUNC_19("pmap: large map %u PML4 slots (%lu GB)\n",
      VAR_43, (u_long)VAR_43 * (VAR_22 / 1024 / 1024 / 1024));
 if (VAR_43 != 0) {
  VAR_42 = FUNC_24("large", VAR_13,
      (vmem_size_t)VAR_43 * VAR_22, VAR_24, 0, VAR_20);
  if (VAR_42 == ((void*)0)) {
   FUNC_19("pmap: cannot create large map\n");
   VAR_43 = 0;
  }
  for (VAR_61 = 0; VAR_61 < VAR_43; VAR_61++) {
   VAR_58 = FUNC_17();
   VAR_41->pm_pml4[VAR_15 + VAR_61] = VAR_32 |
       VAR_31 | VAR_29 | VAR_30 | VAR_46 |
       FUNC_9(VAR_58);
  }
 }
}
