
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objalloc_chunk {char* current_ptr; struct objalloc_chunk* next; } ;
struct objalloc {unsigned long current_space; char* current_ptr; int * chunks; } ;
typedef int * PTR ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int * FUNC_1 (struct objalloc*,unsigned long) ;

PTR
FUNC_2 (struct objalloc *VAR_4, unsigned long VAR_5)
{


  if (VAR_5 == 0)
    VAR_5 = 1;

  VAR_5 = (VAR_5 + VAR_3 - 1) &~ (VAR_3 - 1);

  if (VAR_5 <= VAR_4->current_space)
    {
      VAR_4->current_ptr += VAR_5;
      VAR_4->current_space -= VAR_5;
      return (PTR) (VAR_4->current_ptr - VAR_5);
    }

  if (VAR_5 >= VAR_0)
    {
      char *VAR_6;
      struct objalloc_chunk *VAR_7;

      VAR_6 = (char *) FUNC_0 (VAR_1 + VAR_5);
      if (VAR_6 == ((void*)0))
 return ((void*)0);

      VAR_7 = (struct objalloc_chunk *) VAR_6;
      VAR_7->next = (struct objalloc_chunk *) VAR_4->chunks;
      VAR_7->current_ptr = VAR_4->current_ptr;

      VAR_4->chunks = (PTR) VAR_7;

      return (PTR) (VAR_6 + VAR_1);
    }
  else
    {
      struct objalloc_chunk *VAR_8;

      VAR_8 = (struct objalloc_chunk *) FUNC_0 (VAR_2);
      if (VAR_8 == ((void*)0))
 return ((void*)0);
      VAR_8->next = (struct objalloc_chunk *) VAR_4->chunks;
      VAR_8->current_ptr = ((void*)0);

      VAR_4->current_ptr = (char *) VAR_8 + VAR_1;
      VAR_4->current_space = VAR_2 - VAR_1;

      VAR_4->chunks = (PTR) VAR_8;

      return FUNC_1 (VAR_4, VAR_5);
    }
}
