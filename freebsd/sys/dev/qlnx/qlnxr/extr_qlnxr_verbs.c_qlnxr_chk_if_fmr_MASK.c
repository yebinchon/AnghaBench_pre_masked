
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {size_t cons; } ;
struct qlnxr_qp {TYPE_3__ sq; TYPE_5__* wqe_wr_id; } ;
struct TYPE_10__ {int completed; } ;
struct TYPE_12__ {TYPE_4__ info; } ;
struct TYPE_11__ {scalar_t__ opcode; TYPE_2__* frmr; TYPE_6__* mr; } ;
struct TYPE_7__ {int completed; } ;
struct TYPE_8__ {TYPE_1__ info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void
FUNC_0(struct qlnxr_qp *VAR_2)
{





 if (VAR_2->wqe_wr_id[VAR_2->sq.cons].opcode == VAR_0)
  VAR_2->wqe_wr_id[VAR_2->sq.cons].frmr->info.completed++;


}
