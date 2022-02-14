
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ in_use; scalar_t__ cidx; scalar_t__ size; scalar_t__ pidx; TYPE_2__* queue; int msn; } ;
struct t4_wq {TYPE_3__ rq; int error; } ;
struct TYPE_4__ {scalar_t__ host_cidx; } ;
struct TYPE_5__ {TYPE_1__ status; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct t4_wq *VAR_0)
{
 VAR_0->rq.in_use--;
 VAR_0->rq.msn++;
 if (++VAR_0->rq.cidx == VAR_0->rq.size)
  VAR_0->rq.cidx = 0;
 FUNC_0((VAR_0->rq.cidx != VAR_0->rq.pidx) || VAR_0->rq.in_use == 0);
 if (!VAR_0->error)
  VAR_0->rq.queue[VAR_0->rq.size].status.host_cidx = VAR_0->rq.cidx;
}
