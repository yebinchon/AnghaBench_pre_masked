
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uintmax_t ;
struct vmstate {scalar_t__ PTD; } ;
typedef int pte ;
typedef int pde ;
typedef int off_t ;
struct TYPE_6__ {int program; int pmfd; struct vmstate* vmst; } ;
typedef TYPE_1__ kvm_t ;
typedef size_t kvaddr_t ;
typedef int i386_pte_pae_t ;
typedef int i386_physaddr_pae_t ;
typedef int i386_pde_pae_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_1__*,int ,char*,...) ;
 size_t FUNC_1 (TYPE_1__*,int,int *) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int*,int,int ) ;

__attribute__((used)) static int
FUNC_5(kvm_t *VAR_11, kvaddr_t VAR_12, off_t *VAR_13)
{
 struct vmstate *VAR_14;
 i386_physaddr_pae_t VAR_15;
 i386_physaddr_pae_t VAR_16;
 i386_pde_pae_t VAR_17;
 i386_pte_pae_t VAR_18;
 kvaddr_t VAR_19;
 kvaddr_t VAR_20;
 size_t VAR_21;
 i386_physaddr_pae_t VAR_22;
 off_t VAR_23;
 i386_pde_pae_t *VAR_24;

 VAR_14 = VAR_11->vmst;
 VAR_24 = (i386_pde_pae_t *)VAR_14->PTD;
 VAR_15 = VAR_12 & VAR_2;





 if (VAR_24 == ((void*)0)) {
  VAR_21 = FUNC_1(VAR_11, VAR_12, VAR_13);
  if (VAR_21 == 0) {
   FUNC_0(VAR_11, VAR_11->program,
       "_i386_vatop_pae: bootstrap data not in dump");
   goto invalid;
  } else
   return (VAR_5 - VAR_15);
 }

 VAR_19 = VAR_12 >> VAR_6;
 VAR_17 = FUNC_3(VAR_24[VAR_19]);
 if ((VAR_17 & VAR_10) == 0) {
  FUNC_0(VAR_11, VAR_11->program, "_kvm_kvatop_pae: pde not valid");
  goto invalid;
 }

 if (VAR_17 & VAR_8) {





  VAR_15 = VAR_12 & VAR_3;
  VAR_22 = (VAR_17 & VAR_9) + VAR_15;
  VAR_21 = FUNC_1(VAR_11, VAR_22, VAR_13);
  if (VAR_21 == 0) {
   FUNC_0(VAR_11, VAR_11->program,
       "_i386_vatop: 2MB page address not in dump");
   goto invalid;
  }
  return (VAR_0 - VAR_15);
 }

 VAR_20 = (VAR_12 >> VAR_4) & (VAR_1 - 1);
 VAR_16 = (VAR_17 & VAR_7) + (VAR_20 * sizeof(VAR_17));

 VAR_21 = FUNC_1(VAR_11, VAR_16, &VAR_23);
 if (VAR_21 < sizeof(VAR_18)) {
  FUNC_0(VAR_11, VAR_11->program, "_i386_vatop_pae: pdpe_pa not found");
  goto invalid;
 }


 if (FUNC_4(VAR_11->pmfd, &VAR_18, sizeof(VAR_18), VAR_23) != sizeof(VAR_18)) {
  FUNC_2(VAR_11, VAR_11->program, "_i386_vatop_pae: read");
  goto invalid;
 }
 VAR_18 = FUNC_3(VAR_18);
 if ((VAR_18 & VAR_10) == 0) {
  FUNC_0(VAR_11, VAR_11->program, "_i386_vatop_pae: pte not valid");
  goto invalid;
 }

 VAR_22 = (VAR_18 & VAR_7) + VAR_15;
 VAR_21 = FUNC_1(VAR_11, VAR_22, VAR_13);
 if (VAR_21 == 0) {
  FUNC_0(VAR_11, VAR_11->program,
      "_i386_vatop_pae: address not in dump");
  goto invalid;
 } else
  return (VAR_5 - VAR_15);

invalid:
 FUNC_0(VAR_11, 0, "invalid address (0x%jx)", (uintmax_t)VAR_12);
 return (0);
}
