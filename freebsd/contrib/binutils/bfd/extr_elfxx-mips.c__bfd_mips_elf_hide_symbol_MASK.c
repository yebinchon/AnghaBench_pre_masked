
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mips_got_info {scalar_t__ global_gotno; scalar_t__ assigned_gotno; int local_gotno; int * global_gotsym; int got_entries; struct mips_got_info* next; } ;
struct TYPE_8__ {struct mips_elf_link_hash_entry* h; } ;
struct mips_got_entry {int symndx; scalar_t__ tls_type; TYPE_2__ d; int * abfd; } ;
struct TYPE_9__ {int offset; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_3__ got; } ;
struct mips_elf_link_hash_entry {TYPE_6__ root; scalar_t__ forced_local; } ;
struct elf_link_hash_entry {int dummy; } ;
struct bfd_link_info {int dummy; } ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
typedef int asection ;
struct TYPE_11__ {int * dynobj; } ;
struct TYPE_7__ {struct mips_got_info* got_info; } ;
struct TYPE_10__ {TYPE_1__ u; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bfd_link_info*,TYPE_6__*,scalar_t__) ;
 TYPE_5__* FUNC_2 (struct bfd_link_info*) ;
 scalar_t__ FUNC_3 (int ,struct mips_got_entry*) ;
 int * FUNC_4 (int *,int ) ;
 TYPE_4__* FUNC_5 (int *) ;

void
FUNC_6 (struct bfd_link_info *VAR_2,
      struct elf_link_hash_entry *VAR_3,
      bfd_boolean VAR_4)
{
  bfd *VAR_5;
  asection *VAR_6;
  struct mips_got_info *VAR_7;
  struct mips_elf_link_hash_entry *VAR_8;

  VAR_8 = (struct mips_elf_link_hash_entry *) VAR_3;
  if (VAR_8->forced_local)
    return;
  VAR_8->forced_local = VAR_4;

  VAR_5 = FUNC_2 (VAR_2)->dynobj;
  if (VAR_5 != ((void*)0) && VAR_4 && VAR_8->root.type != VAR_0
      && (VAR_6 = FUNC_4 (VAR_5, VAR_1)) != ((void*)0)
      && (VAR_7 = FUNC_5 (VAR_6)->u.got_info) != ((void*)0))
    {
      if (VAR_7->next)
 {
   struct mips_got_entry VAR_9;
   struct mips_got_info *VAR_10 = VAR_7;






   VAR_9.abfd = VAR_5;
   VAR_9.symndx = -1;
   VAR_9.d.h = VAR_8;
   VAR_9.tls_type = 0;

   for (VAR_7 = VAR_7->next; VAR_7 != VAR_10; VAR_7 = VAR_7->next)
     if (FUNC_3 (VAR_7->got_entries, &VAR_9))
       {
  FUNC_0 (VAR_7->global_gotno > 0);
  VAR_7->local_gotno++;
  VAR_7->global_gotno--;
       }





   if (VAR_8->root.got.offset == 2)
     {
       FUNC_0 (VAR_10->assigned_gotno > 0);
       VAR_10->assigned_gotno--;
     }
 }
      else if (VAR_7->global_gotno == 0 && VAR_7->global_gotsym == ((void*)0))



 VAR_7->local_gotno++;
      else if (VAR_8->root.got.offset == 1)
 {



   FUNC_0 (VAR_7->global_gotno > 0);
   VAR_7->local_gotno++;
   VAR_7->global_gotno--;
 }
    }

  FUNC_1 (VAR_2, &VAR_8->root, VAR_4);
}
