
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct score_got_info {long local_gotno; TYPE_1__* global_gotsym; } ;
struct elf_link_hash_entry {long dynindx; } ;
typedef long bfd_vma ;
typedef int bfd ;
struct TYPE_5__ {long size; } ;
typedef TYPE_2__ asection ;
struct TYPE_4__ {long dynindx; } ;


 int FUNC_0 (int) ;
 long FUNC_1 (int *) ;
 struct score_got_info* FUNC_2 (int *,TYPE_2__**) ;

__attribute__((used)) static bfd_vma
FUNC_3 (bfd *VAR_0, struct elf_link_hash_entry *VAR_1)
{
  bfd_vma VAR_2;
  asection *VAR_3;
  struct score_got_info *VAR_4;
  long VAR_5 = 0;

  VAR_4 = FUNC_2 (VAR_0, &VAR_3);
  if (VAR_4->global_gotsym != ((void*)0))
    VAR_5 = VAR_4->global_gotsym->dynindx;





  FUNC_0 (VAR_1->dynindx >= VAR_5);
  VAR_2 = ((VAR_1->dynindx - VAR_5 + VAR_4->local_gotno) * FUNC_1 (VAR_0));
  FUNC_0 (VAR_2 < VAR_3->size);

  return VAR_2;
}
