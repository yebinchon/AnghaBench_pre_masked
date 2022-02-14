
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objalloc_chunk {struct objalloc_chunk* next; scalar_t__ chunks; } ;
struct objalloc {struct objalloc* next; scalar_t__ chunks; } ;


 int FUNC_0 (struct objalloc_chunk*) ;

void
FUNC_1 (struct objalloc *VAR_0)
{
  struct objalloc_chunk *VAR_1;

  VAR_1 = (struct objalloc_chunk *) VAR_0->chunks;
  while (VAR_1 != ((void*)0))
    {
      struct objalloc_chunk *VAR_2;

      VAR_2 = VAR_1->next;
      FUNC_0 (VAR_1);
      VAR_1 = VAR_2;
    }

  FUNC_0 (VAR_0);
}
