
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int io_lock; int io_port_dnrx; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef int ocs_hw_io_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(ocs_hw_t *VAR_0)
{
 ocs_hw_io_t *VAR_1;
 int32_t VAR_2;

 FUNC_3(&VAR_0->io_lock);

 while (!FUNC_1(&VAR_0->io_port_dnrx)) {
  VAR_1 = FUNC_2(&VAR_0->io_port_dnrx);
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  if(VAR_2) {
   break;
  }
 }

 FUNC_4(&VAR_0->io_lock);
}
