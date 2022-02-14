
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct _ck_array {int length; int n_committed; } ;
struct TYPE_5__ {int n_entries; struct _ck_array* active; struct _ck_array* transaction; TYPE_1__* allocator; } ;
typedef TYPE_2__ ck_array_t ;
struct TYPE_4__ {int (* free ) (struct _ck_array*,int,int) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (struct _ck_array**,struct _ck_array*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct _ck_array*,int,int) ;

bool
FUNC_4(ck_array_t *VAR_0)
{
 struct _ck_array *VAR_1 = VAR_0->transaction;

 if (VAR_1 != ((void*)0)) {
  struct _ck_array *VAR_2;

  VAR_1->n_committed = VAR_0->n_entries;
  FUNC_0();
  VAR_2 = VAR_0->active;
  FUNC_1(&VAR_0->active, VAR_1);
  VAR_0->allocator->free(VAR_2, sizeof(struct _ck_array) +
      VAR_2->length * sizeof(void *), 1);
  VAR_0->transaction = ((void*)0);

  return 1;
 }

 FUNC_0();
 FUNC_2(&VAR_0->active->n_committed, VAR_0->n_entries);
 return 1;
}
