
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* free_func ) (unsigned long,void*) ;} ;
typedef TYPE_1__ xfs_mru_cache_t ;


 int FUNC_0 (unsigned long,void*) ;
 void* FUNC_1 (TYPE_1__*,unsigned long) ;

void
FUNC_2(
 xfs_mru_cache_t *VAR_0,
 unsigned long VAR_1)
{
 void *VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (VAR_2)
  VAR_0->free_func(VAR_1, VAR_2);
}
