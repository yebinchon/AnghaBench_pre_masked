
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int name; struct TYPE_8__* next; } ;
typedef TYPE_1__ search_arch_type ;
struct TYPE_9__ {int local_sym_name; scalar_t__ sysrooted; void* search_dirs_flag; int filename; int * the_bfd; } ;
typedef TYPE_2__ lang_input_statement_type ;
typedef void* bfd_boolean ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,...) ;
 scalar_t__ VAR_1 ;
 void* FUNC_3 (int ,TYPE_2__*) ;
 void* FUNC_4 (int ,TYPE_2__*,char*,char*) ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_6 (int ,int ) ;

void
FUNC_7 (lang_input_statement_type *VAR_3)
{
  if (VAR_3->the_bfd != ((void*)0))
    return;

  if (! VAR_3->search_dirs_flag)
    {
      if (FUNC_5 (VAR_3->filename, VAR_3))
 return;
      if (FUNC_6 (VAR_3->filename, VAR_3->local_sym_name) != 0)
 FUNC_2 (FUNC_1("%F%P: %s (%s): No such file: %E\n"),
        VAR_3->filename, VAR_3->local_sym_name);
      else
 FUNC_2 (FUNC_1("%F%P: %s: No such file: %E\n"), VAR_3->local_sym_name);
    }
  else
    {
      search_arch_type *VAR_4;
      bfd_boolean VAR_5 = VAR_0;


      for (VAR_4 = VAR_2; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
 {
   VAR_5 = FUNC_4 (VAR_4->name, VAR_3, "lib", ".a");
   if (VAR_5)
     break;





   VAR_5 = FUNC_3 (VAR_4->name, VAR_3);
   if (VAR_5)
     break;
 }



      if (VAR_5)
 VAR_3->search_dirs_flag = VAR_0;
      else if (VAR_3->sysrooted
        && VAR_1
        && FUNC_0 (VAR_3->local_sym_name))
 FUNC_2 (FUNC_1("%F%P: cannot find %s inside %s\n"),
        VAR_3->local_sym_name, VAR_1);
      else
 FUNC_2 (FUNC_1("%F%P: cannot find %s\n"), VAR_3->local_sym_name);
    }
}
