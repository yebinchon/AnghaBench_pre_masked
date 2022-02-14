
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef TYPE_2__* uma_slab_t ;
struct malloc_type {scalar_t__ ks_magic; } ;
struct TYPE_7__ {scalar_t__ td_critnest; } ;
struct TYPE_6__ {int us_flags; unsigned long us_size; TYPE_1__* us_keg; } ;
struct TYPE_5__ {unsigned long uk_size; } ;


 int FUNC_0 (int,char*) ;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (void*,void*,int ) ;
 TYPE_4__* VAR_5 ;
 int FUNC_3 (void*,struct malloc_type*) ;
 scalar_t__ FUNC_4 (void*) ;
 void* FUNC_5 (size_t,struct malloc_type*,int) ;
 void* FUNC_6 (void*,size_t,struct malloc_type*,int) ;
 int FUNC_7 (size_t,unsigned long) ;
 unsigned long FUNC_8 (void*) ;
 TYPE_2__* FUNC_9 (int) ;

void *
FUNC_10(void *VAR_6, size_t VAR_7, struct malloc_type *VAR_8, int VAR_9)
{
 uma_slab_t VAR_10;
 unsigned long VAR_11;
 void *VAR_12;

 FUNC_0(VAR_8->ks_magic == VAR_1,
     ("realloc: bad malloc type magic"));
 FUNC_0(VAR_5->td_critnest == 0 || FUNC_1(),
     ("realloc: called with spinlock or critical section held"));


 if (VAR_6 == ((void*)0))
  return (FUNC_5(VAR_7, VAR_8, VAR_9));
 VAR_10 = FUNC_9((vm_offset_t)VAR_6 & ~(VAR_4));


 FUNC_0(VAR_10 != ((void*)0),
     ("realloc: address %p out of range", (void *)VAR_6));


 if (!(VAR_10->us_flags & VAR_3))
  VAR_11 = VAR_10->us_keg->uk_size;
 else
  VAR_11 = VAR_10->us_size;


 if (VAR_7 <= VAR_11
     && (VAR_7 > (VAR_11 >> VAR_2) || VAR_11 == VAR_0))
  return (VAR_6);



 if ((VAR_12 = FUNC_5(VAR_7, VAR_8, VAR_9)) == ((void*)0))
  return (((void*)0));


 FUNC_2(VAR_6, VAR_12, FUNC_7(VAR_7, VAR_11));
 FUNC_3(VAR_6, VAR_8);
 return (VAR_12);
}
