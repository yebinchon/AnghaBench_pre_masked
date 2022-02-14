
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int io_lock; int io_inuse; } ;
typedef TYPE_1__ ocs_hw_t ;
struct TYPE_9__ {TYPE_1__* hw; } ;
typedef TYPE_2__ ocs_hw_io_t ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0)
{
 ocs_hw_io_t *VAR_1 = (ocs_hw_io_t *)VAR_0;
 ocs_hw_t *VAR_2 = VAR_1->hw;


 FUNC_0(VAR_2, VAR_1);

 FUNC_3(&VAR_2->io_lock);

  FUNC_2(&VAR_2->io_inuse, VAR_1);
  FUNC_1(VAR_2, VAR_1);
 FUNC_4(&VAR_2->io_lock);
}
