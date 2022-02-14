
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objalloc_chunk {char* current_ptr; struct objalloc_chunk* next; } ;
struct objalloc {unsigned long current_space; char* current_ptr; int * chunks; } ;
typedef int * PTR ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int * FUNC_1 (struct objalloc*,unsigned long) ;

PTR
FUNC_2 (struct objalloc *VAR_4, unsigned long VAR_5)
{
  unsigned long VAR_6 = VAR_5;



  if (VAR_6 == 0)
    VAR_6 = 1;

  VAR_6 = (VAR_6 + VAR_3 - 1) &~ (VAR_3 - 1);



  if (VAR_6 + VAR_1 < VAR_5)
      return ((void*)0);

  if (VAR_6 <= VAR_4->current_space)
    {
      VAR_4->current_ptr += VAR_6;
      VAR_4->current_space -= VAR_6;
      return (PTR) (VAR_4->current_ptr - VAR_6);
    }

  if (VAR_6 >= VAR_0)
    {
      char *VAR_7;
      struct objalloc_chunk *VAR_8;

      VAR_7 = (char *) FUNC_0 (VAR_1 + VAR_6);
      if (VAR_7 == ((void*)0))
 return ((void*)0);

      VAR_8 = (struct objalloc_chunk *) VAR_7;
      VAR_8->next = (struct objalloc_chunk *) VAR_4->chunks;
      VAR_8->current_ptr = VAR_4->current_ptr;

      VAR_4->chunks = (PTR) VAR_8;

      return (PTR) (VAR_7 + VAR_1);
    }
  else
    {
      struct objalloc_chunk *VAR_9;

      VAR_9 = (struct objalloc_chunk *) FUNC_0 (VAR_2);
      if (VAR_9 == ((void*)0))
 return ((void*)0);
      VAR_9->next = (struct objalloc_chunk *) VAR_4->chunks;
      VAR_9->current_ptr = ((void*)0);

      VAR_4->current_ptr = (char *) VAR_9 + VAR_1;
      VAR_4->current_space = VAR_2 - VAR_1;

      VAR_4->chunks = (PTR) VAR_9;

      return FUNC_1 (VAR_4, VAR_6);
    }
}
