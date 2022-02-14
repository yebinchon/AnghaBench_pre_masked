
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct small_page_entry {int alloc_bits; struct small_page_entry* next; } ;
struct page_entry {char* page; int pch_p; } ;
struct large_page_entry {struct large_page_entry* next; } ;
struct ggc_pch_ondisk {int total; } ;
struct alloc_zone {struct large_page_entry* large_pages; struct small_page_entry* pages; scalar_t__ cached_free_size; int * cached_free; scalar_t__ high_free_bin; int free_chunks; scalar_t__ allocated; struct alloc_zone* next_zone; } ;
typedef int d ;
typedef int alloc_type ;
struct TYPE_4__ {int small_page_overhead; struct alloc_zone* zones; } ;
struct TYPE_3__ {int bytes; char* page; char* end; int * alloc_bits; } ;
typedef int FILE ;


 int VAR_0 ;
 size_t FUNC_0 (int,int) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_1 (size_t,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct ggc_pch_ondisk*,int,int,int *) ;
 int FUNC_4 (struct large_page_entry*) ;
 int FUNC_5 (struct small_page_entry*) ;
 int FUNC_6 (int ,int ,int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_7 (char*,struct page_entry*) ;
 struct page_entry* FUNC_8 (int,int) ;

void
FUNC_9 (FILE *VAR_6, void *VAR_7)
{
  struct ggc_pch_ondisk VAR_8;
  size_t VAR_9;
  struct alloc_zone *VAR_10;
  struct page_entry *VAR_11;
  char *VAR_12;

  if (FUNC_3 (&VAR_8, sizeof (VAR_8), 1, VAR_6) != 1)
    FUNC_2 ("can't read PCH file: %m");

  VAR_9 = FUNC_0 (VAR_8.total, VAR_0 * 8);
  VAR_9 = FUNC_1 (VAR_9, VAR_3);

  VAR_5.bytes = VAR_8.total;
  VAR_5.alloc_bits = (alloc_type *) ((char *) VAR_7 + VAR_5.bytes);
  VAR_5.page = (char *) VAR_7;
  VAR_5.end = (char *) VAR_5.alloc_bits;



  for (VAR_10 = VAR_1.zones; VAR_10; VAR_10 = VAR_10->next_zone)
    {
      struct small_page_entry *VAR_13, *VAR_14;
      struct large_page_entry *VAR_15, *VAR_16;

      VAR_10->allocated = 0;


      FUNC_6 (VAR_10->free_chunks, 0, sizeof (VAR_10->free_chunks));
      VAR_10->high_free_bin = 0;
      VAR_10->cached_free = ((void*)0);
      VAR_10->cached_free_size = 0;


      for (VAR_13 = VAR_10->pages; VAR_13 != ((void*)0); VAR_13 = VAR_14)
 {
   VAR_14 = VAR_13->next;
   FUNC_6 (VAR_13->alloc_bits, 0,
    VAR_1.small_page_overhead - VAR_4);
   FUNC_5 (VAR_13);
 }


      for (VAR_15 = VAR_10->large_pages; VAR_15 != ((void*)0);
    VAR_15 = VAR_16)
 {
   VAR_16 = VAR_15->next;
   FUNC_4 (VAR_15);
 }

      VAR_10->pages = ((void*)0);
      VAR_10->large_pages = ((void*)0);
    }



  VAR_11 = FUNC_8 (1, sizeof (struct page_entry));
  VAR_11->page = VAR_5.page;
  VAR_11->pch_p = 1;

  for (VAR_12 = VAR_5.page; VAR_12 < VAR_5.end; VAR_12 += VAR_2)
    FUNC_7 (VAR_12, VAR_11);
}
