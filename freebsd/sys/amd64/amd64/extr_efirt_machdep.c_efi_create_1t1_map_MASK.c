
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uintmax_t ;
typedef int uint64_t ;
struct efi_md {int md_attr; int md_phys; int md_pages; int * md_virt; } ;
typedef int pt_entry_t ;
typedef int pml4_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_4 () ;
 int * FUNC_5 (int) ;
 int FUNC_6 () ;
 struct efi_md* FUNC_7 (struct efi_md*,int) ;
 int * VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int,...) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,int *,int ,int ,int ,int *) ;

bool
FUNC_14(struct efi_md *VAR_29, int VAR_30, int VAR_31)
{
 struct efi_md *VAR_32;
 pt_entry_t *VAR_33;
 vm_offset_t VAR_34;
 uint64_t VAR_35;
 int VAR_36, VAR_37, VAR_38;

 VAR_28 = FUNC_13(VAR_12, ((void*)0), FUNC_12(1 +
     VAR_11 + VAR_11 * VAR_10 + VAR_11 * VAR_10 * VAR_9),
     VAR_20, 0, ((void*)0));
 VAR_24 = 0;
 FUNC_1(VAR_28);
 VAR_26 = FUNC_4();
 FUNC_2(VAR_28);
 VAR_25 = (pml4_entry_t *)FUNC_0(FUNC_3(VAR_26));
 FUNC_9(VAR_26);

 for (VAR_37 = 0, VAR_32 = VAR_29; VAR_37 < VAR_30; VAR_37++, VAR_32 = FUNC_7(VAR_32,
     VAR_31)) {
  if ((VAR_32->md_attr & VAR_0) == 0)
   continue;
  if (VAR_32->md_virt != ((void*)0) && (uint64_t)VAR_32->md_virt != VAR_32->md_phys) {
   if (VAR_23)
    FUNC_10("EFI Runtime entry %d is mapped\n", VAR_37);
   goto fail;
  }
  if ((VAR_32->md_phys & VAR_6) != 0) {
   if (VAR_23)
    FUNC_10("EFI Runtime entry %d is not aligned\n",
        VAR_37);
   goto fail;
  }
  if (VAR_32->md_phys + VAR_32->md_pages * VAR_7 < VAR_32->md_phys ||
      VAR_32->md_phys + VAR_32->md_pages * VAR_7 >=
      VAR_14) {
   FUNC_10("EFI Runtime entry %d is not in mappable for RT:"
       "base %#016jx %#jx pages\n",
       VAR_37, (uintmax_t)VAR_32->md_phys,
       (uintmax_t)VAR_32->md_pages);
   goto fail;
  }
  if ((VAR_32->md_attr & VAR_2) != 0)
   VAR_38 = VAR_16;
  else if ((VAR_32->md_attr & VAR_5) != 0)
   VAR_38 = VAR_19;
  else if ((VAR_32->md_attr & VAR_3) != 0)
   VAR_38 = VAR_17;
  else if ((VAR_32->md_attr & VAR_4) != 0)
   VAR_38 = VAR_18;
  else if ((VAR_32->md_attr & VAR_1) != 0)
   VAR_38 = VAR_15;
  else {
   if (VAR_23)
    FUNC_10("EFI Runtime entry %d mapping "
        "attributes unsupported\n", VAR_37);
   VAR_38 = VAR_15;
  }
  VAR_36 = FUNC_8(VAR_27, VAR_38, VAR_8) | VAR_21 |
      VAR_22;
  FUNC_1(VAR_28);
  for (VAR_34 = VAR_32->md_phys, VAR_35 = 0; VAR_35 < VAR_32->md_pages; VAR_35++,
      VAR_34 += VAR_13) {
   VAR_33 = FUNC_5(VAR_34);
   FUNC_11(VAR_33, VAR_34 | VAR_36);
  }
  FUNC_2(VAR_28);
 }

 return (1);

fail:
 FUNC_6();
 return (0);
}
