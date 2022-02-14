
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {struct TYPE_6__* next; int name; } ;
typedef TYPE_1__ ht_elt ;
struct TYPE_7__ {size_t num_buckets; TYPE_1__** buckets; } ;
typedef TYPE_2__ HT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__**) ;
 TYPE_1__** FUNC_2 (size_t) ;

__attribute__((used)) static void
FUNC_3(HT *VAR_0)
{
 size_t VAR_1, VAR_2, VAR_3;
 ht_elt **VAR_4;

 VAR_1 = VAR_0->num_buckets;
 VAR_2 = VAR_1 << 1;
 VAR_4 = FUNC_2(VAR_2 * sizeof *VAR_4);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 ++) {
  VAR_4[VAR_3] = ((void*)0);
 }
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3 ++) {
  ht_elt *VAR_5, *VAR_6;

  VAR_6 = ((void*)0);
  for (VAR_5 = VAR_0->buckets[VAR_3]; VAR_5 != ((void*)0); VAR_5 = VAR_6) {
   uint32_t VAR_7;
   size_t VAR_8;

   VAR_7 = FUNC_0(VAR_5->name);
   VAR_8 = (size_t)(VAR_7 & ((uint32_t)VAR_2 - 1));
   VAR_6 = VAR_5->next;
   VAR_5->next = VAR_4[VAR_8];
   VAR_4[VAR_8] = VAR_5;
  }
 }
 FUNC_1(VAR_0->buckets);
 VAR_0->buckets = VAR_4;
 VAR_0->num_buckets = VAR_2;
}
