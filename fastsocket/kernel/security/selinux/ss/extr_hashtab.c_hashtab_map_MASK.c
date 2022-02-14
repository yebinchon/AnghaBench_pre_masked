
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct hashtab_node {void* key; void* datum; struct hashtab_node* next; } ;
struct hashtab {size_t size; struct hashtab_node** htable; } ;



int FUNC_0(struct hashtab *VAR_0,
  int (*VAR_1)(void *VAR_2, void *VAR_3, void *VAR_4),
  void *VAR_5)
{
 u32 VAR_6;
 int VAR_7;
 struct hashtab_node *VAR_8;

 if (!VAR_0)
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_0->size; VAR_6++) {
  VAR_8 = VAR_0->htable[VAR_6];
  while (VAR_8) {
   VAR_7 = VAR_1(VAR_8->key, VAR_8->datum, VAR_5);
   if (VAR_7)
    return VAR_7;
   VAR_8 = VAR_8->next;
  }
 }
 return 0;
}
