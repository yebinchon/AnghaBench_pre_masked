
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int head; } ;
struct TYPE_8__ {scalar_t__ name; TYPE_1__ children; TYPE_3__* bfd_section; } ;
typedef TYPE_2__ lang_output_section_statement_type ;
struct TYPE_9__ {scalar_t__ vma; scalar_t__ lma; int size; } ;
typedef TYPE_3__ asection ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (char*,scalar_t__,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void
FUNC_6
  (lang_output_section_statement_type *VAR_3)
{
  asection *VAR_4 = VAR_3->bfd_section;
  int VAR_5;

  if (VAR_3 != VAR_1)
    {
      FUNC_1 ("\n%s", VAR_3->name);

      if (VAR_4 != ((void*)0))
 {
   VAR_2 = VAR_4->vma;

   VAR_5 = FUNC_5 (VAR_3->name);
   if (VAR_5 >= VAR_0 - 1)
     {
       FUNC_2 ();
       VAR_5 = 0;
     }
   while (VAR_5 < VAR_0)
     {
       FUNC_3 ();
       ++VAR_5;
     }

   FUNC_1 ("0x%V %W", VAR_4->vma, VAR_4->size);

   if (VAR_4->vma != VAR_4->lma)
     FUNC_1 (FUNC_0(" load address 0x%V"), VAR_4->lma);
 }

      FUNC_2 ();
    }

  FUNC_4 (VAR_3->children.head,
   VAR_3);
}
