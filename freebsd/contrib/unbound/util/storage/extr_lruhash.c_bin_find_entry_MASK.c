
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lruhash_entry {scalar_t__ hash; struct lruhash_entry* overflow_next; int key; } ;
struct lruhash_bin {struct lruhash_entry* overflow_list; } ;
struct lruhash {scalar_t__ (* compfunc ) (int ,void*) ;} ;
typedef scalar_t__ hashvalue_type ;


 scalar_t__ FUNC_0 (int ,void*) ;

struct lruhash_entry*
FUNC_1(struct lruhash* VAR_0,
 struct lruhash_bin* VAR_1, hashvalue_type VAR_2, void* VAR_3)
{
 struct lruhash_entry* VAR_4 = VAR_1->overflow_list;
 while(VAR_4) {
  if(VAR_4->hash == VAR_2 && VAR_0->compfunc(VAR_4->key, VAR_3) == 0)
   return VAR_4;
  VAR_4 = VAR_4->overflow_next;
 }
 return ((void*)0);
}
