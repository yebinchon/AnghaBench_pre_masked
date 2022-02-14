
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct score_got_info {int got_entries; } ;
struct TYPE_3__ {struct score_elf_link_hash_entry* h; } ;
struct score_got_entry {int symndx; int gotidx; TYPE_1__ d; int * abfd; } ;
struct score_elf_link_hash_entry {int dummy; } ;
struct TYPE_4__ {int offset; } ;
struct elf_link_hash_entry {int dynindx; TYPE_2__ got; int other; } ;
struct bfd_link_info {int dummy; } ;
typedef int entry ;
typedef int bfd_boolean ;
typedef int bfd ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_1 (struct bfd_link_info*,struct elf_link_hash_entry*,int ) ;
 struct score_got_entry* FUNC_2 (int *,int) ;
 int FUNC_3 (struct bfd_link_info*,struct elf_link_hash_entry*) ;
 scalar_t__ FUNC_4 (int ,struct score_got_entry*,int ) ;
 int FUNC_5 (struct score_got_entry*,struct score_got_entry*,int) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (struct elf_link_hash_entry *VAR_4,
         bfd *VAR_5,
                                    struct bfd_link_info *VAR_6,
        struct score_got_info *VAR_7)
{
  struct score_got_entry VAR_8, **VAR_9;


  if (VAR_4->dynindx == -1)
    {
      switch (FUNC_0 (VAR_4->other))
 {
 case 128:
 case 129:
   FUNC_1 (VAR_6, VAR_4, VAR_3);
   break;
 }
      if (!FUNC_3 (VAR_6, VAR_4))
 return VAR_0;
    }

  VAR_8.abfd = VAR_5;
  VAR_8.symndx = -1;
  VAR_8.d.h = (struct score_elf_link_hash_entry *)VAR_4;

  VAR_9 = (struct score_got_entry **)FUNC_4 (VAR_7->got_entries, &VAR_8, VAR_1);



  if (*VAR_9)
    return VAR_3;

  *VAR_9 = FUNC_2 (VAR_5, sizeof VAR_8);
  if (! *VAR_9)
    return VAR_0;

  VAR_8.gotidx = -1;

  FUNC_5 (*VAR_9, &VAR_8, sizeof (VAR_8));

  if (VAR_4->got.offset != VAR_2)
    return VAR_3;




  VAR_4->got.offset = 1;

  return VAR_3;
}
