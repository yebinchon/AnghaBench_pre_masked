
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; scalar_t__ tgt_wqe_timeout; int * ul_io; int * wq; int * rnode; scalar_t__ port_owned_abort_count; int abort_in_progress; scalar_t__ status_saved; int * abort_done; int * done; } ;
typedef TYPE_1__ ocs_hw_io_t ;


 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(ocs_hw_io_t *VAR_1)
{




 VAR_1->done = ((void*)0);
 VAR_1->abort_done = ((void*)0);
 VAR_1->status_saved = 0;
 VAR_1->abort_in_progress = VAR_0;
 VAR_1->port_owned_abort_count = 0;
 VAR_1->rnode = ((void*)0);
 VAR_1->type = 0xFFFF;
 VAR_1->wq = ((void*)0);
 VAR_1->ul_io = ((void*)0);
 VAR_1->tgt_wqe_timeout = 0;
}
