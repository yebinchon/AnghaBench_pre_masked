
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef TYPE_2__* uma_slab_t ;
typedef int u_long ;
struct malloc_type {int dummy; } ;
struct TYPE_7__ {int us_flags; int us_size; TYPE_1__* us_keg; } ;
struct TYPE_6__ {int uk_size; int uk_zones; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (void**,struct malloc_type*) ;
 int FUNC_2 (void*,struct malloc_type*,int) ;
 int FUNC_3 (struct malloc_type*,int) ;
 int FUNC_4 (char*,void*,void*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,void*,TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int) ;

void
FUNC_8(void *VAR_2, struct malloc_type *VAR_3)
{
 uma_slab_t VAR_4;
 u_long VAR_5;






 if (VAR_2 == ((void*)0))
  return;

 VAR_4 = FUNC_7((vm_offset_t)VAR_2 & (~VAR_1));
 if (VAR_4 == ((void*)0))
  FUNC_4("free: address %p(%p) has not been allocated.\n",
      VAR_2, (void *)((u_long)VAR_2 & (~VAR_1)));

 if (!(VAR_4->us_flags & VAR_0)) {
  VAR_5 = VAR_4->us_keg->uk_size;



  FUNC_6(FUNC_0(&VAR_4->us_keg->uk_zones), VAR_2, VAR_4);
 } else {
  VAR_5 = VAR_4->us_size;
  FUNC_5(VAR_4);
 }
 FUNC_3(VAR_3, VAR_5);
}
