
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int pidx; int size; int wq_pidx; TYPE_2__* queue; int in_use; } ;
struct t4_wq {TYPE_3__ rq; int error; } ;
struct TYPE_4__ {int host_pidx; } ;
struct TYPE_5__ {TYPE_1__ status; } ;


 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_1(struct t4_wq *VAR_2, u8 VAR_3)
{
 VAR_2->rq.in_use++;
 if (++VAR_2->rq.pidx == VAR_2->rq.size)
  VAR_2->rq.pidx = 0;
 VAR_2->rq.wq_pidx += FUNC_0(VAR_3*16, VAR_0);
 if (VAR_2->rq.wq_pidx >= VAR_2->rq.size * VAR_1)
  VAR_2->rq.wq_pidx %= VAR_2->rq.size * VAR_1;
 if (!VAR_2->error)
  VAR_2->rq.queue[VAR_2->rq.size].status.host_pidx = VAR_2->rq.pidx;
}
