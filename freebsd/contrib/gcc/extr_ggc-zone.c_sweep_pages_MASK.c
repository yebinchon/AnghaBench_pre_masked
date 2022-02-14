
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char* page; int survived; int large_p; } ;
struct small_page_entry {int* mark_bits; unsigned int* alloc_bits; struct small_page_entry* next; TYPE_3__ common; } ;
struct TYPE_4__ {int large_p; char* page; int survived; } ;
struct large_page_entry {int mark_p; TYPE_2__* prev; struct large_page_entry* next; TYPE_1__ common; scalar_t__ bytes; } ;
struct alloc_zone {char* free_chunks; size_t allocated; struct small_page_entry* pages; struct large_page_entry* large_pages; scalar_t__ cached_free_size; int * cached_free; scalar_t__ high_free_bin; } ;
typedef int mark_type ;
typedef unsigned int alloc_type ;
struct TYPE_5__ {struct large_page_entry* next; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (char*,int,struct alloc_zone*) ;
 int FUNC_4 (struct large_page_entry*) ;
 int FUNC_5 (struct small_page_entry*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (struct small_page_entry*,char*) ;

__attribute__((used)) static void
FUNC_10 (struct alloc_zone *VAR_3)
{
  struct large_page_entry **VAR_4, *VAR_5, *VAR_6;
  struct small_page_entry **VAR_7, *VAR_8, *VAR_9;
  char *VAR_10;
  size_t VAR_11 = 0;
  bool VAR_12;



  FUNC_7 (VAR_3->free_chunks, 0, sizeof (VAR_3->free_chunks));
  VAR_3->high_free_bin = 0;
  VAR_3->cached_free = ((void*)0);
  VAR_3->cached_free_size = 0;



  VAR_4 = &VAR_3->large_pages;
  for (VAR_5 = VAR_3->large_pages; VAR_5 != ((void*)0); VAR_5 = VAR_6)
    {
      FUNC_6 (VAR_5->common.large_p);

      VAR_6 = VAR_5->next;






      if (VAR_5->mark_p)
 {
   VAR_5->mark_p = 0;
   VAR_11 += VAR_5->bytes;
   VAR_4 = &VAR_5->next;
 }
      else
 {
   *VAR_4 = VAR_6;




   if (VAR_5->prev)
     VAR_5->prev->next = VAR_5->next;
   if (VAR_5->next)
     VAR_5->next->prev = VAR_5->prev;
   FUNC_4 (VAR_5);
 }
    }

  VAR_7 = &VAR_3->pages;
  for (VAR_8 = VAR_3->pages; VAR_8 != ((void*)0); VAR_8 = VAR_9)
    {
      char *VAR_13, *VAR_14;
      char *VAR_15;
      alloc_type *VAR_16;
      mark_type *VAR_17;

      FUNC_6 (!VAR_8->common.large_p);

      VAR_9 = VAR_8->next;
      VAR_14 = VAR_13 = VAR_8->common.page;
      VAR_15 = VAR_8->common.page + VAR_2;
      VAR_10 = ((void*)0);
      VAR_12 = 1;
      VAR_17 = VAR_8->mark_bits;
      VAR_16 = VAR_8->alloc_bits;

      FUNC_6 (VAR_0 == VAR_1);

      VAR_13 = VAR_8->common.page;
      do
 {
   unsigned int VAR_18, VAR_19;
   alloc_type VAR_20;
   mark_type VAR_21;

   VAR_20 = *VAR_16++;
   VAR_21 = *VAR_17++;

   if (VAR_21)
     VAR_12 = 0;


   VAR_18 = 0;
   while ((VAR_19 = FUNC_2 (VAR_20)) != 0)
     {



       VAR_20 >>= VAR_19 - 1;
       VAR_21 >>= VAR_19 - 1;
       VAR_13 += VAR_1 * (VAR_19 - 1);

       if (VAR_21 & 1)
  {
    if (VAR_10)
      {
        FUNC_0 (FUNC_1 (VAR_10,
        VAR_13
        - VAR_10));
        FUNC_8 (VAR_10, VAR_13 - VAR_10);
        FUNC_3 (VAR_10, VAR_13 - VAR_10, VAR_3);
        VAR_10 = ((void*)0);
      }
    else
      VAR_11 += VAR_13 - VAR_14;
    VAR_14 = VAR_13;
  }
       else
  {
    if (VAR_10 == ((void*)0))
      {
        VAR_10 = VAR_13;
        VAR_11 += VAR_13 - VAR_14;
      }
    else
      FUNC_9 (VAR_8, VAR_13);
  }


       VAR_20 >>= 1;
       VAR_21 >>= 1;
       VAR_13 += VAR_1;

       VAR_18 += VAR_19;
     }

   VAR_13 += VAR_1 * (8 * sizeof (alloc_type) - VAR_18);
 }
      while (VAR_13 < VAR_15);

      if (VAR_12)
 {
   *VAR_7 = VAR_9;





   FUNC_5 (VAR_8);
   continue;
 }
      else if (VAR_10)
 {
   FUNC_0 (FUNC_1 (VAR_10,
          VAR_13 - VAR_10));
   FUNC_8 (VAR_10, VAR_13 - VAR_10);
   FUNC_3 (VAR_10, VAR_13 - VAR_10, VAR_3);
 }
      else
 VAR_11 += VAR_13 - VAR_14;

      VAR_7 = &VAR_8->next;
    }

  VAR_3->allocated = VAR_11;
}
