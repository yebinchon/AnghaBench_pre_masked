
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uintmax_t ;
struct TYPE_8__ {scalar_t__ kernbase; int ptesize; scalar_t__ mmuformat; } ;
struct vmstate {TYPE_1__ hdr; } ;
typedef int pte ;
typedef int off_t ;
struct TYPE_9__ {int program; struct vmstate* vmst; } ;
typedef TYPE_2__ kvm_t ;
typedef scalar_t__ kvaddr_t ;
typedef scalar_t__ arm_pt_entry_t ;
typedef int arm_physaddr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ,char*,...) ;
 int FUNC_3 (TYPE_2__*,int,int) ;

__attribute__((used)) static int
FUNC_4(kvm_t *VAR_11, kvaddr_t VAR_12, off_t *VAR_13)
{
 struct vmstate *VAR_14;
 arm_pt_entry_t VAR_15;
 arm_physaddr_t VAR_16, VAR_17;
 kvaddr_t VAR_18;
 off_t VAR_19;

 if (FUNC_0(VAR_11)) {
  FUNC_2(VAR_11, 0, "_arm_minidump_kvatop called in live kernel!");
  return (0);
 }

 VAR_14 = VAR_11->vmst;

 if (VAR_12 >= VAR_14->hdr.kernbase) {
  VAR_18 = (VAR_12 - VAR_14->hdr.kernbase) >> VAR_8;
  if (VAR_18 >= VAR_14->hdr.ptesize / sizeof(VAR_15))
   goto invalid;
  VAR_15 = FUNC_1(VAR_11, VAR_18);
  if ((VAR_15 & VAR_6) == VAR_4) {
   FUNC_2(VAR_11, VAR_11->program,
       "_arm_minidump_kvatop: pte not valid");
   goto invalid;
  }
  if ((VAR_15 & VAR_6) == VAR_5) {

   VAR_16 = VAR_12 & VAR_3;
   VAR_17 = (VAR_15 & VAR_0) +
       (VAR_12 & VAR_1 & VAR_2);
  } else {
   if (VAR_11->vmst->hdr.mmuformat == VAR_10 &&
       (VAR_15 & VAR_6) == VAR_7) {
    FUNC_2(VAR_11, VAR_11->program,
        "_arm_minidump_kvatop: pte not supported");
    goto invalid;
   }

   VAR_16 = VAR_12 & VAR_3;
   VAR_17 = VAR_15 & VAR_2;
  }

  VAR_19 = FUNC_3(VAR_11, VAR_17, VAR_9);
  if (VAR_19 == -1) {
   FUNC_2(VAR_11, VAR_11->program, "_arm_minidump_kvatop: "
       "physical address 0x%jx not in minidump",
       (uintmax_t)VAR_17);
   goto invalid;
  }

  *VAR_13 = VAR_19 + VAR_16;
  return (VAR_9 - VAR_16);
 } else
  FUNC_2(VAR_11, VAR_11->program, "_arm_minidump_kvatop: virtual "
      "address 0x%jx not minidumped", (uintmax_t)VAR_12);

invalid:
 FUNC_2(VAR_11, 0, "invalid address (0x%jx)", (uintmax_t)VAR_12);
 return (0);
}
