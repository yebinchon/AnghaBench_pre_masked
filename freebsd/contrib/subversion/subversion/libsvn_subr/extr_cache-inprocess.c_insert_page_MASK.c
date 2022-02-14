
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cache_page {struct cache_page* prev; struct cache_page* next; } ;
struct TYPE_3__ {struct cache_page* sentinel; } ;
typedef TYPE_1__ inprocess_cache_t ;



__attribute__((used)) static void
FUNC_0(inprocess_cache_t *VAR_0,
            struct cache_page *VAR_1)
{
  struct cache_page *VAR_2 = VAR_0->sentinel;

  VAR_1->prev = VAR_2;
  VAR_1->next = VAR_2->next;
  VAR_1->prev->next = VAR_1;
  VAR_1->next->prev = VAR_1;
}
