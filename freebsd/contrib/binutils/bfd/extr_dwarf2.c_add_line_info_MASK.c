
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_info_table {struct line_info* lcl_head; struct line_info* last_line; int abfd; } ;
struct line_info {unsigned int line; unsigned int column; int end_sequence; struct line_info* prev_line; int * filename; int address; } ;
typedef int bfd_vma ;
typedef int bfd_size_type ;


 void* FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct line_info*,struct line_info*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (struct line_info_table *VAR_0,
        bfd_vma VAR_1,
        char *VAR_2,
        unsigned int VAR_3,
        unsigned int VAR_4,
        int VAR_5)
{
  bfd_size_type VAR_6 = sizeof (struct line_info);
  struct line_info* VAR_7 = FUNC_0 (VAR_0->abfd, VAR_6);


  VAR_7->address = VAR_1;
  VAR_7->line = VAR_3;
  VAR_7->column = VAR_4;
  VAR_7->end_sequence = VAR_5;

  if (VAR_2 && VAR_2[0])
    {
      VAR_7->filename = FUNC_0 (VAR_0->abfd, FUNC_3 (VAR_2) + 1);
      if (VAR_7->filename)
 FUNC_2 (VAR_7->filename, VAR_2);
    }
  else
    VAR_7->filename = ((void*)0);
  if (!VAR_0->last_line
      || FUNC_1 (VAR_7, VAR_0->last_line))
    {

      VAR_7->prev_line = VAR_0->last_line;
      VAR_0->last_line = VAR_7;


      if (!VAR_0->lcl_head)
 VAR_0->lcl_head = VAR_7;
    }
  else if (!FUNC_1 (VAR_7, VAR_0->lcl_head)
    && (!VAR_0->lcl_head->prev_line
        || FUNC_1 (VAR_7, VAR_0->lcl_head->prev_line)))
    {

      VAR_7->prev_line = VAR_0->lcl_head->prev_line;
      VAR_0->lcl_head->prev_line = VAR_7;
    }
  else
    {


      struct line_info* VAR_8 = VAR_0->last_line;
      struct line_info* VAR_9 = VAR_8->prev_line;

      while (VAR_9)
 {
   if (!FUNC_1 (VAR_7, VAR_8)
       && FUNC_1 (VAR_7, VAR_9))
     break;

   VAR_8 = VAR_9;
   VAR_9 = VAR_9->prev_line;
 }
      VAR_0->lcl_head = VAR_8;
      VAR_7->prev_line = VAR_0->lcl_head->prev_line;
      VAR_0->lcl_head->prev_line = VAR_7;
    }
}
