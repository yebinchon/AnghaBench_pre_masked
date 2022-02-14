
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct elf_backend_data {TYPE_1__* s; } ;
typedef TYPE_2__* sec_ptr ;
typedef int bfd ;
typedef int asymbol ;
typedef int arelent ;
struct TYPE_6__ {unsigned int reloc_count; int * relocation; } ;
struct TYPE_5__ {int (* slurp_reloc_table ) (int *,TYPE_2__*,int **,int ) ;} ;


 int VAR_0 ;
 struct elf_backend_data* FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_2__*,int **,int ) ;

long
FUNC_2 (bfd *VAR_1,
        sec_ptr VAR_2,
        arelent **VAR_3,
        asymbol **VAR_4)
{
  arelent *VAR_5;
  unsigned int VAR_6;
  const struct elf_backend_data *VAR_7 = FUNC_0 (VAR_1);

  if (! VAR_7->s->slurp_reloc_table (VAR_1, VAR_2, VAR_4, VAR_0))
    return -1;

  VAR_5 = VAR_2->relocation;
  for (VAR_6 = 0; VAR_6 < VAR_2->reloc_count; VAR_6++)
    *VAR_3++ = VAR_5++;

  *VAR_3 = ((void*)0);

  return VAR_2->reloc_count;
}
