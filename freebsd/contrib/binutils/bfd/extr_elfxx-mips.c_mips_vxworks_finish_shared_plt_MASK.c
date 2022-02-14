
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mips_elf_link_hash_table {TYPE_1__* splt; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd ;
struct TYPE_2__ {scalar_t__ contents; } ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 struct mips_elf_link_hash_table* FUNC_2 (struct bfd_link_info*) ;
 int * VAR_0 ;

__attribute__((used)) static void
FUNC_3 (bfd *VAR_1, struct bfd_link_info *VAR_2)
{
  unsigned int VAR_3;
  struct mips_elf_link_hash_table *VAR_4;

  VAR_4 = FUNC_2 (VAR_2);


  for (VAR_3 = 0; VAR_3 < FUNC_0 (VAR_0); VAR_3++)
    FUNC_1 (VAR_1, VAR_0[VAR_3],
  VAR_4->splt->contents + VAR_3 * 4);
}
