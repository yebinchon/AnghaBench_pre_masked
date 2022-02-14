
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct plt_entry {int addend; int * sec; struct plt_entry* next; } ;
struct TYPE_2__ {struct plt_entry* plist; } ;
struct elf_link_hash_entry {TYPE_1__ plt; } ;
typedef int bfd_vma ;
typedef int asection ;



__attribute__((used)) static struct plt_entry *
FUNC_0 (struct elf_link_hash_entry *VAR_0, asection *VAR_1, bfd_vma VAR_2)
{
  struct plt_entry *VAR_3;

  if (VAR_2 < 32768)
    VAR_1 = ((void*)0);
  for (VAR_3 = VAR_0->plt.plist; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
    if (VAR_3->sec == VAR_1 && VAR_3->addend == VAR_2)
      break;
  return VAR_3;
}
