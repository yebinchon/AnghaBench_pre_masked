
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct vmstate {size_t phnum; scalar_t__* l1pt; TYPE_5__* phdr; } ;
struct kvm_nlist {char* n_name; scalar_t__ n_value; } ;
typedef int pa ;
struct TYPE_9__ {int program; struct vmstate* vmst; scalar_t__ rawdump; } ;
typedef TYPE_1__ kvm_t ;
typedef scalar_t__ kvaddr_t ;
typedef scalar_t__ arm_physaddr_t ;
typedef scalar_t__ arm_pd_entry_t ;
struct TYPE_10__ {scalar_t__ p_type; scalar_t__ p_paddr; scalar_t__ p_vaddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 void* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,size_t*,TYPE_5__**) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,struct kvm_nlist*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_6(kvm_t *VAR_3)
{
 struct vmstate *VAR_4;
 struct kvm_nlist VAR_5[2];
 kvaddr_t VAR_6;
 arm_physaddr_t VAR_7, VAR_8;
 arm_pd_entry_t *VAR_9;
 size_t VAR_10;
 int VAR_11;

 if (VAR_3->rawdump) {
  FUNC_0(VAR_3, VAR_3->program, "raw dumps not supported on arm");
  return (-1);
 }

 VAR_4 = FUNC_1(VAR_3, sizeof(*VAR_4));
 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_3, VAR_3->program, "cannot allocate vm");
  return (-1);
 }
 VAR_3->vmst = VAR_4;
 VAR_4->l1pt = ((void*)0);

 if (FUNC_2(VAR_3, &VAR_4->phnum, &VAR_4->phdr) == -1)
  return (-1);

 VAR_11 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_4->phnum; VAR_10++) {
  if (VAR_4->phdr[VAR_10].p_type == VAR_2) {
   VAR_6 = VAR_4->phdr[VAR_10].p_vaddr;
   VAR_7 = VAR_4->phdr[VAR_10].p_paddr;
   VAR_11 = 1;
   break;
  }
 }

 VAR_5[1].n_name = ((void*)0);
 if (!VAR_11) {
  VAR_5[0].n_name = "kernbase";
  if (FUNC_4(VAR_3, VAR_5) != 0) {



  FUNC_0(VAR_3, VAR_3->program, "cannot resolve kernbase");
  return (-1);

  } else
   VAR_6 = VAR_5[0].n_value;

  VAR_5[0].n_name = "physaddr";
  if (FUNC_4(VAR_3, VAR_5) != 0) {
   FUNC_0(VAR_3, VAR_3->program, "couldn't get phys addr");
   return (-1);
  }
  VAR_7 = VAR_5[0].n_value;
 }
 VAR_5[0].n_name = "kernel_l1pa";
 if (FUNC_4(VAR_3, VAR_5) != 0) {
  FUNC_0(VAR_3, VAR_3->program, "bad namelist");
  return (-1);
 }
 if (FUNC_5(VAR_3, (VAR_5[0].n_value - VAR_6 + VAR_7), &VAR_8,
     sizeof(VAR_8)) != sizeof(VAR_8)) {
  FUNC_0(VAR_3, VAR_3->program, "cannot read kernel_l1pa");
  return (-1);
 }
 VAR_9 = FUNC_1(VAR_3, VAR_0);
 if (VAR_9 == ((void*)0)) {
  FUNC_0(VAR_3, VAR_3->program, "cannot allocate l1pt");
  return (-1);
 }
 if (FUNC_5(VAR_3, VAR_8, VAR_9, VAR_0) != VAR_0) {
  FUNC_0(VAR_3, VAR_3->program, "cannot read l1pt");
  FUNC_3(VAR_9);
  return (-1);
 }
 VAR_4->l1pt = VAR_9;
 return 0;
}
