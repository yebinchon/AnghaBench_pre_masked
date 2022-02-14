
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct loadable_section {int adj_vma; TYPE_2__* section; } ;
struct dwarf2_debug {unsigned int loadable_section_count; struct loadable_section* loadable_sections; } ;
typedef int bfd_vma ;
typedef scalar_t__ bfd_size_type ;
typedef int bfd_boolean ;
struct TYPE_5__ {TYPE_2__* sections; } ;
typedef TYPE_1__ bfd ;
struct TYPE_6__ {int vma; int flags; scalar_t__ rawsize; scalar_t__ size; int alignment_power; struct TYPE_6__* next; } ;
typedef TYPE_2__ asection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (bfd *VAR_3, struct dwarf2_debug *VAR_4)
{
  struct loadable_section *VAR_5;
  unsigned int VAR_6;

  if (VAR_4->loadable_section_count != 0)
    {
      VAR_6 = VAR_4->loadable_section_count;
      VAR_5 = VAR_4->loadable_sections;
      for (; VAR_6 > 0; VAR_6--, VAR_5++)
 VAR_5->section->vma = VAR_5->adj_vma;
    }
  else
    {
      asection *VAR_7;
      bfd_vma VAR_8 = 0;
      bfd_size_type VAR_9;
      struct loadable_section *VAR_10;

      VAR_6 = 0;
      for (VAR_7 = VAR_3->sections; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
 {
   bfd_size_type VAR_11;

   if (VAR_7->vma != 0 || (VAR_7->flags & VAR_1) == 0)
     continue;

   VAR_11 = VAR_7->rawsize ? VAR_7->rawsize : VAR_7->size;
   if (VAR_11 == 0)
     continue;

   VAR_6++;
 }

      VAR_9 = VAR_6 * sizeof (struct loadable_section);
      VAR_10 = (struct loadable_section *) FUNC_0 (VAR_3, VAR_9);
      if (! VAR_10)
 return VAR_0;

      VAR_4->loadable_sections = VAR_10;
      VAR_4->loadable_section_count = VAR_6;

      for (VAR_7 = VAR_3->sections; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
 {
   bfd_size_type VAR_12;

   if (VAR_7->vma != 0 || (VAR_7->flags & VAR_1) == 0)
     continue;

   VAR_12 = VAR_7->rawsize ? VAR_7->rawsize : VAR_7->size;
   if (VAR_12 == 0)
     continue;

   VAR_10->section = VAR_7;
   if (VAR_8 != 0)
     {


       VAR_8 = ((VAR_8
      + ~((bfd_vma) -1 << VAR_7->alignment_power))
     & ((bfd_vma) -1 << VAR_7->alignment_power));
       VAR_7->vma = VAR_8;
     }
   VAR_10->adj_vma = VAR_7->vma;
   VAR_8 += VAR_7->vma + VAR_12;

   VAR_10++;
 }
    }

  return VAR_2;
}
