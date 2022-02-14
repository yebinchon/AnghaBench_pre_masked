
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_7__ {scalar_t__ dmapbase; scalar_t__ dmapend; scalar_t__ dmapphys; scalar_t__ kernbase; int pmapsize; } ;
struct vmstate {TYPE_1__ hdr; } ;
typedef scalar_t__ riscv_pt_entry_t ;
typedef int riscv_physaddr_t ;
typedef int off_t ;
typedef int l3 ;
struct TYPE_8__ {int program; struct vmstate* vmst; } ;
typedef TYPE_2__ kvm_t ;
typedef scalar_t__ kvaddr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_2__*,int ,char*,...) ;
 int FUNC_1 (TYPE_2__*,int,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(kvm_t *VAR_6, kvaddr_t VAR_7, off_t *VAR_8)
{
 struct vmstate *VAR_9;
 riscv_physaddr_t VAR_10;
 riscv_pt_entry_t VAR_11;
 kvaddr_t VAR_12;
 riscv_physaddr_t VAR_13;
 off_t VAR_14;

 VAR_9 = VAR_6->vmst;
 VAR_10 = VAR_7 & VAR_1;

 if (VAR_7 >= VAR_9->hdr.dmapbase && VAR_7 < VAR_9->hdr.dmapend) {
  VAR_13 = (VAR_7 - VAR_9->hdr.dmapbase + VAR_9->hdr.dmapphys) &
      ~VAR_1;
  VAR_14 = FUNC_1(VAR_6, VAR_13, VAR_2);
  if (VAR_14 == -1) {
   FUNC_0(VAR_6, VAR_6->program, "_riscv_minidump_vatop: "
       "direct map address 0x%jx not in minidump",
       (uintmax_t)VAR_7);
   goto invalid;
  }
  *VAR_8 = VAR_14 + VAR_10;
  return (VAR_2 - VAR_10);
 } else if (VAR_7 >= VAR_9->hdr.kernbase) {
  VAR_12 = (VAR_7 - VAR_9->hdr.kernbase) >> VAR_0;
  if (VAR_12 >= VAR_9->hdr.pmapsize / sizeof(VAR_11))
   goto invalid;
  VAR_11 = FUNC_2(VAR_6, VAR_12);
  if ((VAR_11 & VAR_5) == 0 || (VAR_11 & VAR_4) == 0) {
   FUNC_0(VAR_6, VAR_6->program,
       "_riscv_minidump_vatop: pte not valid");
   goto invalid;
  }
  VAR_13 = (VAR_11 >> VAR_3) << VAR_0;
  VAR_14 = FUNC_1(VAR_6, VAR_13, VAR_2);
  if (VAR_14 == -1) {
   FUNC_0(VAR_6, VAR_6->program, "_riscv_minidump_vatop: "
       "physical address 0x%jx not in minidump",
       (uintmax_t)VAR_13);
   goto invalid;
  }
  *VAR_8 = VAR_14 + VAR_10;
  return (VAR_2 - VAR_10);
 } else {
  FUNC_0(VAR_6, VAR_6->program,
     "_riscv_minidump_vatop: virtual address 0x%jx not minidumped",
      (uintmax_t)VAR_7);
  goto invalid;
 }

invalid:
 FUNC_0(VAR_6, 0, "invalid address (0x%jx)", (uintmax_t)VAR_7);
 return (0);
}
