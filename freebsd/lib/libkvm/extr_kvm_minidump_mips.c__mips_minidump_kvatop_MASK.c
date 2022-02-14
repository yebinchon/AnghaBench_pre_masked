
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int u_long ;
struct TYPE_11__ {int kernbase; int ptesize; } ;
struct vmstate {int pte_size; TYPE_2__ hdr; } ;
typedef int pte64 ;
typedef int pte32 ;
typedef int off_t ;
typedef int mips_physaddr_t ;
typedef int mips64_pte_t ;
typedef int mips32_pte_t ;
struct TYPE_10__ {scalar_t__* e_ident; } ;
struct TYPE_12__ {int program; TYPE_1__ nlehdr; struct vmstate* vmst; } ;
typedef TYPE_3__ kvm_t ;
typedef int kvaddr_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (TYPE_3__*,int ,char*,...) ;
 int FUNC_4 (TYPE_3__*,int,int) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,int) ;

__attribute__((used)) static int
FUNC_7(kvm_t *VAR_18, kvaddr_t VAR_19, off_t *VAR_20)
{
 struct vmstate *VAR_21;
 mips_physaddr_t VAR_22, VAR_23;
 kvaddr_t VAR_24;
 u_long VAR_25;
 off_t VAR_26;
 mips32_pte_t VAR_27;
 mips64_pte_t VAR_28;

 if (FUNC_0(VAR_18)) {
  FUNC_3(VAR_18, 0, "_mips_minidump_kvatop called in live kernel!");
  return (0);
 }

 VAR_22 = VAR_19 & VAR_11;

 VAR_19 &= ~VAR_11;

 VAR_21 = VAR_18->vmst;
 if (VAR_18->nlehdr.e_ident[VAR_0] == VAR_1) {
  if (VAR_19 >= VAR_17 && VAR_19 < VAR_15) {
   VAR_23 = VAR_19 & VAR_16;
   goto found;
  }
  if (VAR_19 >= VAR_7 && VAR_19 < VAR_6) {
   VAR_23 = VAR_19 & VAR_10;
   goto found;
  }
  if (VAR_19 >= VAR_9 && VAR_19 < VAR_8) {
   VAR_23 = VAR_19 & VAR_10;
   goto found;
  }
 } else {
  if (VAR_19 >= VAR_3 && VAR_19 < VAR_2) {
   VAR_23 = VAR_19 & VAR_10;
   goto found;
  }
  if (VAR_19 >= VAR_5 && VAR_19 < VAR_4) {
   VAR_23 = VAR_19 & VAR_10;
   goto found;
  }
 }
 if (VAR_19 >= VAR_21->hdr.kernbase) {
  VAR_24 = (VAR_19 - VAR_21->hdr.kernbase) >> VAR_12;
  if (VAR_21->pte_size == 64) {
   VAR_25 = VAR_24 < VAR_21->hdr.ptesize / sizeof(VAR_28);
   if (VAR_24 >= VAR_21->hdr.ptesize / sizeof(VAR_28))
    goto invalid;
   VAR_28 = FUNC_6(VAR_18, VAR_24);
   VAR_25 = VAR_28 & VAR_14;
   if (VAR_25)
    VAR_23 = FUNC_2(VAR_28);
  } else {
   if (VAR_24 >= VAR_21->hdr.ptesize / sizeof(VAR_27))
    goto invalid;
   VAR_27 = FUNC_5(VAR_18, VAR_24);
   VAR_25 = VAR_27 & VAR_14;
   if (VAR_25)
    VAR_23 = FUNC_1(VAR_27);
  }
  if (!VAR_25) {
   FUNC_3(VAR_18, VAR_18->program, "_mips_minidump_kvatop: pte "
       "not valid");
   goto invalid;
  }
 } else {
  FUNC_3(VAR_18, VAR_18->program, "_mips_minidump_kvatop: virtual "
      "address 0x%jx not minidumped", (uintmax_t)VAR_19);
  return (0);
 }

found:
 VAR_26 = FUNC_4(VAR_18, VAR_23, VAR_13);
 if (VAR_26 == -1) {
  FUNC_3(VAR_18, VAR_18->program, "_mips_minidump_kvatop: physical "
      "address 0x%jx not in minidump", (uintmax_t)VAR_23);
  goto invalid;
 }

 *VAR_20 = VAR_26 + VAR_22;
 return (VAR_13 - VAR_22);


invalid:
 FUNC_3(VAR_18, 0, "invalid address (0x%jx)", (uintmax_t)VAR_19);
 return (0);
}
