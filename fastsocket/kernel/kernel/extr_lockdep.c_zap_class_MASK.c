
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lock_class {int * key; int lock_entry; int hash_entry; } ;
struct TYPE_2__ {int entry; struct lock_class* class; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct lock_class *VAR_2)
{
 int VAR_3;





 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[VAR_3].class == VAR_2)
   FUNC_0(&VAR_0[VAR_3].entry);
 }



 FUNC_0(&VAR_2->hash_entry);
 FUNC_0(&VAR_2->lock_entry);

 VAR_2->key = ((void*)0);
}
