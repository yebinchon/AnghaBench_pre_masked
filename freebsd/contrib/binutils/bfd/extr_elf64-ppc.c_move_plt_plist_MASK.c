
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct plt_entry* plist; } ;
struct TYPE_6__ {TYPE_2__ plt; } ;
struct ppc_link_hash_entry {TYPE_3__ elf; } ;
struct TYPE_4__ {scalar_t__ refcount; } ;
struct plt_entry {scalar_t__ addend; struct plt_entry* next; TYPE_1__ plt; } ;



__attribute__((used)) static void
FUNC_0 (struct ppc_link_hash_entry *VAR_0,
  struct ppc_link_hash_entry *VAR_1)
{
  if (VAR_0->elf.plt.plist != ((void*)0))
    {
      if (VAR_1->elf.plt.plist != ((void*)0))
 {
   struct plt_entry **VAR_2;
   struct plt_entry *VAR_3;

   for (VAR_2 = &VAR_0->elf.plt.plist; (VAR_3 = *VAR_2) != ((void*)0); )
     {
       struct plt_entry *VAR_4;

       for (VAR_4 = VAR_1->elf.plt.plist; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
  if (VAR_4->addend == VAR_3->addend)
    {
      VAR_4->plt.refcount += VAR_3->plt.refcount;
      *VAR_2 = VAR_3->next;
      break;
    }
       if (VAR_4 == ((void*)0))
  VAR_2 = &VAR_3->next;
     }
   *VAR_2 = VAR_1->elf.plt.plist;
 }

      VAR_1->elf.plt.plist = VAR_0->elf.plt.plist;
      VAR_0->elf.plt.plist = ((void*)0);
    }
}
