
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_malloc {int * free; int * malloc; int * realloc; } ;
struct ck_array {int * transaction; struct _ck_array* active; struct ck_malloc* allocator; scalar_t__ n_entries; } ;
struct _ck_array {int dummy; } ;


 struct _ck_array* FUNC_0 (struct ck_malloc*,unsigned int) ;

bool
FUNC_1(struct ck_array *VAR_0, unsigned int VAR_1, struct ck_malloc *VAR_2, unsigned int VAR_3)
{
 struct _ck_array *VAR_4;

 (void)VAR_1;

 if (VAR_2->realloc == ((void*)0) ||
     VAR_2->malloc == ((void*)0) ||
     VAR_2->free == ((void*)0) ||
     VAR_3 == 0)
  return 0;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 == ((void*)0))
  return 0;

 VAR_0->n_entries = 0;
 VAR_0->allocator = VAR_2;
 VAR_0->active = VAR_4;
 VAR_0->transaction = ((void*)0);
 return 1;
}
