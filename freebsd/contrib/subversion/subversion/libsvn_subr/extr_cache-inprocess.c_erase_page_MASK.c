
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cache_page {int * next; int * prev; struct cache_entry* first_entry; int page_pool; } ;
struct cache_entry {int key; scalar_t__ size; struct cache_entry* next_entry; } ;
struct TYPE_3__ {scalar_t__ partial_page_number_filled; struct cache_page* partial_page; int klen; int hash; int data_size; } ;
typedef TYPE_1__ inprocess_cache_t ;


 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (struct cache_page*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(inprocess_cache_t *VAR_0,
           struct cache_page *VAR_1)
{
  struct cache_entry *VAR_2;

  FUNC_1(VAR_1);

  for (VAR_2 = VAR_1->first_entry;
       VAR_2;
       VAR_2 = VAR_2->next_entry)
    {
      VAR_0->data_size -= VAR_2->size;
      FUNC_0(VAR_0->hash, VAR_2->key, VAR_0->klen, ((void*)0));
    }

  FUNC_2(VAR_1->page_pool);

  VAR_1->first_entry = ((void*)0);
  VAR_1->prev = ((void*)0);
  VAR_1->next = ((void*)0);

  VAR_0->partial_page = VAR_1;
  VAR_0->partial_page_number_filled = 0;
}
