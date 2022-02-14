
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subfile {int line_vector_length; struct linetable* line_vector; } ;
struct linetable_entry {int line; int pc; } ;
struct linetable {int nitems; struct linetable_entry* item; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,int) ;

void
FUNC_3 (struct subfile *VAR_2, int VAR_3, CORE_ADDR VAR_4)
{
  struct linetable_entry *VAR_5;


  if (VAR_3 == 0xffff)
    {
      return;
    }


  if (!VAR_2->line_vector)
    {
      VAR_2->line_vector_length = VAR_0;
      VAR_2->line_vector = (struct linetable *)
 FUNC_1 (sizeof (struct linetable)
    + VAR_2->line_vector_length * sizeof (struct linetable_entry));
      VAR_2->line_vector->nitems = 0;
      VAR_1 = 1;
    }

  if (VAR_2->line_vector->nitems + 1 >= VAR_2->line_vector_length)
    {
      VAR_2->line_vector_length *= 2;
      VAR_2->line_vector = (struct linetable *)
 FUNC_2 ((char *) VAR_2->line_vector,
    (sizeof (struct linetable)
     + (VAR_2->line_vector_length
        * sizeof (struct linetable_entry))));
    }

  VAR_5 = VAR_2->line_vector->item + VAR_2->line_vector->nitems++;
  VAR_5->line = VAR_3;
  VAR_5->pc = FUNC_0(VAR_4);
}
