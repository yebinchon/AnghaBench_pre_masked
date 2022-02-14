
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page_entry {size_t bytes; char* page; unsigned int order; unsigned long context_depth; size_t num_free_objects; int next_bit_hint; unsigned long* in_use_p; TYPE_1__* group; struct page_entry* next; } ;
struct TYPE_4__ {char* allocation; size_t alloc_size; scalar_t__ in_use; struct TYPE_4__* next; } ;
typedef TYPE_1__ page_group ;
typedef int page_entry ;
struct TYPE_5__ {size_t pagesize; int lg_pagesize; size_t bytes_mapped; unsigned long context_depth; unsigned long context_depth_allocations; int debug_file; struct page_entry* free_pages; TYPE_1__* page_groups; } ;


 size_t FUNC_0 (size_t) ;
 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_1 (unsigned int) ;
 size_t FUNC_2 (unsigned int) ;
 char* FUNC_3 (int *,size_t) ;
 int FUNC_4 (int ,char*,void*,unsigned long,char*,char*) ;
 int FUNC_5 (struct page_entry*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct page_entry*,int ,size_t) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (char*,struct page_entry*) ;
 struct page_entry* FUNC_10 (int,size_t) ;
 char* FUNC_11 (size_t) ;

__attribute__((used)) static inline struct page_entry *
FUNC_12 (unsigned VAR_4)
{
  struct page_entry *VAR_5, *VAR_6, **VAR_7;
  char *VAR_8;
  size_t VAR_9;
  size_t VAR_10;
  size_t VAR_11;
  size_t VAR_12;




  VAR_9 = FUNC_1 (VAR_4);
  VAR_10 = FUNC_0 (VAR_9 + 1);
  VAR_11 = sizeof (page_entry) - sizeof (long) + VAR_10;
  VAR_12 = VAR_9 * FUNC_2 (VAR_4);
  if (VAR_12 < VAR_0.pagesize)
    VAR_12 = VAR_0.pagesize;

  VAR_5 = ((void*)0);
  VAR_8 = ((void*)0);


  for (VAR_7 = &VAR_0.free_pages, VAR_6 = *VAR_7; VAR_6; VAR_7 = &VAR_6->next, VAR_6 = *VAR_7)
    if (VAR_6->bytes == VAR_12)
      break;

  if (VAR_6 != ((void*)0))
    {

      *VAR_7 = VAR_6->next;
      VAR_8 = VAR_6->page;






      if (VAR_6->order == VAR_4)
 {
   VAR_5 = VAR_6;
   FUNC_7 (VAR_5, 0, VAR_11);
 }
      else
 FUNC_5 (VAR_6);
    }
  if (VAR_5 == ((void*)0))
    VAR_5 = FUNC_10 (1, VAR_11);

  VAR_5->bytes = VAR_12;
  VAR_5->page = VAR_8;
  VAR_5->context_depth = VAR_0.context_depth;
  VAR_5->order = VAR_4;
  VAR_5->num_free_objects = VAR_9;
  VAR_5->next_bit_hint = 1;

  VAR_0.context_depth_allocations |= (unsigned long)1 << VAR_0.context_depth;
  VAR_5->in_use_p[VAR_9 / VAR_3]
    = (unsigned long) 1 << (VAR_9 % VAR_3);

  FUNC_9 (VAR_8, VAR_5);

  if (VAR_1 >= 2)
    FUNC_4 (VAR_0.debug_file,
      "Allocating page at %p, object size=%lu, data %p-%p\n",
      (void *) VAR_5, (unsigned long) FUNC_2 (VAR_4), VAR_8,
      VAR_8 + VAR_12 - 1);

  return VAR_5;
}
