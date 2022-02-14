
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int bfd_boolean ;
struct TYPE_8__ {TYPE_1__* arch_info; } ;
typedef TYPE_2__ bfd ;
struct TYPE_9__ {scalar_t__* e_ident; } ;
struct TYPE_7__ {int bits_per_word; struct TYPE_7__* next; scalar_t__ the_default; } ;
typedef TYPE_3__ Elf_Internal_Ehdr ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (bfd *VAR_3)
{
  if (VAR_3->arch_info->the_default && VAR_3->arch_info->bits_per_word == 64)
    {
      Elf_Internal_Ehdr *VAR_4 = FUNC_1 (VAR_3);

      if (VAR_4->e_ident[VAR_0] == VAR_1)
 {

   VAR_3->arch_info = VAR_3->arch_info->next;
   FUNC_0 (VAR_3->arch_info->bits_per_word == 32);
 }
    }
  return VAR_2;
}
