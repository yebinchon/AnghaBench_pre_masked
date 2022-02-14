
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct hashtab_node {struct hashtab_node* next; void* datum; void* key; } ;
struct hashtab {scalar_t__ nel; size_t (* hash_value ) (struct hashtab*,void*) ;scalar_t__ (* keycmp ) (struct hashtab*,void*,void*) ;struct hashtab_node** htable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct hashtab_node* FUNC_0 (int,int ) ;
 size_t FUNC_1 (struct hashtab*,void*) ;
 scalar_t__ FUNC_2 (struct hashtab*,void*,void*) ;
 scalar_t__ FUNC_3 (struct hashtab*,void*,void*) ;

int FUNC_4(struct hashtab *VAR_5, void *VAR_6, void *VAR_7)
{
 u32 VAR_8;
 struct hashtab_node *VAR_9, *VAR_10, *VAR_11;

 if (!VAR_5 || VAR_5->nel == VAR_4)
  return -VAR_1;

 VAR_8 = VAR_5->hash_value(VAR_5, VAR_6);
 VAR_9 = ((void*)0);
 VAR_10 = VAR_5->htable[VAR_8];
 while (VAR_10 && VAR_5->keycmp(VAR_5, VAR_6, VAR_10->key) > 0) {
  VAR_9 = VAR_10;
  VAR_10 = VAR_10->next;
 }

 if (VAR_10 && (VAR_5->keycmp(VAR_5, VAR_6, VAR_10->key) == 0))
  return -VAR_0;

 VAR_11 = FUNC_0(sizeof(*VAR_11), VAR_3);
 if (VAR_11 == ((void*)0))
  return -VAR_2;
 VAR_11->key = VAR_6;
 VAR_11->datum = VAR_7;
 if (VAR_9) {
  VAR_11->next = VAR_9->next;
  VAR_9->next = VAR_11;
 } else {
  VAR_11->next = VAR_5->htable[VAR_8];
  VAR_5->htable[VAR_8] = VAR_11;
 }

 VAR_5->nel++;
 return 0;
}
