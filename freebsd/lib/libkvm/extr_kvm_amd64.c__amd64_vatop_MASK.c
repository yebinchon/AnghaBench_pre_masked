
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uintmax_t ;
struct vmstate {int* PML4; } ;
typedef int pte ;
typedef int pdpe ;
typedef int pde ;
typedef int off_t ;
struct TYPE_6__ {int program; int pmfd; struct vmstate* vmst; } ;
typedef TYPE_1__ kvm_t ;
typedef int kvaddr_t ;
typedef int amd64_pte_t ;
typedef int amd64_pml4e_t ;
typedef int amd64_physaddr_t ;
typedef int amd64_pdpe_t ;
typedef int amd64_pde_t ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (TYPE_1__*,int ,char*,...) ;
 size_t FUNC_1 (TYPE_1__*,int,int *) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int*,int,int ) ;

__attribute__((used)) static int
FUNC_5(kvm_t *VAR_19, kvaddr_t VAR_20, off_t *VAR_21)
{
 struct vmstate *VAR_22;
 amd64_physaddr_t VAR_23;
 amd64_physaddr_t VAR_24;
 amd64_physaddr_t VAR_25;
 amd64_physaddr_t VAR_26;
 amd64_pml4e_t VAR_27;
 amd64_pdpe_t VAR_28;
 amd64_pde_t VAR_29;
 amd64_pte_t VAR_30;
 kvaddr_t VAR_31;
 kvaddr_t VAR_32;
 kvaddr_t VAR_33;
 kvaddr_t VAR_34;
 amd64_physaddr_t VAR_35;
 off_t VAR_36;
 size_t VAR_37;

 VAR_22 = VAR_19->vmst;
 VAR_23 = VAR_20 & VAR_6;





 if (VAR_22->PML4 == ((void*)0)) {
  VAR_37 = FUNC_1(VAR_19, VAR_20, VAR_21);
  if (VAR_37 == 0) {
   FUNC_0(VAR_19, VAR_19->program,
       "_amd64_vatop: bootstrap data not in dump");
   goto invalid;
  } else
   return (VAR_8 - VAR_23);
 }

 VAR_31 = (VAR_20 >> VAR_18) & (VAR_4 - 1);
 VAR_27 = FUNC_3(VAR_22->PML4[VAR_31]);
 if ((VAR_27 & VAR_17) == 0) {
  FUNC_0(VAR_19, VAR_19->program, "_amd64_vatop: pml4e not valid");
  goto invalid;
 }

 VAR_32 = (VAR_20 >> VAR_10) & (VAR_3 - 1);
 VAR_24 = (VAR_27 & VAR_14) + (VAR_32 * sizeof(amd64_pdpe_t));

 VAR_37 = FUNC_1(VAR_19, VAR_24, &VAR_36);
 if (VAR_37 < sizeof(VAR_28)) {
  FUNC_0(VAR_19, VAR_19->program, "_amd64_vatop: pdpe_pa not found");
  goto invalid;
 }
 if (FUNC_4(VAR_19->pmfd, &VAR_28, sizeof(VAR_28), VAR_36) != sizeof(VAR_28)) {
  FUNC_2(VAR_19, VAR_19->program, "_amd64_vatop: read pdpe");
  goto invalid;
 }
 VAR_28 = FUNC_3(VAR_28);
 if ((VAR_28 & VAR_17) == 0) {
  FUNC_0(VAR_19, VAR_19->program, "_amd64_vatop: pdpe not valid");
  goto invalid;
 }

 if (VAR_28 & VAR_15) {



  VAR_35 = (VAR_28 & VAR_13) + (VAR_20 & VAR_9);
  VAR_37 = FUNC_1(VAR_19, VAR_35, VAR_21);
  if (VAR_37 == 0) {
   FUNC_0(VAR_19, VAR_19->program,
       "_amd64_vatop: 1GB page address not in dump");
   goto invalid;
  } else
   return (VAR_0 - (VAR_20 & VAR_9));
 }

 VAR_33 = (VAR_20 >> VAR_12) & (VAR_2 - 1);
 VAR_25 = (VAR_28 & VAR_14) + (VAR_33 * sizeof(amd64_pde_t));

 VAR_37 = FUNC_1(VAR_19, VAR_25, &VAR_36);
 if (VAR_37 < sizeof(VAR_29)) {
  FUNC_2(VAR_19, VAR_19->program, "_amd64_vatop: pde_pa not found");
  goto invalid;
 }
 if (FUNC_4(VAR_19->pmfd, &VAR_29, sizeof(VAR_29), VAR_36) != sizeof(VAR_29)) {
  FUNC_2(VAR_19, VAR_19->program, "_amd64_vatop: read pde");
  goto invalid;
 }
 VAR_29 = FUNC_3(VAR_29);
 if ((VAR_29 & VAR_17) == 0) {
  FUNC_0(VAR_19, VAR_19->program, "_amd64_vatop: pde not valid");
  goto invalid;
 }

 if (VAR_29 & VAR_15) {



  VAR_35 = (VAR_29 & VAR_16) + (VAR_20 & VAR_11);
  VAR_37 = FUNC_1(VAR_19, VAR_35, VAR_21);
  if (VAR_37 == 0) {
   FUNC_0(VAR_19, VAR_19->program,
       "_amd64_vatop: 2MB page address not in dump");
   goto invalid;
  } else
   return (VAR_1 - (VAR_20 & VAR_11));
 }

 VAR_34 = (VAR_20 >> VAR_7) & (VAR_5 - 1);
 VAR_26 = (VAR_29 & VAR_14) + (VAR_34 * sizeof(amd64_pte_t));

 VAR_37 = FUNC_1(VAR_19, VAR_26, &VAR_36);
 if (VAR_37 < sizeof(VAR_30)) {
  FUNC_0(VAR_19, VAR_19->program, "_amd64_vatop: pte_pa not found");
  goto invalid;
 }
 if (FUNC_4(VAR_19->pmfd, &VAR_30, sizeof(VAR_30), VAR_36) != sizeof(VAR_30)) {
  FUNC_2(VAR_19, VAR_19->program, "_amd64_vatop: read");
  goto invalid;
 }
 if ((VAR_30 & VAR_17) == 0) {
  FUNC_0(VAR_19, VAR_19->program, "_amd64_vatop: pte not valid");
  goto invalid;
 }

 VAR_35 = (VAR_30 & VAR_14) + VAR_23;
 VAR_37 = FUNC_1(VAR_19, VAR_35, VAR_21);
 if (VAR_37 == 0) {
  FUNC_0(VAR_19, VAR_19->program, "_amd64_vatop: address not in dump");
  goto invalid;
 } else
  return (VAR_8 - VAR_23);

invalid:
 FUNC_0(VAR_19, 0, "invalid address (0x%jx)", (uintmax_t)VAR_20);
 return (0);
}
