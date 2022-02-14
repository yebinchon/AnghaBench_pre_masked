
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * the_bfd; TYPE_2__* next; } ;
struct TYPE_7__ {TYPE_1__ input_statement; } ;
typedef TYPE_2__ lang_statement_union_type ;
typedef int * bfd_error_handler_type ;
typedef int bfd_arch_info_type ;
typedef int bfd ;
struct TYPE_10__ {scalar_t__ warn_mismatch; int accept_unknown_input_arch; } ;
struct TYPE_9__ {TYPE_2__* head; } ;
struct TYPE_8__ {scalar_t__ emitrelocations; scalar_t__ relocatable; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 TYPE_5__ VAR_1 ;
 int FUNC_9 (int ,int *,...) ;
 TYPE_4__ VAR_2 ;
 int * VAR_3 ;
 TYPE_3__ VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static void
FUNC_10 (void)
{
  lang_statement_union_type *VAR_6;
  bfd *VAR_7;
  const bfd_arch_info_type *VAR_8;

  for (VAR_6 = VAR_2.head; VAR_6 != ((void*)0); VAR_6 = VAR_6->input_statement.next)
    {
      VAR_7 = VAR_6->input_statement.the_bfd;
      VAR_8
 = FUNC_1 (VAR_7, VAR_5,
       VAR_1.accept_unknown_input_arch);







      if ((VAR_4.relocatable || VAR_4.emitrelocations)
   && (VAR_8 == ((void*)0)
       || FUNC_4 (VAR_7) != FUNC_4 (VAR_5))
   && (FUNC_3 (VAR_7) & VAR_0) != 0)
 {
   FUNC_9 (FUNC_0("%P%F: Relocatable linking with relocations from"
     " format %s (%B) to format %s (%B) is not supported\n"),
   FUNC_5 (VAR_7), VAR_7,
   FUNC_5 (VAR_5), VAR_5);

 }

      if (VAR_8 == ((void*)0))
 {
   if (VAR_1.warn_mismatch)
     FUNC_9 (FUNC_0("%P%X: %s architecture of input file `%B'"
       " is incompatible with %s output\n"),
     FUNC_7 (VAR_7), VAR_7,
     FUNC_7 (VAR_5));
 }
      else if (FUNC_2 (VAR_7))
 {



   bfd_error_handler_type VAR_9 = ((void*)0);






   if (! VAR_1.warn_mismatch)
     VAR_9 = FUNC_8 (VAR_3);
   if (! FUNC_6 (VAR_7, VAR_5))
     {
       if (VAR_1.warn_mismatch)
  FUNC_9 (FUNC_0("%P%X: failed to merge target specific data"
    " of file %B\n"), VAR_7);
     }
   if (! VAR_1.warn_mismatch)
     FUNC_8 (VAR_9);
 }
    }
}
