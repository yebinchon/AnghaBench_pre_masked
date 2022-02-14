
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page_entry {int context_depth; size_t bytes; char* page; unsigned int order; int* in_use_p; struct page_entry* next; scalar_t__ num_free_objects; } ;
struct ggc_pch_ondisk {size_t* totals; } ;
typedef struct page_entry page_entry ;
typedef int d ;
struct TYPE_2__ {unsigned long by_depth_in_use; int context_depth; int allocated; int allocated_last_gc; struct page_entry** page_tails; struct page_entry** pages; int pagesize; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (size_t) ;
 TYPE_1__ VAR_0 ;
 size_t VAR_1 ;
 unsigned int VAR_2 ;
 size_t FUNC_1 (unsigned int) ;
 size_t FUNC_2 (size_t,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct ggc_pch_ondisk*,int,int,int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (unsigned long,unsigned long) ;
 int FUNC_8 () ;
 int FUNC_9 (struct page_entry*,int ) ;
 int FUNC_10 (char*,struct page_entry*) ;
 struct page_entry* FUNC_11 (int,scalar_t__) ;

void
FUNC_12 (FILE *VAR_3, void *VAR_4)
{
  struct ggc_pch_ondisk VAR_5;
  unsigned VAR_6;
  char *VAR_7 = VAR_4;
  unsigned long VAR_8;
  unsigned long VAR_9;

  VAR_8 = VAR_0.by_depth_in_use;



  FUNC_3 ();







  FUNC_6 (!VAR_0.context_depth);
  VAR_0.context_depth = 1;
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
    {
      page_entry *VAR_10;
      for (VAR_10 = VAR_0.pages[VAR_6]; VAR_10 != ((void*)0); VAR_10 = VAR_10->next)
 VAR_10->context_depth = VAR_0.context_depth;
    }



  if (FUNC_5 (&VAR_5, sizeof (VAR_5), 1, VAR_3) != 1)
    FUNC_4 ("can't read PCH file: %m");

  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
    {
      struct page_entry *VAR_11;
      char *VAR_12;
      size_t VAR_13;
      size_t VAR_14;
      size_t VAR_15;

      if (VAR_5.totals[VAR_6] == 0)
 continue;

      VAR_13 = FUNC_2 (VAR_5.totals[VAR_6] * FUNC_1 (VAR_6), VAR_0.pagesize);
      VAR_14 = VAR_13 / FUNC_1 (VAR_6);
      VAR_11 = FUNC_11 (1, (sizeof (struct page_entry)
      - sizeof (long)
      + FUNC_0 (VAR_14 + 1)));
      VAR_11->bytes = VAR_13;
      VAR_11->page = VAR_7;
      VAR_11->context_depth = 0;
      VAR_7 += VAR_13;
      VAR_11->num_free_objects = 0;
      VAR_11->order = VAR_6;

      for (VAR_15 = 0;
    VAR_15 + VAR_1 <= VAR_14 + 1;
    VAR_15 += VAR_1)
 VAR_11->in_use_p[VAR_15 / VAR_1] = -1;
      for (; VAR_15 < VAR_14 + 1; VAR_15++)
 VAR_11->in_use_p[VAR_15 / VAR_1]
   |= 1L << (VAR_15 % VAR_1);

      for (VAR_12 = VAR_11->page;
    VAR_12 < VAR_11->page + VAR_11->bytes;
    VAR_12 += VAR_0.pagesize)
 FUNC_10 (VAR_12, VAR_11);

      if (VAR_0.page_tails[VAR_6] != ((void*)0))
 VAR_0.page_tails[VAR_6]->next = VAR_11;
      else
 VAR_0.pages[VAR_6] = VAR_11;
      VAR_0.page_tails[VAR_6] = VAR_11;





      FUNC_9 (VAR_11, 0);
    }



  VAR_9 = VAR_0.by_depth_in_use - VAR_8;

  FUNC_7 (VAR_8, VAR_9);


  VAR_0.allocated = VAR_0.allocated_last_gc = VAR_7 - (char *)VAR_4;
}
