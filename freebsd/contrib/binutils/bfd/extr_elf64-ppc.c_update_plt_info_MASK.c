
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {char* string; } ;
struct TYPE_9__ {TYPE_3__ root; } ;
struct TYPE_6__ {struct plt_entry* plist; } ;
struct TYPE_10__ {int needs_plt; TYPE_4__ root; TYPE_1__ plt; } ;
struct ppc_link_hash_entry {int is_func; TYPE_5__ elf; } ;
struct TYPE_7__ {scalar_t__ refcount; } ;
struct plt_entry {scalar_t__ addend; TYPE_2__ plt; struct plt_entry* next; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 struct plt_entry* FUNC_0 (int *,int) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (bfd *VAR_2, struct ppc_link_hash_entry *VAR_3, bfd_vma VAR_4)
{
  struct plt_entry *VAR_5;

  for (VAR_5 = VAR_3->elf.plt.plist; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
    if (VAR_5->addend == VAR_4)
      break;
  if (VAR_5 == ((void*)0))
    {
      bfd_size_type VAR_6 = sizeof (*VAR_5);
      VAR_5 = FUNC_0 (VAR_2, VAR_6);
      if (VAR_5 == ((void*)0))
 return VAR_0;
      VAR_5->next = VAR_3->elf.plt.plist;
      VAR_5->addend = VAR_4;
      VAR_5->plt.refcount = 0;
      VAR_3->elf.plt.plist = VAR_5;
    }
  VAR_5->plt.refcount += 1;
  VAR_3->elf.needs_plt = 1;
  if (VAR_3->elf.root.root.string[0] == '.'
      && VAR_3->elf.root.root.string[1] != '\0')
    VAR_3->is_func = 1;
  return VAR_1;
}
