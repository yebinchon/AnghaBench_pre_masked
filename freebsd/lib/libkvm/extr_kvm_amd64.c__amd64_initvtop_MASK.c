
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct vmstate {scalar_t__* PML4; int phdr; int phnum; } ;
struct kvm_nlist {char* n_name; scalar_t__ n_value; } ;
typedef int pa ;
struct TYPE_8__ {scalar_t__ rawdump; struct vmstate* vmst; int program; } ;
typedef TYPE_1__ kvm_t ;
typedef scalar_t__ kvaddr_t ;
typedef scalar_t__ amd64_pml4e_t ;
typedef scalar_t__ amd64_physaddr_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 scalar_t__* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,struct kvm_nlist*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,scalar_t__*,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static int
FUNC_7(kvm_t *VAR_1)
{
 struct kvm_nlist VAR_2[2];
 amd64_physaddr_t VAR_3;
 kvaddr_t VAR_4;
 amd64_pml4e_t *VAR_5;

 VAR_1->vmst = (struct vmstate *)FUNC_1(VAR_1, sizeof(*VAR_1->vmst));
 if (VAR_1->vmst == ((void*)0)) {
  FUNC_0(VAR_1, VAR_1->program, "cannot allocate vm");
  return (-1);
 }
 VAR_1->vmst->PML4 = 0;

 if (VAR_1->rawdump == 0) {
  if (FUNC_2(VAR_1, &VAR_1->vmst->phnum,
      &VAR_1->vmst->phdr) == -1)
   return (-1);
 }

 VAR_2[0].n_name = "kernbase";
 VAR_2[1].n_name = 0;

 if (FUNC_4(VAR_1, VAR_2) != 0) {
  FUNC_0(VAR_1, VAR_1->program, "bad namelist - no kernbase");
  return (-1);
 }
 VAR_4 = VAR_2[0].n_value;

 VAR_2[0].n_name = "KPML4phys";
 VAR_2[1].n_name = 0;

 if (FUNC_4(VAR_1, VAR_2) != 0) {
  FUNC_0(VAR_1, VAR_1->program, "bad namelist - no KPML4phys");
  return (-1);
 }
 if (FUNC_5(VAR_1, (VAR_2[0].n_value - VAR_4), &VAR_3, sizeof(VAR_3)) !=
     sizeof(VAR_3)) {
  FUNC_0(VAR_1, VAR_1->program, "cannot read KPML4phys");
  return (-1);
 }
 VAR_3 = FUNC_6(VAR_3);
 VAR_5 = FUNC_1(VAR_1, VAR_0);
 if (VAR_5 == ((void*)0)) {
  FUNC_0(VAR_1, VAR_1->program, "cannot allocate PML4");
  return (-1);
 }
 if (FUNC_5(VAR_1, VAR_3, VAR_5, VAR_0) != VAR_0) {
  FUNC_0(VAR_1, VAR_1->program, "cannot read KPML4phys");
  FUNC_3(VAR_5);
  return (-1);
 }
 VAR_1->vmst->PML4 = VAR_5;
 return (0);
}
