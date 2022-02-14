
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int io_lock; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef int ocs_hw_io_t ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

ocs_hw_io_t *
FUNC_3(ocs_hw_t *VAR_0)
{
 ocs_hw_io_t *VAR_1 = ((void*)0);

 FUNC_1(&VAR_0->io_lock);
  VAR_1 = FUNC_0(VAR_0);
 FUNC_2(&VAR_0->io_lock);

 return VAR_1;
}
