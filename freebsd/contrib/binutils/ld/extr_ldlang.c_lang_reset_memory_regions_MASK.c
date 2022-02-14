
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {void* processed_lma; void* processed_vma; struct TYPE_9__* next; } ;
typedef TYPE_2__ lang_output_section_statement_type ;
struct TYPE_10__ {int * last_os; int origin; int current; struct TYPE_10__* next; } ;
typedef TYPE_3__ lang_memory_region_type ;
struct TYPE_11__ {scalar_t__ size; scalar_t__ rawsize; struct TYPE_11__* next; } ;
typedef TYPE_4__ asection ;
struct TYPE_13__ {TYPE_1__* head; } ;
struct TYPE_12__ {TYPE_4__* sections; } ;
struct TYPE_8__ {TYPE_2__ output_section_statement; } ;


 void* VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_6__ VAR_2 ;
 TYPE_5__* VAR_3 ;

void
FUNC_0 (void)
{
  lang_memory_region_type *VAR_4 = VAR_1;
  asection *VAR_5;
  lang_output_section_statement_type *VAR_6;

  for (VAR_4 = VAR_1; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
    {
      VAR_4->current = VAR_4->origin;
      VAR_4->last_os = ((void*)0);
    }

  for (VAR_6 = &VAR_2.head->output_section_statement;
       VAR_6 != ((void*)0);
       VAR_6 = VAR_6->next)
    {
      VAR_6->processed_vma = VAR_0;
      VAR_6->processed_lma = VAR_0;
    }

  for (VAR_5 = VAR_3->sections; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
    {

      VAR_5->rawsize = VAR_5->size;
      VAR_5->size = 0;
    }
}
