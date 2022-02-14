
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* bfd_section; } ;
typedef TYPE_2__ lang_output_section_statement_type ;
struct TYPE_8__ {scalar_t__ current; scalar_t__ origin; scalar_t__ length; int name; } ;
typedef TYPE_3__ lang_memory_region_type ;
typedef int etree_type ;
typedef scalar_t__ bfd_vma ;
struct TYPE_6__ {int name; int owner; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,scalar_t__,int ,int ,...) ;

__attribute__((used)) static void
FUNC_2 (lang_output_section_statement_type *VAR_0,
   lang_memory_region_type *VAR_1,
   etree_type *VAR_2,
   bfd_vma VAR_3)
{
  if ((VAR_1->current < VAR_1->origin
       || (VAR_1->current - VAR_1->origin > VAR_1->length))
      && ((VAR_1->current != VAR_1->origin + VAR_1->length)
   || VAR_3 == 0))
    {
      if (VAR_2 != ((void*)0))
 {
   FUNC_1 (FUNC_0("%X%P: address 0x%v of %B section %s"
     " is not within region %s\n"),
   VAR_1->current,
   VAR_0->bfd_section->owner,
   VAR_0->bfd_section->name,
   VAR_1->name);
 }
      else
 {
   FUNC_1 (FUNC_0("%X%P: region %s is full (%B section %s)\n"),
   VAR_1->name,
   VAR_0->bfd_section->owner,
   VAR_0->bfd_section->name);
 }

      VAR_1->current = VAR_1->origin;
    }
}
