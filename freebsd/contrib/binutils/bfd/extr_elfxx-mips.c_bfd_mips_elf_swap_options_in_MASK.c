
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_6__ {int info; int section; int size; int kind; } ;
struct TYPE_5__ {int info; int section; void* size; void* kind; } ;
typedef TYPE_1__ Elf_Internal_Options ;
typedef TYPE_2__ Elf_External_Options ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 void* FUNC_2 (int *,int ) ;

void
FUNC_3 (bfd *VAR_0, const Elf_External_Options *VAR_1,
         Elf_Internal_Options *VAR_2)
{
  VAR_2->kind = FUNC_2 (VAR_0, VAR_1->kind);
  VAR_2->size = FUNC_2 (VAR_0, VAR_1->size);
  VAR_2->section = FUNC_0 (VAR_0, VAR_1->section);
  VAR_2->info = FUNC_1 (VAR_0, VAR_1->info);
}
