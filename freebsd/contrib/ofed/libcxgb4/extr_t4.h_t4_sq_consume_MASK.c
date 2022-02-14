
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int in_use; scalar_t__ cidx; scalar_t__ flush_cidx; scalar_t__ size; scalar_t__ pidx; TYPE_2__* queue; } ;
struct t4_wq {TYPE_3__ sq; int error; } ;
struct TYPE_4__ {scalar_t__ host_cidx; } ;
struct TYPE_5__ {TYPE_1__ status; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct t4_wq *VAR_0)
{
 FUNC_0(VAR_0->sq.in_use >= 1);
 if (VAR_0->sq.cidx == VAR_0->sq.flush_cidx)
                VAR_0->sq.flush_cidx = -1;
 VAR_0->sq.in_use--;
 if (++VAR_0->sq.cidx == VAR_0->sq.size)
  VAR_0->sq.cidx = 0;
 FUNC_0((VAR_0->sq.cidx != VAR_0->sq.pidx) || VAR_0->sq.in_use == 0);
 if (!VAR_0->error){


  VAR_0->sq.queue[VAR_0->sq.size].status.host_cidx = VAR_0->sq.cidx;
 }
}
