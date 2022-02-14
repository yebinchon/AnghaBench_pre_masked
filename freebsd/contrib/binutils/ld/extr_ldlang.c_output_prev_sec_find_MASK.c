
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int constraint; TYPE_2__* bfd_section; struct TYPE_5__* prev; } ;
typedef TYPE_1__ lang_output_section_statement_type ;
struct TYPE_6__ {int * owner; } ;
typedef TYPE_2__ asection ;



__attribute__((used)) static asection *
FUNC_0 (lang_output_section_statement_type *VAR_0)
{
  lang_output_section_statement_type *VAR_1;

  for (VAR_1 = VAR_0->prev; VAR_1 != ((void*)0); VAR_1 = VAR_1->prev)
    {
      if (VAR_1->constraint == -1)
 continue;

      if (VAR_1->bfd_section != ((void*)0) && VAR_1->bfd_section->owner != ((void*)0))
 return VAR_1->bfd_section;
    }

  return ((void*)0);
}
