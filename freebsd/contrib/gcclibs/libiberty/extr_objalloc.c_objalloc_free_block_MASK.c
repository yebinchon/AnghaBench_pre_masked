
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objalloc_chunk {char* current_ptr; struct objalloc_chunk* next; } ;
struct objalloc {char* current_ptr; int current_space; void* chunks; } ;
typedef void* PTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct objalloc_chunk*) ;

void
FUNC_2 (struct objalloc *VAR_2, PTR VAR_3)
{
  struct objalloc_chunk *VAR_4, *VAR_5;
  char *VAR_6 = (char *) VAR_3;



  VAR_5 = ((void*)0);
  for (VAR_4 = (struct objalloc_chunk *) VAR_2->chunks; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
    {
      if (VAR_4->current_ptr == ((void*)0))
 {
   if (VAR_6 > (char *) VAR_4 && VAR_6 < (char *) VAR_4 + VAR_1)
     break;
   VAR_5 = VAR_4;
 }
      else
 {
   if (VAR_6 == (char *) VAR_4 + VAR_0)
     break;
 }
    }


  if (VAR_4 == ((void*)0))
    FUNC_0 ();

  if (VAR_4->current_ptr == ((void*)0))
    {
      struct objalloc_chunk *VAR_7;
      struct objalloc_chunk *VAR_8;
      VAR_8 = ((void*)0);
      VAR_7 = (struct objalloc_chunk *) VAR_2->chunks;
      while (VAR_7 != VAR_4)
 {
   struct objalloc_chunk *VAR_9;

   VAR_9 = VAR_7->next;
   if (VAR_5 != ((void*)0))
     {
       if (VAR_5 == VAR_7)
  VAR_5 = ((void*)0);
       FUNC_1 (VAR_7);
     }
   else if (VAR_7->current_ptr > VAR_6)
     FUNC_1 (VAR_7);
   else if (VAR_8 == ((void*)0))
     VAR_8 = VAR_7;

   VAR_7 = VAR_9;
 }

      if (VAR_8 == ((void*)0))
 VAR_8 = VAR_4;
      VAR_2->chunks = (PTR) VAR_8;


      VAR_2->current_ptr = VAR_6;
      VAR_2->current_space = ((char *) VAR_4 + VAR_1) - VAR_6;
    }
  else
    {
      struct objalloc_chunk *VAR_10;
      char *VAR_11;







      VAR_11 = VAR_4->current_ptr;
      VAR_4 = VAR_4->next;

      VAR_10 = (struct objalloc_chunk *) VAR_2->chunks;
      while (VAR_10 != VAR_4)
 {
   struct objalloc_chunk *VAR_12;

   VAR_12 = VAR_10->next;
   FUNC_1 (VAR_10);
   VAR_10 = VAR_12;
 }

      VAR_2->chunks = (PTR) VAR_4;

      while (VAR_4->current_ptr != ((void*)0))
 VAR_4 = VAR_4->next;

      VAR_2->current_ptr = VAR_11;
      VAR_2->current_space = ((char *) VAR_4 + VAR_1) - VAR_11;
    }
}
