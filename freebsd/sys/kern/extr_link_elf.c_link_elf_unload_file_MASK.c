
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int linker_file_t ;
typedef TYPE_2__* elf_file_t ;
struct TYPE_6__ {scalar_t__ l_name; int * l_ld; } ;
struct TYPE_5__ {scalar_t__ pcpu_base; scalar_t__ vnet_base; void* address; void* symbase; void* strbase; void* ctftab; void* ctfoff; void* typoff; TYPE_1__* object; scalar_t__ preloaded; TYPE_3__ gdb; scalar_t__ vnet_start; scalar_t__ vnet_stop; scalar_t__ pcpu_start; scalar_t__ pcpu_stop; } ;
struct TYPE_4__ {int size; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void*,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (void*,int ) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (void*,scalar_t__) ;

__attribute__((used)) static void
FUNC_9(linker_file_t VAR_7)
{
 elf_file_t VAR_8 = (elf_file_t) VAR_7;

 if (VAR_8->pcpu_base != 0) {
  FUNC_1((void *)VAR_8->pcpu_base,
      VAR_8->pcpu_stop - VAR_8->pcpu_start);
  FUNC_3(&VAR_5, VAR_8->pcpu_start);
 }
 FUNC_2(VAR_7);

 if (VAR_8->preloaded) {
  FUNC_6(VAR_7);
  return;
 }
 FUNC_4(VAR_8->address, VAR_0);

 FUNC_4(VAR_8->symbase, VAR_0);
 FUNC_4(VAR_8->strbase, VAR_0);
 FUNC_4(VAR_8->ctftab, VAR_0);
 FUNC_4(VAR_8->ctfoff, VAR_0);
 FUNC_4(VAR_8->typoff, VAR_0);
}
