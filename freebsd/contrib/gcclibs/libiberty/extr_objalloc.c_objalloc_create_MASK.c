
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objalloc_chunk {int * current_ptr; int * next; } ;
struct objalloc {char* current_ptr; int current_space; int * chunks; } ;
typedef int * PTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct objalloc*) ;
 scalar_t__ FUNC_1 (int) ;

struct objalloc *
FUNC_2 (void)
{
  struct objalloc *VAR_2;
  struct objalloc_chunk *VAR_3;

  VAR_2 = (struct objalloc *) FUNC_1 (sizeof *VAR_2);
  if (VAR_2 == ((void*)0))
    return ((void*)0);

  VAR_2->chunks = (PTR) FUNC_1 (VAR_1);
  if (VAR_2->chunks == ((void*)0))
    {
      FUNC_0 (VAR_2);
      return ((void*)0);
    }

  VAR_3 = (struct objalloc_chunk *) VAR_2->chunks;
  VAR_3->next = ((void*)0);
  VAR_3->current_ptr = ((void*)0);

  VAR_2->current_ptr = (char *) VAR_3 + VAR_0;
  VAR_2->current_space = VAR_1 - VAR_0;

  return VAR_2;
}
