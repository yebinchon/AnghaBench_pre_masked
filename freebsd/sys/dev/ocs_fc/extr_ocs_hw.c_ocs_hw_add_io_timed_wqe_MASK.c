
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ emulate_tgt_wqe_timeout; } ;
struct TYPE_8__ {int io_lock; int io_timed_wqe; TYPE_1__ config; } ;
typedef TYPE_2__ ocs_hw_t ;
struct TYPE_9__ {int submit_ticks; scalar_t__ tgt_wqe_timeout; } ;
typedef TYPE_3__ ocs_hw_io_t ;


 int FUNC_0 () ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void
FUNC_4(ocs_hw_t *VAR_0, ocs_hw_io_t *VAR_1)
{
 if (VAR_0->config.emulate_tgt_wqe_timeout && VAR_1->tgt_wqe_timeout) {




  FUNC_2(&VAR_0->io_lock);
   FUNC_1(&VAR_0->io_timed_wqe, VAR_1);
   VAR_1->submit_ticks = FUNC_0();
  FUNC_3(&VAR_0->io_lock);
 }
}
