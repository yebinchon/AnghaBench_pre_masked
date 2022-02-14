
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {int constraint; void* ignored; int section_relative_symbol; TYPE_6__* bfd_section; struct TYPE_18__* next; } ;
typedef TYPE_5__ lang_output_section_statement_type ;
typedef int bfd_boolean ;
struct TYPE_17__ {int * link_order; } ;
struct TYPE_16__ {int * link_order; TYPE_6__* s; } ;
struct TYPE_19__ {scalar_t__ rawsize; int flags; TYPE_4__ map_tail; TYPE_3__ map_head; } ;
typedef TYPE_6__ asection ;
struct TYPE_14__ {int phase; } ;
struct TYPE_22__ {scalar_t__ phase; TYPE_1__ dataseg; } ;
struct TYPE_21__ {TYPE_2__* head; } ;
struct TYPE_20__ {int section_count; } ;
struct TYPE_15__ {TYPE_5__ output_section_statement; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (TYPE_7__*,TYPE_6__*) ;
 int FUNC_1 (TYPE_7__*,TYPE_6__*) ;
 int VAR_5 ;
 TYPE_9__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_8__ VAR_8 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int) ;
 TYPE_7__* VAR_9 ;
 void* VAR_10 ;

void
FUNC_4 (void)
{
  lang_output_section_statement_type *VAR_11;


  if (VAR_6.phase != VAR_7)
    {
      VAR_6.phase = VAR_7;
      VAR_6.dataseg.phase = VAR_5;
      FUNC_3 (((void*)0), VAR_0);
      FUNC_2 ();
    }

  for (VAR_11 = &VAR_8.head->output_section_statement;
       VAR_11 != ((void*)0);
       VAR_11 = VAR_11->next)
    {
      asection *VAR_12;
      bfd_boolean VAR_13;

      if (VAR_11->constraint == -1)
 continue;

      VAR_12 = VAR_11->bfd_section;
      if (VAR_12 == ((void*)0))
 continue;

      VAR_13 = (VAR_12->rawsize == 0
   && (VAR_12->flags & VAR_2) == 0
   && !FUNC_1 (VAR_9,
          VAR_12));





      if (VAR_13 && VAR_12->map_head.s != ((void*)0))
 {
   asection *VAR_14;

   for (VAR_14 = VAR_12->map_head.s; VAR_14 != ((void*)0); VAR_14 = VAR_14->map_head.s)
     if ((VAR_14->flags & VAR_3) != 0
  && (VAR_14->flags & VAR_1) == 0)
       {
  VAR_13 = VAR_0;
  break;
       }
 }


      VAR_12->map_head.link_order = ((void*)0);
      VAR_12->map_tail.link_order = ((void*)0);

      if (VAR_13)
 {


   if (!VAR_11->section_relative_symbol)
     VAR_11->ignored = VAR_4;
   VAR_12->flags |= VAR_1;
   FUNC_0 (VAR_9, VAR_12);
   VAR_9->section_count--;
 }
    }



  VAR_10 = VAR_4;
}
