
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ use_dif_sec_xri; } ;
struct TYPE_9__ {TYPE_1__ workaround; int io_free; int io_wait_free; } ;
typedef TYPE_2__ ocs_hw_t ;
struct TYPE_10__ {int state; scalar_t__ xbusy; } ;
typedef TYPE_3__ ocs_hw_io_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2(ocs_hw_t *VAR_2, ocs_hw_io_t *VAR_3)
{
 if (VAR_3->xbusy) {

  FUNC_1(&VAR_2->io_wait_free, VAR_3);
  VAR_3->state = VAR_1;
 } else {

  FUNC_1(&VAR_2->io_free, VAR_3);
  VAR_3->state = VAR_0;
 }


 if (VAR_2->workaround.use_dif_sec_xri) {
  FUNC_0(VAR_2);
 }
}
