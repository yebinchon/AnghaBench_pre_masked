
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct vmstate {char* PTD; int pae; int phdr; int phnum; } ;
struct kvm_nlist {char* n_name; int n_value; } ;
typedef int pa64 ;
typedef int pa ;
struct TYPE_8__ {scalar_t__ rawdump; struct vmstate* vmst; int program; } ;
typedef TYPE_1__ kvm_t ;
typedef int kvaddr_t ;
typedef int i386_physaddr_t ;
typedef int i386_physaddr_pae_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 char* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,struct kvm_nlist*) ;
 int FUNC_5 (TYPE_1__*,int,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(kvm_t *VAR_3)
{
 struct kvm_nlist VAR_4[2];
 i386_physaddr_t VAR_5;
 kvaddr_t VAR_6;
 char *VAR_7;
 int VAR_8;

 VAR_3->vmst = (struct vmstate *)FUNC_1(VAR_3, sizeof(struct vmstate));
 if (VAR_3->vmst == ((void*)0)) {
  FUNC_0(VAR_3, VAR_3->program, "cannot allocate vm");
  return (-1);
 }
 VAR_3->vmst->PTD = 0;

 if (VAR_3->rawdump == 0) {
  if (FUNC_2(VAR_3, &VAR_3->vmst->phnum,
      &VAR_3->vmst->phdr) == -1)
   return (-1);
 }

 VAR_4[0].n_name = "kernbase";
 VAR_4[1].n_name = 0;

 if (FUNC_4(VAR_3, VAR_4) != 0) {



  FUNC_0(VAR_3, VAR_3->program, "cannot resolve kernbase");
  return (-1);

 } else
  VAR_6 = VAR_4[0].n_value;

 VAR_4[0].n_name = "IdlePDPT";
 VAR_4[1].n_name = 0;

 if (FUNC_4(VAR_3, VAR_4) == 0) {
  i386_physaddr_pae_t VAR_9;

  if (FUNC_5(VAR_3, (VAR_4[0].n_value - VAR_6), &VAR_5,
      sizeof(VAR_5)) != sizeof(VAR_5)) {
   FUNC_0(VAR_3, VAR_3->program, "cannot read IdlePDPT");
   return (-1);
  }
  VAR_5 = FUNC_6(VAR_5);
  VAR_7 = FUNC_1(VAR_3, 4 * VAR_0);
  if (VAR_7 == ((void*)0)) {
   FUNC_0(VAR_3, VAR_3->program, "cannot allocate PTD");
   return (-1);
  }
  for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
   if (FUNC_5(VAR_3, VAR_5 + (VAR_8 * sizeof(VAR_9)), &VAR_9,
       sizeof(VAR_9)) != sizeof(VAR_9)) {
    FUNC_0(VAR_3, VAR_3->program, "Cannot read PDPT");
    FUNC_3(VAR_7);
    return (-1);
   }
   VAR_9 = FUNC_7(VAR_9);
   if (FUNC_5(VAR_3, VAR_9 & VAR_1,
       VAR_7 + (VAR_8 * VAR_0), VAR_0) !=
       VAR_0) {
    FUNC_0(VAR_3, VAR_3->program, "cannot read PDPT");
    FUNC_3(VAR_7);
    return (-1);
   }
  }
  VAR_3->vmst->PTD = VAR_7;
  VAR_3->vmst->pae = 1;
 } else {
  VAR_4[0].n_name = "IdlePTD";
  VAR_4[1].n_name = 0;

  if (FUNC_4(VAR_3, VAR_4) != 0) {
   FUNC_0(VAR_3, VAR_3->program, "bad namelist");
   return (-1);
  }
  if (FUNC_5(VAR_3, (VAR_4[0].n_value - VAR_6), &VAR_5,
      sizeof(VAR_5)) != sizeof(VAR_5)) {
   FUNC_0(VAR_3, VAR_3->program, "cannot read IdlePTD");
   return (-1);
  }
  VAR_5 = FUNC_6(VAR_5);
  VAR_7 = FUNC_1(VAR_3, VAR_0);
  if (VAR_7 == ((void*)0)) {
   FUNC_0(VAR_3, VAR_3->program, "cannot allocate PTD");
   return (-1);
  }
  if (FUNC_5(VAR_3, VAR_5, VAR_7, VAR_0) != VAR_0) {
   FUNC_0(VAR_3, VAR_3->program, "cannot read PTD");
   return (-1);
  }
  VAR_3->vmst->PTD = VAR_7;
  VAR_3->vmst->pae = 0;
 }
 return (0);
}
