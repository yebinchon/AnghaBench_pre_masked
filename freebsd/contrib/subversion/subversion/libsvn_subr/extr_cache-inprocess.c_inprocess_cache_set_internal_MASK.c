
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_error_t ;
struct cache_page {struct cache_entry* first_entry; int page_pool; struct cache_page* prev; int * next; } ;
struct cache_entry {scalar_t__ size; int key; struct cache_entry* next_entry; struct cache_page* page; int * value; } ;
struct TYPE_7__ {int items_per_page; scalar_t__ unallocated_pages; int partial_page_number_filled; struct cache_page* partial_page; int klen; int hash; int data_size; int (* serialize_func ) (int **,scalar_t__*,void*,int ) ;struct cache_page* sentinel; int cache_pool; } ;
typedef TYPE_1__ inprocess_cache_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 struct cache_entry* FUNC_2 (int ,void const*,int ) ;
 int FUNC_3 (int ,int ,int ,struct cache_entry*) ;
 void* FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_1__*,void const*,int ) ;
 int FUNC_6 (TYPE_1__*,struct cache_page*) ;
 int FUNC_7 (TYPE_1__*,struct cache_page*) ;
 int FUNC_8 (TYPE_1__*,struct cache_page*) ;
 int FUNC_9 (int **,scalar_t__*,void*,int ) ;
 int FUNC_10 (int **,scalar_t__*,void*,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_12(inprocess_cache_t *VAR_1,
                             const void *VAR_2,
                             void *VAR_3,
                             apr_pool_t *VAR_4)
{
  struct cache_entry *VAR_5;

  VAR_5 = FUNC_2(VAR_1->hash, VAR_2, VAR_1->klen);



  if (VAR_5 && VAR_1->items_per_page == 1)
    {



      struct cache_page *VAR_6 = VAR_5->page;




      FUNC_1(VAR_6->next != ((void*)0));
      FUNC_1(VAR_1->partial_page == ((void*)0));

      FUNC_6(VAR_1, VAR_6);
      VAR_5 = ((void*)0);
    }


  if (VAR_5)
    {
      struct cache_page *VAR_7 = VAR_5->page;

      FUNC_0(FUNC_8(VAR_1, VAR_7));
      VAR_1->data_size -= VAR_5->size;
      if (VAR_3)
        {
          FUNC_0(VAR_1->serialize_func(&VAR_5->value,
                                        &VAR_5->size,
                                        VAR_3,
                                        VAR_7->page_pool));
          VAR_1->data_size += VAR_5->size;
          if (VAR_5->size == 0)
            VAR_5->value = ((void*)0);
        }
      else
        {
          VAR_5->value = ((void*)0);
          VAR_5->size = 0;
        }

      return VAR_0;
    }



  if (VAR_1->partial_page == ((void*)0) && VAR_1->unallocated_pages > 0)
    {
      VAR_1->partial_page = FUNC_4(VAR_1->cache_pool,
                                        sizeof(*(VAR_1->partial_page)));
      VAR_1->partial_page->page_pool = FUNC_11(VAR_1->cache_pool);
      VAR_1->partial_page_number_filled = 0;
      (VAR_1->unallocated_pages)--;
    }




  if (VAR_1->partial_page == ((void*)0))
    {
      struct cache_page *VAR_8 = VAR_1->sentinel->prev;

      FUNC_1(VAR_8 != VAR_1->sentinel);


      FUNC_6(VAR_1, VAR_8);
    }

  FUNC_1(VAR_1->partial_page != ((void*)0));

  {
    struct cache_page *VAR_9 = VAR_1->partial_page;
    struct cache_entry *VAR_10 = FUNC_4(VAR_9->page_pool,
                                                sizeof(*VAR_10));


    VAR_10->key = FUNC_5(VAR_1, VAR_2, VAR_9->page_pool);
    if (VAR_3)
      {
        FUNC_0(VAR_1->serialize_func(&VAR_10->value,
                                      &VAR_10->size,
                                      VAR_3,
                                      VAR_9->page_pool));
        VAR_1->data_size += VAR_10->size;
        if (VAR_10->size == 0)
          VAR_10->value = ((void*)0);
      }
    else
      {
        VAR_10->value = ((void*)0);
        VAR_10->size = 0;
      }


    VAR_10->page = VAR_9;
    VAR_10->next_entry = VAR_9->first_entry;
    VAR_9->first_entry = VAR_10;



    FUNC_3(VAR_1->hash, VAR_10->key, VAR_1->klen, VAR_10);


    (VAR_1->partial_page_number_filled)++;


    if (VAR_1->partial_page_number_filled >= VAR_1->items_per_page)
      {
        FUNC_7(VAR_1, VAR_9);
        VAR_1->partial_page = ((void*)0);
      }
  }

  return VAR_0;
}
