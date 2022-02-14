
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_7__ {int kernbase; int pmapsize; int dmapbase; int dmapend; } ;
struct vmstate {TYPE_1__ hdr; } ;
typedef int pde ;
typedef int off_t ;
struct TYPE_8__ {int program; int pmfd; struct vmstate* vmst; } ;
typedef TYPE_2__ kvm_t ;
typedef int kvaddr_t ;
typedef int amd64_pte_t ;
typedef int amd64_physaddr_t ;
typedef int amd64_pde_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int ,char*,...) ;
 int FUNC_2 (TYPE_2__*,int,scalar_t__) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int**,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_5(kvm_t *VAR_10, kvaddr_t VAR_11, off_t *VAR_12)
{
 amd64_pte_t VAR_13[VAR_0];
 struct vmstate *VAR_14;
 amd64_physaddr_t VAR_15;
 amd64_pde_t VAR_16;
 amd64_pte_t VAR_17;
 kvaddr_t VAR_18;
 kvaddr_t VAR_19;
 amd64_physaddr_t VAR_20;
 off_t VAR_21;

 VAR_14 = VAR_10->vmst;
 VAR_15 = VAR_11 & VAR_1;

 if (VAR_11 >= VAR_14->hdr.kernbase) {
  VAR_19 = (VAR_11 - VAR_14->hdr.kernbase) >> VAR_5;
  if (VAR_19 >= VAR_14->hdr.pmapsize / sizeof(VAR_16))
   goto invalid;
  VAR_16 = FUNC_0(VAR_10, VAR_19);
  if ((VAR_16 & VAR_9) == 0) {
   FUNC_1(VAR_10, VAR_10->program,
       "_amd64_minidump_vatop: pde not valid");
   goto invalid;
  }
  if ((VAR_16 & VAR_7) == 0) {
   VAR_20 = VAR_16 & VAR_6;

   VAR_21 = FUNC_2(VAR_10, VAR_20, VAR_3);
   if (VAR_21 == -1) {
    FUNC_1(VAR_10, VAR_10->program,
        "cannot find page table entry for %ju",
        (uintmax_t)VAR_20);
    goto invalid;
   }
   if (FUNC_4(VAR_10->pmfd, &VAR_13, VAR_3, VAR_21) !=
       VAR_3) {
    FUNC_1(VAR_10, VAR_10->program,
        "cannot read page table entry for %ju",
        (uintmax_t)VAR_20);
    goto invalid;
   }
   VAR_18 = (VAR_11 >> VAR_2) &
       (VAR_0 - 1);
   VAR_17 = FUNC_3(VAR_13[VAR_18]);
   if ((VAR_17 & VAR_9) == 0) {
    FUNC_1(VAR_10, VAR_10->program,
        "_amd64_minidump_vatop: pte not valid");
    goto invalid;
   }
   VAR_20 = VAR_17 & VAR_6;
  } else {
   VAR_20 = VAR_16 & VAR_8;
   VAR_20 += (VAR_11 & VAR_4) ^ VAR_15;
  }
  VAR_21 = FUNC_2(VAR_10, VAR_20, VAR_3);
  if (VAR_21 == -1) {
   FUNC_1(VAR_10, VAR_10->program,
     "_amd64_minidump_vatop: physical address 0x%jx not in minidump",
       (uintmax_t)VAR_20);
   goto invalid;
  }
  *VAR_12 = VAR_21 + VAR_15;
  return (VAR_3 - VAR_15);
 } else if (VAR_11 >= VAR_14->hdr.dmapbase && VAR_11 < VAR_14->hdr.dmapend) {
  VAR_20 = (VAR_11 - VAR_14->hdr.dmapbase) & ~VAR_1;
  VAR_21 = FUNC_2(VAR_10, VAR_20, VAR_3);
  if (VAR_21 == -1) {
   FUNC_1(VAR_10, VAR_10->program,
     "_amd64_minidump_vatop: direct map address 0x%jx not in minidump",
       (uintmax_t)VAR_11);
   goto invalid;
  }
  *VAR_12 = VAR_21 + VAR_15;
  return (VAR_3 - VAR_15);
 } else {
  FUNC_1(VAR_10, VAR_10->program,
     "_amd64_minidump_vatop: virtual address 0x%jx not minidumped",
      (uintmax_t)VAR_11);
  goto invalid;
 }

invalid:
 FUNC_1(VAR_10, 0, "invalid address (0x%jx)", (uintmax_t)VAR_11);
 return (0);
}
