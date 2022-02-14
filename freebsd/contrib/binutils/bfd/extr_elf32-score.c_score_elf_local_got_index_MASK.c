
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct score_got_info {int dummy; } ;
struct score_got_entry {int gotidx; } ;
struct score_elf_link_hash_entry {int dummy; } ;
struct bfd_link_info {int dummy; } ;
typedef int bfd_vma ;
typedef int bfd ;
typedef int asection ;
struct TYPE_2__ {int dynobj; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct bfd_link_info*) ;
 struct score_got_entry* FUNC_1 (int *,int *,struct score_got_info*,int *,int ,unsigned long,struct score_elf_link_hash_entry*,int) ;
 struct score_got_info* FUNC_2 (int ,int **) ;

__attribute__((used)) static bfd_vma
FUNC_3 (bfd *VAR_1, bfd *VAR_2, struct bfd_link_info *VAR_3,
     bfd_vma VAR_4, unsigned long VAR_5,
     struct score_elf_link_hash_entry *VAR_6, int VAR_7)
{
  asection *VAR_8;
  struct score_got_info *VAR_9;
  struct score_got_entry *VAR_10;

  VAR_9 = FUNC_2 (FUNC_0 (VAR_3)->dynobj, &VAR_8);

  VAR_10 = FUNC_1 (VAR_1, VAR_2, VAR_9, VAR_8, VAR_4,
          VAR_5, VAR_6, VAR_7);
  if (!VAR_10)
    return VAR_0;

  else
    return VAR_10->gotidx;
}
