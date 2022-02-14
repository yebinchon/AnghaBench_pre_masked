
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {struct TYPE_9__* next; void* value; struct TYPE_9__* name; } ;
typedef TYPE_1__ ht_elt ;
struct TYPE_10__ {scalar_t__ num_buckets; scalar_t__ size; TYPE_1__** buckets; } ;
typedef TYPE_2__ HT ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (char const*,TYPE_1__*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;
 TYPE_1__* FUNC_5 (char const*) ;

__attribute__((used)) static void *
FUNC_6(HT *VAR_0, const char *VAR_1, void *VAR_2)
{
 uint32_t VAR_3;
 size_t VAR_4;
 ht_elt *VAR_5, **VAR_6;

 VAR_3 = FUNC_2(VAR_1);
 VAR_4 = (size_t)(VAR_3 & ((uint32_t)VAR_0->num_buckets - 1));
 VAR_6 = &VAR_0->buckets[VAR_4];
 VAR_5 = *VAR_6;
 while (VAR_5 != ((void*)0)) {
  if (FUNC_1(VAR_1, VAR_5->name)) {
   void *VAR_7;

   VAR_7 = VAR_5->value;
   if (VAR_2 == ((void*)0)) {
    *VAR_6 = VAR_5->next;
    FUNC_3(VAR_5->name);
    FUNC_3(VAR_5);
    VAR_0->size --;
   } else {
    VAR_5->value = VAR_2;
   }
   return VAR_7;
  }
  VAR_6 = &VAR_5->next;
  VAR_5 = *VAR_6;
 }
 if (VAR_2 != ((void*)0)) {
  VAR_5 = FUNC_4(sizeof *VAR_5);
  VAR_5->name = FUNC_5(VAR_1);
  VAR_5->value = VAR_2;
  VAR_5->next = VAR_0->buckets[VAR_4];
  VAR_0->buckets[VAR_4] = VAR_5;
  VAR_0->size ++;
  if (VAR_0->size > VAR_0->num_buckets) {
   FUNC_0(VAR_0);
  }
 }
 return ((void*)0);
}
