
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_10__ {int io_lock; int io_free; int io_port_owned; scalar_t__ auto_xfer_rdy_enabled; } ;
typedef TYPE_1__ ocs_hw_t ;
struct TYPE_11__ {scalar_t__ is_port_owned; } ;
typedef TYPE_2__ ocs_hw_io_t ;


 TYPE_2__* FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(ocs_hw_t *VAR_0, uint16_t VAR_1, uint16_t VAR_2)
{
 ocs_hw_io_t *VAR_3;
 uint32_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = FUNC_0(VAR_0, VAR_1 + VAR_4);





  if (VAR_0->auto_xfer_rdy_enabled) {
   FUNC_1(VAR_0, VAR_3);
  }

  FUNC_4(&VAR_0->io_lock);
   FUNC_3(&VAR_0->io_port_owned, VAR_3);
   VAR_3->is_port_owned = 0;
   FUNC_2(&VAR_0->io_free, VAR_3);
  FUNC_5(&VAR_0->io_lock);
 }
}
