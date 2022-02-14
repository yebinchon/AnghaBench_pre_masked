
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* value; struct TYPE_5__* name; struct TYPE_5__* next; } ;
typedef TYPE_1__ ht_elt ;
struct TYPE_6__ {size_t num_buckets; scalar_t__ size; TYPE_1__** buckets; } ;
typedef TYPE_2__ HT ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(HT *VAR_0, void (*VAR_1)(void *VAR_2))
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_buckets; VAR_3 ++) {
  ht_elt *VAR_4, *VAR_5;

  VAR_5 = ((void*)0);
  for (VAR_4 = VAR_0->buckets[VAR_3]; VAR_4 != ((void*)0); VAR_4 = VAR_5) {
   VAR_5 = VAR_4->next;
   FUNC_0(VAR_4->name);
   if (VAR_1 != 0) {
    VAR_1(VAR_4->value);
   }
   FUNC_0(VAR_4);
  }
  VAR_0->buckets[VAR_3] = ((void*)0);
 }
 VAR_0->size = 0;
}
