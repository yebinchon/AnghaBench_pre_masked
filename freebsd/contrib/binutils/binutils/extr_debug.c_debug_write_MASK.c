
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct debug_write_fns {int (* start_source ) (void*,int ) ;int (* start_compilation_unit ) (void*,int ) ;} ;
struct debug_unit {struct debug_file* files; int linenos; struct debug_unit* next; } ;
struct debug_name {struct debug_name* next; } ;
struct debug_handle {scalar_t__ current_write_lineno_index; int current_write_lineno; struct debug_unit* units; int * id_list; int class_id; int base_id; int mark; } ;
struct debug_file {TYPE_1__* globals; int filename; struct debug_file* next; } ;
typedef int bfd_vma ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_2__ {struct debug_name* list; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct debug_handle*,struct debug_write_fns const*,void*,int ) ;
 int FUNC_1 (struct debug_handle*,struct debug_write_fns const*,void*,struct debug_name*) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (void*,int ) ;

bfd_boolean
FUNC_4 (void *VAR_2, const struct debug_write_fns *VAR_3, void *VAR_4)
{
  struct debug_handle *VAR_5 = (struct debug_handle *) VAR_2;
  struct debug_unit *VAR_6;





  ++VAR_5->mark;




  VAR_5->base_id = VAR_5->class_id;



  VAR_5->id_list = ((void*)0);

  for (VAR_6 = VAR_5->units; VAR_6 != ((void*)0); VAR_6 = VAR_6->next)
    {
      struct debug_file *VAR_7;
      bfd_boolean VAR_8;

      VAR_5->current_write_lineno = VAR_6->linenos;
      VAR_5->current_write_lineno_index = 0;

      if (! (*VAR_3->start_compilation_unit) (VAR_4, VAR_6->files->filename))
 return VAR_0;

      VAR_8 = VAR_1;
      for (VAR_7 = VAR_6->files; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
 {
   struct debug_name *VAR_9;

   if (VAR_8)
     VAR_8 = VAR_0;
   else if (! (*VAR_3->start_source) (VAR_4, VAR_7->filename))
     return VAR_0;

   if (VAR_7->globals != ((void*)0))
     for (VAR_9 = VAR_7->globals->list; VAR_9 != ((void*)0); VAR_9 = VAR_9->next)
       if (! FUNC_1 (VAR_5, VAR_3, VAR_4, VAR_9))
  return VAR_0;
 }



      if (! FUNC_0 (VAR_5, VAR_3, VAR_4, (bfd_vma) -1))
 return VAR_0;
    }

  return VAR_1;
}
