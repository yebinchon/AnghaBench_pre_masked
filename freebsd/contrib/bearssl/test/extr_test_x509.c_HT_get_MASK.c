
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {void* value; int name; struct TYPE_4__* next; } ;
typedef TYPE_1__ ht_elt ;
struct TYPE_5__ {TYPE_1__** buckets; scalar_t__ num_buckets; } ;
typedef TYPE_2__ HT ;


 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void *
FUNC_2(const HT *VAR_0, const char *VAR_1)
{
 uint32_t VAR_2;
 size_t VAR_3;
 ht_elt *VAR_4;

 VAR_2 = FUNC_1(VAR_1);
 VAR_3 = (size_t)(VAR_2 & ((uint32_t)VAR_0->num_buckets - 1));
 for (VAR_4 = VAR_0->buckets[VAR_3]; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
  if (FUNC_0(VAR_1, VAR_4->name)) {
   return VAR_4->value;
  }
 }
 return ((void*)0);
}
