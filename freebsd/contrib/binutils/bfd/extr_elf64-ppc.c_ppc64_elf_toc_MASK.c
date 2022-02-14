
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ bfd_vma ;
struct TYPE_8__ {TYPE_3__* sections; } ;
typedef TYPE_2__ bfd ;
struct TYPE_9__ {int flags; scalar_t__ output_offset; TYPE_1__* output_section; struct TYPE_9__* next; } ;
typedef TYPE_3__ asection ;
struct TYPE_7__ {scalar_t__ vma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,char*) ;

bfd_vma
FUNC_1 (bfd *VAR_3)
{
  asection *VAR_4;
  bfd_vma VAR_5;



  VAR_4 = FUNC_0 (VAR_3, ".got");
  if (VAR_4 == ((void*)0))
    VAR_4 = FUNC_0 (VAR_3, ".toc");
  if (VAR_4 == ((void*)0))
    VAR_4 = FUNC_0 (VAR_3, ".tocbss");
  if (VAR_4 == ((void*)0))
    VAR_4 = FUNC_0 (VAR_3, ".plt");
  if (VAR_4 == ((void*)0))
    {
      for (VAR_4 = VAR_3->sections; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
 if ((VAR_4->flags & (VAR_0 | VAR_2 | VAR_1))
     == (VAR_0 | VAR_2))
   break;
      if (VAR_4 == ((void*)0))
 for (VAR_4 = VAR_3->sections; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
   if ((VAR_4->flags & (VAR_0 | VAR_2))
       == (VAR_0 | VAR_2))
     break;
      if (VAR_4 == ((void*)0))
 for (VAR_4 = VAR_3->sections; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
   if ((VAR_4->flags & (VAR_0 | VAR_1)) == VAR_0)
     break;
      if (VAR_4 == ((void*)0))
 for (VAR_4 = VAR_3->sections; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
   if ((VAR_4->flags & VAR_0) == VAR_0)
     break;
    }

  VAR_5 = 0;
  if (VAR_4 != ((void*)0))
    VAR_5 = VAR_4->output_section->vma + VAR_4->output_offset;

  return VAR_5;
}
