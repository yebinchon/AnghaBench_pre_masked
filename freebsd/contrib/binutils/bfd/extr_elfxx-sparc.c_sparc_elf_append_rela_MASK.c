
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct elf_backend_data {TYPE_1__* s; } ;
typedef int bfd_byte ;
typedef int bfd ;
struct TYPE_5__ {int reloc_count; int * contents; } ;
typedef TYPE_2__ asection ;
struct TYPE_4__ {int sizeof_rela; int (* swap_reloca_out ) (int *,int *,int *) ;} ;
typedef int Elf_Internal_Rela ;


 struct elf_backend_data* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *) ;

__attribute__((used)) static void
FUNC_2 (bfd *VAR_0, asection *VAR_1, Elf_Internal_Rela *VAR_2)
{
  const struct elf_backend_data *VAR_3;
  bfd_byte *VAR_4;

  VAR_3 = FUNC_0 (VAR_0);
  VAR_4 = VAR_1->contents + (VAR_1->reloc_count++ * VAR_3->s->sizeof_rela);
  VAR_3->s->swap_reloca_out (VAR_0, VAR_2, VAR_4);
}
