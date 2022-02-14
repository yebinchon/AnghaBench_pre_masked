
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ refcount; } ;
struct plt_entry {int addend; TYPE_2__ plt; int * sec; struct plt_entry* next; } ;
struct TYPE_3__ {struct plt_entry* plist; } ;
struct elf_link_hash_entry {TYPE_1__ plt; } ;
typedef int bfd_vma ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int bfd ;
typedef int asection ;


 int VAR_0 ;
 int VAR_1 ;
 struct plt_entry* FUNC_0 (int *,int) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (bfd *VAR_2, struct elf_link_hash_entry *VAR_3,
   asection *VAR_4, bfd_vma VAR_5)
{
  struct plt_entry *VAR_6;

  if (VAR_5 < 32768)
    VAR_4 = ((void*)0);
  for (VAR_6 = VAR_3->plt.plist; VAR_6 != ((void*)0); VAR_6 = VAR_6->next)
    if (VAR_6->sec == VAR_4 && VAR_6->addend == VAR_5)
      break;
  if (VAR_6 == ((void*)0))
    {
      bfd_size_type VAR_7 = sizeof (*VAR_6);
      VAR_6 = FUNC_0 (VAR_2, VAR_7);
      if (VAR_6 == ((void*)0))
 return VAR_0;
      VAR_6->next = VAR_3->plt.plist;
      VAR_6->sec = VAR_4;
      VAR_6->addend = VAR_5;
      VAR_6->plt.refcount = 0;
      VAR_3->plt.plist = VAR_6;
    }
  VAR_6->plt.refcount += 1;
  return VAR_1;
}
