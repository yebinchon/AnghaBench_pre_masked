
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending_block {struct pending_block* next; struct block* block; } ;
struct objfile {int objfile_obstack; } ;
struct block {int dummy; } ;


 scalar_t__ FUNC_0 (int *,int) ;
 struct pending_block* VAR_0 ;

void
FUNC_1 (struct objfile *VAR_1, struct block *VAR_2,
        struct pending_block *VAR_3)
{
  struct pending_block *VAR_4;

  VAR_4 = (struct pending_block *)
    FUNC_0 (&VAR_1->objfile_obstack, sizeof (struct pending_block));
  VAR_4->block = VAR_2;
  if (VAR_3)
    {
      VAR_4->next = VAR_3->next;
      VAR_3->next = VAR_4;
    }
  else
    {
      VAR_4->next = VAR_0;
      VAR_0 = VAR_4;
    }
}
