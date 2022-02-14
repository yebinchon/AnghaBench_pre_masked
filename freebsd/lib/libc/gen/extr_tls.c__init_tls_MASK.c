
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t a_val; TYPE_2__* a_ptr; } ;
struct TYPE_6__ {int a_type; TYPE_1__ a_un; } ;
struct TYPE_5__ {scalar_t__ p_type; scalar_t__ p_vaddr; int p_align; int p_filesz; int p_memsz; } ;
typedef TYPE_2__ Elf_Phdr ;
typedef TYPE_3__ Elf_Auxinfo ;
typedef int Elf_Addr ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (void*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ) ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void
FUNC_3(void)
{

 Elf_Addr *VAR_9;
 Elf_Auxinfo *VAR_10, *VAR_11;
 Elf_Phdr *VAR_12;
 size_t VAR_13, VAR_14;
 int VAR_15;
 void *VAR_16;

 VAR_9 = (Elf_Addr *) VAR_4;
 while (*VAR_9++ != 0)
  ;
 VAR_10 = (Elf_Auxinfo *) VAR_9;
 VAR_12 = ((void*)0);
 VAR_13 = VAR_14 = 0;
 for (VAR_11 = VAR_10; VAR_11->a_type != VAR_0; VAR_11++) {
  switch (VAR_11->a_type) {
  case 130:
   VAR_12 = VAR_11->a_un.a_ptr;
   break;

  case 129:
   VAR_13 = VAR_11->a_un.a_val;
   break;

  case 128:
   VAR_14 = VAR_11->a_un.a_val;
   break;
  }
 }
 if (VAR_12 == ((void*)0) || VAR_13 != sizeof(Elf_Phdr) || VAR_14 == 0)
  return;

 for (VAR_15 = 0; (unsigned) VAR_15 < VAR_14; VAR_15++) {
  if (VAR_12[VAR_15].p_type == VAR_1) {
   VAR_8 = FUNC_2(VAR_12[VAR_15].p_memsz,
       VAR_12[VAR_15].p_align);
   VAR_7 = VAR_12[VAR_15].p_filesz;
   VAR_6 = VAR_12[VAR_15].p_align;
   VAR_5 = (void*) VAR_12[VAR_15].p_vaddr;
   break;
  }
 }
 VAR_16 = FUNC_0(((void*)0), VAR_3, VAR_2);

 FUNC_1(VAR_16);

}
