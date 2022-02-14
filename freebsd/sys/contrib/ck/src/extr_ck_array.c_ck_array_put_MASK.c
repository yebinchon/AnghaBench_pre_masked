
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ck_array {int n_entries; struct _ck_array* transaction; TYPE_1__* allocator; struct _ck_array* active; } ;
struct _ck_array {int length; void** values; } ;
struct TYPE_2__ {struct _ck_array* (* realloc ) (struct _ck_array*,int,int,int) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (struct _ck_array**,struct _ck_array*) ;
 int FUNC_2 (int*,unsigned int) ;
 struct _ck_array* FUNC_3 (struct _ck_array*,int,int,int) ;
 struct _ck_array* FUNC_4 (struct _ck_array*,int,int,int) ;

bool
FUNC_5(struct ck_array *VAR_0, void *VAR_1)
{
 struct _ck_array *VAR_2;
 unsigned int VAR_3;





 if (VAR_0->transaction == ((void*)0)) {
  VAR_2 = VAR_0->active;

  if (VAR_0->n_entries == VAR_2->length) {
   VAR_3 = VAR_2->length << 1;

   VAR_2 = VAR_0->allocator->realloc(VAR_2,
       sizeof(struct _ck_array) + sizeof(void *) * VAR_0->n_entries,
       sizeof(struct _ck_array) + sizeof(void *) * VAR_3,
       1);

   if (VAR_2 == ((void*)0))
    return 0;

   FUNC_2(&VAR_2->length, VAR_3);


   FUNC_0();
   FUNC_1(&VAR_0->active, VAR_2);
  }

  VAR_2->values[VAR_0->n_entries++] = VAR_1;
  return 1;
 }

 VAR_2 = VAR_0->transaction;
 if (VAR_0->n_entries == VAR_2->length) {
  VAR_3 = VAR_2->length << 1;

  VAR_2 = VAR_0->allocator->realloc(VAR_2,
      sizeof(struct _ck_array) + sizeof(void *) * VAR_0->n_entries,
      sizeof(struct _ck_array) + sizeof(void *) * VAR_3,
      1);

  if (VAR_2 == ((void*)0))
   return 0;

  VAR_2->length = VAR_3;
  VAR_0->transaction = VAR_2;
 }

 VAR_2->values[VAR_0->n_entries++] = VAR_1;
 return 0;
}
