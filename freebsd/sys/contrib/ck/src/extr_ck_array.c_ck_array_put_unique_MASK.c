
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ck_array {unsigned int n_entries; TYPE_2__* active; TYPE_1__* transaction; } ;
struct TYPE_4__ {void** values; } ;
struct TYPE_3__ {void** values; } ;


 int FUNC_0 (struct ck_array*,void*) ;

int
FUNC_1(struct ck_array *VAR_0, void *VAR_1)
{
 unsigned int VAR_2, VAR_3;
 void **VAR_4;

 VAR_3 = VAR_0->n_entries;
 if (VAR_0->transaction != ((void*)0)) {
  VAR_4 = VAR_0->transaction->values;
 } else {
  VAR_4 = VAR_0->active->values;
 }

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  if (VAR_4[VAR_2] == VAR_1)
   return 1;
 }

 return -!FUNC_0(VAR_0, VAR_1);
}
