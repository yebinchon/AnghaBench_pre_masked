
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_array {unsigned int n_entries; struct _ck_array* transaction; struct _ck_array* active; int allocator; } ;
struct _ck_array {void** values; unsigned int n_committed; int length; } ;


 struct _ck_array* FUNC_0 (int ,size_t) ;
 int FUNC_1 (void**,void*) ;
 int FUNC_2 (void**,void**,int) ;

bool
FUNC_3(struct ck_array *VAR_0, void *VAR_1)
{
 struct _ck_array *VAR_2;
 unsigned int VAR_3;

 if (VAR_0->transaction != ((void*)0)) {
  VAR_2 = VAR_0->transaction;

  for (VAR_3 = 0; VAR_3 < VAR_0->n_entries; VAR_3++) {
   if (VAR_2->values[VAR_3] == VAR_1) {
    VAR_2->values[VAR_3] = VAR_2->values[--VAR_0->n_entries];
    return 1;
   }
  }

  return 0;
 }

 VAR_2 = VAR_0->active;

 for (VAR_3 = 0; VAR_3 < VAR_0->n_entries; VAR_3++) {
  if (VAR_2->values[VAR_3] == VAR_1)
   break;
 }

 if (VAR_3 == VAR_0->n_entries)
  return 0;


 if (VAR_2->n_committed != VAR_0->n_entries) {
  FUNC_1(&VAR_2->values[VAR_3], VAR_2->values[--VAR_0->n_entries]);
  return 1;
 }






 VAR_2 = FUNC_0(VAR_0->allocator, VAR_0->n_entries);
 if (VAR_2 == ((void*)0))
  return 0;

 FUNC_2(VAR_2->values, VAR_0->active->values, sizeof(void *) * VAR_0->n_entries);
 VAR_2->length = VAR_0->n_entries;
 VAR_2->n_committed = VAR_0->n_entries;
 VAR_2->values[VAR_3] = VAR_2->values[--VAR_0->n_entries];

 VAR_0->transaction = VAR_2;
 return 1;
}
