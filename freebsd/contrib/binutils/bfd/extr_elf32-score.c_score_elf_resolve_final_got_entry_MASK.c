
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {struct score_elf_link_hash_entry* h; } ;
struct score_got_entry {int symndx; TYPE_5__ d; int * abfd; } ;
struct TYPE_6__ {scalar_t__ link; } ;
struct TYPE_7__ {TYPE_1__ i; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_2__ u; } ;
struct TYPE_9__ {TYPE_3__ root; } ;
struct score_elf_link_hash_entry {TYPE_4__ root; } ;
typedef int * htab_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,void**) ;
 int FUNC_1 (int *,struct score_got_entry*) ;
 void** FUNC_2 (int *,struct score_got_entry*,int ) ;

__attribute__((used)) static int
FUNC_3 (void **VAR_3, void *VAR_4)
{
  struct score_got_entry *VAR_5 = (struct score_got_entry *)*VAR_3;
  htab_t VAR_6 = *(htab_t *)VAR_4;

  if (VAR_5->abfd != ((void*)0) && VAR_5->symndx == -1)
    {
      struct score_elf_link_hash_entry *VAR_7 = VAR_5->d.h;

      while (VAR_7->root.root.type == VAR_1
      || VAR_7->root.root.type == VAR_2)
 VAR_7 = (struct score_elf_link_hash_entry *) VAR_7->root.root.u.i.link;

      if (VAR_5->d.h == VAR_7)
 return 1;

      VAR_5->d.h = VAR_7;



      if (! FUNC_1 (VAR_6, VAR_5))
 {
   FUNC_0 (VAR_6, VAR_3);
   VAR_3 = FUNC_2 (VAR_6, VAR_5, VAR_0);
   if (! *VAR_3)
     *VAR_3 = VAR_5;



   *(htab_t *)VAR_4 = ((void*)0);
   return 0;
 }


    }

  return 1;
}
